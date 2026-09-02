note
	description: "[
		SentencePiece unigram tokenizer (pure Eiffel).
		Loads vocabulary from a plain-text file (id TAB piece TAB score).
		Uses Viterbi algorithm for optimal segmentation.
		Compatible with MarianMT / Helsinki-NLP opus-mt models.
	]"
	author: "Larry Rix"

class
	ONNX_TOKENIZER

create
	make

feature {NONE} -- Initialization

	make (a_vocab_path: STRING)
			-- Load vocabulary from text file at `a_vocab_path`.
			-- File format: id TAB piece TAB score (UTF-8 encoded).
		require
			path_not_empty: not a_vocab_path.is_empty
		local
			l_file: PLAIN_TEXT_FILE
			l_line: STRING
			l_parts: LIST [STRING]
			l_piece: STRING_32
			l_score: REAL_64
			l_id: INTEGER
		do
			vocab_path := a_vocab_path
			create vocab_pieces.make (65000)
			create vocab_scores.make (65000)
			create piece_to_id.make (70000)

			-- Defaults for MarianMT
			eos_token_id := 0
			unk_token_id := 1
			pad_token_id := eos_token_id
			bos_token_id := eos_token_id
			max_piece_length := 0

			create l_file.make_open_read (a_vocab_path)
			from
				l_id := 0
			until
				l_file.end_of_file
			loop
				l_file.read_line
				l_line := l_file.last_string
				if not l_line.is_empty then
					l_parts := l_line.split ('%T')
					if l_parts.count >= 3 then
						-- Format: id TAB piece TAB score
						l_id := l_parts [1].to_integer
						l_piece := utf8_to_string_32 (l_parts [2])
						l_score := l_parts [3].to_double
					elseif l_parts.count >= 2 then
						-- Format: piece TAB score
						l_piece := utf8_to_string_32 (l_parts [1])
						l_score := l_parts [2].to_double
					else
						l_piece := utf8_to_string_32 (l_line)
						l_score := -100.0
					end

					-- Ensure vocab_pieces/scores are large enough for this ID
					from until vocab_pieces.count > l_id loop
						vocab_pieces.force ({STRING_32} "")
						vocab_scores.force (-100.0)
					end
					vocab_pieces [l_id + 1] := l_piece
					vocab_scores [l_id + 1] := l_score
					piece_to_id.force (l_id, l_piece)

					if l_piece.count > max_piece_length then
						max_piece_length := l_piece.count
					end

					-- Detect special tokens
					if l_piece.same_string ({STRING_32} "</s>") then
						eos_token_id := l_id
					elseif l_piece.same_string ({STRING_32} "<unk>") then
						unk_token_id := l_id
					elseif l_piece.same_string ({STRING_32} "<pad>") then
						pad_token_id := l_id
					end
				end
			end
			l_file.close

			vocab_size := vocab_pieces.count
			is_loaded := vocab_size > 0
		ensure
			loaded: is_loaded implies vocab_size > 0
		end

feature -- Status

	is_loaded: BOOLEAN
			-- Has vocabulary been loaded successfully?

	vocab_size: INTEGER
			-- Number of tokens in vocabulary.

	vocab_path: STRING
			-- Path to vocabulary file.

feature -- Special Tokens

	eos_token_id: INTEGER_64
			-- End of sequence token ID.

	bos_token_id: INTEGER_64
			-- Beginning of sequence token ID.

	pad_token_id: INTEGER_64
			-- Padding token ID.

	unk_token_id: INTEGER_64
			-- Unknown token ID.

feature -- Encoding

	encode (a_text: STRING_32): ARRAY [INTEGER_64]
			-- Tokenize text into token IDs using Viterbi unigram segmentation.
		require
			loaded: is_loaded
			text_not_empty: not a_text.is_empty
		local
			l_normalized: STRING_32
			l_tokens: ARRAYED_LIST [INTEGER_64]
		do
			-- Normalize: prepend word boundary marker
			l_normalized := normalize_text (a_text)

			-- Viterbi segmentation
			l_tokens := viterbi_segment (l_normalized)

			-- Add EOS token
			l_tokens.force (eos_token_id)

			Result := l_tokens.to_array
		ensure
			result_not_void: Result /= Void
			has_eos: Result.count > 0 implies Result [Result.upper] = eos_token_id
		end

	encode_pair (a_text: STRING_32; a_lang_prefix: STRING_32): ARRAY [INTEGER_64]
			-- Encode with language prefix (e.g., ">>eng<<").
		require
			loaded: is_loaded
			text_not_empty: not a_text.is_empty
		local
			l_prefixed: STRING_32
		do
			create l_prefixed.make (a_lang_prefix.count + a_text.count + 1)
			l_prefixed.append (a_lang_prefix)
			l_prefixed.append_character (' ')
			l_prefixed.append (a_text)
			Result := encode (l_prefixed)
		end

feature -- Decoding

	decode (a_token_ids: ARRAY [INTEGER_64]): STRING_32
			-- Convert token IDs back to text.
		require
			loaded: is_loaded
			ids_not_void: a_token_ids /= Void
		local
			l_id: INTEGER
			i: INTEGER
		do
			create Result.make (a_token_ids.count * 4)
			from i := a_token_ids.lower until i > a_token_ids.upper loop
				l_id := a_token_ids [i].to_integer_32
				if l_id /= eos_token_id.to_integer_32 and l_id /= pad_token_id.to_integer_32 then
					if l_id >= 0 and l_id < vocab_size then
						Result.append (vocab_pieces [l_id + 1])
					end
				end
				i := i + 1
			end
			-- Replace SentencePiece word boundary marker with space
			Result.replace_substring_all ({STRING_32} "%/9601/", {STRING_32} " ")
			-- Trim leading space
			Result.left_adjust
		ensure
			result_not_void: Result /= Void
		end

feature {NONE} -- Implementation

	vocab_pieces: ARRAYED_LIST [STRING_32]
			-- Token ID to piece mapping (1-indexed, id+1).

	vocab_scores: ARRAYED_LIST [REAL_64]
			-- Token ID to log-probability score (1-indexed, id+1).

	piece_to_id: HASH_TABLE [INTEGER, STRING_32]
			-- Piece string to token ID mapping.

	max_piece_length: INTEGER
			-- Length of longest piece in vocabulary.

	normalize_text (a_text: STRING_32): STRING_32
			-- Normalize text for tokenization.
			-- Prepend U+2581 (lower one eighth block) at word boundaries.
		local
			i: INTEGER
		do
			create Result.make (a_text.count * 2)
			-- SentencePiece prepends word boundary marker
			Result.append_character ('%/9601/')  -- U+2581

			from i := 1 until i > a_text.count loop
				if a_text [i] = ' ' then
					Result.append_character ('%/9601/')
				else
					Result.append_character (a_text [i])
				end
				i := i + 1
			end
		end

	utf8_to_string_32 (a_utf8: READABLE_STRING_8): STRING_32
			-- Decode UTF-8 encoded bytes to proper Unicode STRING_32.
		local
			i: INTEGER
			l_byte: NATURAL_32
			l_cp: NATURAL_32
		do
			create Result.make (a_utf8.count)
			from i := 1 until i > a_utf8.count loop
				l_byte := a_utf8.code (i)
				if l_byte < {NATURAL_32} 0x80 then
					-- ASCII: single byte
					Result.append_code (l_byte)
					i := i + 1
				elseif l_byte < {NATURAL_32} 0xE0 then
					-- 2-byte sequence
					l_cp := l_byte.bit_and ({NATURAL_32} 0x1F).bit_shift_left (6)
					if i + 1 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 1).bit_and ({NATURAL_32} 0x3F))
					end
					Result.append_code (l_cp)
					i := i + 2
				elseif l_byte < {NATURAL_32} 0xF0 then
					-- 3-byte sequence
					l_cp := l_byte.bit_and ({NATURAL_32} 0x0F).bit_shift_left (12)
					if i + 1 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 1).bit_and ({NATURAL_32} 0x3F).bit_shift_left (6))
					end
					if i + 2 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 2).bit_and ({NATURAL_32} 0x3F))
					end
					Result.append_code (l_cp)
					i := i + 3
				else
					-- 4-byte sequence
					l_cp := l_byte.bit_and ({NATURAL_32} 0x07).bit_shift_left (18)
					if i + 1 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 1).bit_and ({NATURAL_32} 0x3F).bit_shift_left (12))
					end
					if i + 2 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 2).bit_and ({NATURAL_32} 0x3F).bit_shift_left (6))
					end
					if i + 3 <= a_utf8.count then
						l_cp := l_cp.bit_or (a_utf8.code (i + 3).bit_and ({NATURAL_32} 0x3F))
					end
					Result.append_code (l_cp)
					i := i + 4
				end
			end
		end

	viterbi_segment (a_text: STRING_32): ARRAYED_LIST [INTEGER_64]
			-- Find highest-probability segmentation using Viterbi algorithm.
			-- O(n * max_piece_length) dynamic programming.
		local
			l_n: INTEGER
			l_best_score: ARRAY [REAL_64]
			l_best_len: ARRAY [INTEGER]
			i, l_len: INTEGER
			l_piece: STRING_32
			l_score: REAL_64
			l_candidate: REAL_64
			l_pos: INTEGER
			l_token_id: INTEGER
		do
			l_n := a_text.count
			create l_best_score.make_filled (-1.0e30, 0, l_n)
			create l_best_len.make_filled (1, 0, l_n)
			l_best_score [0] := {REAL_64} 0.0

			-- Forward pass: find optimal segmentation
			from i := 0 until i >= l_n loop
				if l_best_score [i] > -1.0e29 then
					from l_len := 1 until l_len > max_piece_length or i + l_len > l_n loop
						l_piece := a_text.substring (i + 1, i + l_len)
						if piece_to_id.has (l_piece) then
							l_token_id := piece_to_id [l_piece]
							l_score := vocab_scores [l_token_id + 1]
							l_candidate := l_best_score [i] + l_score
							if l_candidate > l_best_score [i + l_len] then
								l_best_score [i + l_len] := l_candidate
								l_best_len [i + l_len] := l_len
							end
						end
						l_len := l_len + 1
					end
				end
				i := i + 1
			end

			-- Backtrack to recover tokens
			create Result.make (l_n // 3 + 1)
			from l_pos := l_n until l_pos <= 0 loop
				l_len := l_best_len [l_pos]
				l_piece := a_text.substring (l_pos - l_len + 1, l_pos)
				if piece_to_id.has (l_piece) then
					Result.put_front (piece_to_id [l_piece].to_integer_64)
				else
					-- Unknown token: try character by character
					Result.put_front (unk_token_id)
				end
				l_pos := l_pos - l_len
			end
		ensure
			result_not_void: Result /= Void
		end

invariant
	vocab_pieces_not_void: vocab_pieces /= Void
	vocab_scores_not_void: vocab_scores /= Void
	piece_to_id_not_void: piece_to_id /= Void

end
