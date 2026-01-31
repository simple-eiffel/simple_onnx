note
	description: "ONNX tensor shape (dimensions)"
	author: "Larry Rix"

class
	ONNX_SHAPE

create
	make

feature {NONE} -- Initialization

	make (a_dimensions: ARRAY [INTEGER])
			-- Create shape with `a_dimensions`.
		require
			dimensions_not_void: a_dimensions /= Void
			dimensions_not_empty: a_dimensions.count > 0
			all_positive: across a_dimensions as ic all ic >= 0 end
		do
			create dimensions.make_filled (0, 1, a_dimensions.count)
			across 1 |..| a_dimensions.count as ic loop
				dimensions [ic] := a_dimensions [a_dimensions.lower + ic - 1]
			end
		ensure
			rank_set: rank = a_dimensions.count
			dimensions_copied: across 1 |..| a_dimensions.count as ic all
							   dimensions [ic] = a_dimensions [a_dimensions.lower + ic - 1]
						   end
		end

feature -- Access

	dimensions: ARRAY [INTEGER]
			-- Tensor dimensions as array.

	rank: INTEGER
			-- Number of dimensions.
		do
			Result := dimensions.count
		ensure
			non_negative: Result >= 0
		end

	element_count: INTEGER
			-- Product of all dimensions (total element count).
		local
			i: INTEGER
		do
			Result := 1
			from i := 1 until i > rank
			loop
				Result := Result * dimensions [i]
				i := i + 1
			end
		ensure
			positive: Result > 0
		end

	get_dimension (index: INTEGER): INTEGER
			-- Get dimension at `index` (1-based).
		require
			valid_index: index >= 1 and index <= rank
		do
			Result := dimensions [index]
		ensure
			result_non_negative: Result >= 0
		end

feature -- Queries

	matches (other: ONNX_SHAPE): BOOLEAN
			-- Does this shape exactly match `other`?
		require
			other_not_void: other /= Void
		do
			if rank /= other.rank then
				Result := False
			else
				Result := True
				across 1 |..| rank as ic until not Result
				loop
					Result := dimensions [ic] = other.dimensions [ic]
				end
			end
		ensure
			definition: Result = (rank = other.rank and
								   (across 1 |..| rank as ic all dimensions [ic] = other.dimensions [ic] end))
		end

	compatible_with (other: ONNX_SHAPE): BOOLEAN
			-- Can this shape be used as input for operations expecting `other` shape?
			-- Compatible if: same rank and all dims match (strict matching for Phase 1)
		require
			other_not_void: other /= Void
		do
			Result := matches (other)
		ensure
			definition: Result = matches (other)
		end

feature -- String Representation

	to_string: STRING
			-- Shape as human-readable string: "1, 77, 768" etc.
		local
			i: INTEGER
		do
			create Result.make_empty
			from i := 1 until i > rank
			loop
				if i > 1 then
					Result.append (", ")
				end
				Result.append (dimensions [i].out)
				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
		end

invariant
	dimensions_not_void: dimensions /= Void
	dimensions_positive: across dimensions as ic all ic >= 0 end
	rank_positive: rank > 0

end
