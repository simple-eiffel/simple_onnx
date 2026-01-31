note
	description: "ONNX Runtime environment (global singleton)"
	author: "Larry Rix"

class
	ONNX_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize ONNX Runtime environment.
		do
			available_providers := create_provider_list
		ensure
			providers_created: available_providers /= Void
		end

feature -- Access

	available_providers: ARRAYED_LIST [STRING]
			-- List of available execution providers on this system.

	is_provider_available (a_name: STRING): BOOLEAN
			-- Is execution provider `a_name` available?
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
		do
			Result := available_providers.has (a_name)
		ensure
			definition: Result = available_providers.has (a_name)
		end

	version_info: STRING
			-- ONNX Runtime version string.
		do
			Result := "ONNX Runtime 1.15+"
		ensure
			result_not_empty: not Result.is_empty
		end

feature {NONE} -- Implementation

	create_provider_list: ARRAYED_LIST [STRING]
			-- Create list of available providers.
		local
			providers: ARRAYED_LIST [STRING]
		do
			create providers.make (5)
			-- CPU provider always available
			providers.force ("CPUExecutionProvider")
			-- TODO: Query C API for available GPU providers in Phase 4
			Result := providers
		ensure
			result_not_void: Result /= Void
			cpu_provider_present: Result.has ("CPUExecutionProvider")
		end

invariant
	providers_not_void: available_providers /= Void
	cpu_available: available_providers.has ("CPUExecutionProvider")

end
