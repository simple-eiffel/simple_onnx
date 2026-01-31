# 07 - Complete Specification (Formal Classes)

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Formal Specification
**Author:** Claude Code

---

## Executive Summary

This document provides complete formal class specifications in Eiffel pseudocode. Ready for Phase 1 implementation.

---

## Class: SIMPLE_ONNX (Facade)

```eiffel
class
    SIMPLE_ONNX

create
    make

feature -- Initialization

    make
        -- Initialize ONNX Runtime environment.
        do
            create environment.make
        ensure
            environment_initialized: environment /= Void
        end

feature -- Model Management

    load_model (a_path: STRING): ONNX_MODEL
        -- Load ONNX model from file path.
        require
            path_not_void: a_path /= Void
            path_not_empty: a_path.count > 0
            path_ends_with_onnx: a_path.ends_with (".onnx")
            file_exists: file_system.file_exists (a_path)
        do
            -- Call ONNX C API
            Result := do_load_model (a_path)
        ensure
            result_not_void: Result /= Void
            model_has_inputs: Result.input_count > 0
            model_has_outputs: Result.output_count > 0
        end

    create_session (a_model: ONNX_MODEL): ONNX_SESSION
        -- Create inference session for model.
        require
            model_not_void: a_model /= Void
            model_valid: a_model.input_count > 0
        do
            create Result.make (a_model, environment)
        ensure
            result_not_void: Result /= Void
            session_ready: Result.model_metadata /= Void
        end

feature -- Provider Information

    available_providers: ARRAY [STRING]
        -- List available execution providers.
        do
            Result := environment.available_providers
        ensure
            result_not_void: Result /= Void
            result_not_empty: Result.count >= 1
            has_cpu: across Result as ic some ic.item ~ "CPU" end
        end

    is_provider_available (a_provider: STRING): BOOLEAN
        -- Is provider available on this system?
        require
            provider_not_void: a_provider /= Void
        do
            Result := available_providers.has (a_provider)
        ensure
            cpu_always_available: (a_provider ~ "CPU") implies Result = True
        end

    version_info: STRING
        -- ONNX Runtime version string.
        do
            Result := environment.version_info
        ensure
            result_not_void: Result /= Void
            result_not_empty: Result.count > 0
        end

feature {NONE} -- Implementation

    environment: ONNX_ENVIRONMENT
        -- Singleton ONNX Runtime environment

    do_load_model (a_path: STRING): ONNX_MODEL
        -- Call C API to load model
        external "C"
            alias "c_load_model"
        end

invariant
    environment_not_void: environment /= Void

end -- class SIMPLE_ONNX
```

---

## Class: ONNX_SESSION

```eiffel
class
    ONNX_SESSION

create
    make

feature -- Initialization

    make (a_model: ONNX_MODEL; a_env: ONNX_ENVIRONMENT)
        -- Create session for model in environment.
        require
            model_not_void: a_model /= Void
            env_not_void: a_env /= Void
        do
            model := a_model
            environment := a_env
            create_session_handle
            provider := "CPU"  -- Default
            optimization_level := 1  -- BASIC
        ensure
            model_set: model = a_model
            env_set: environment = a_env
            session_ready: session_handle /= default_pointer
            provider_set: provider ~ "CPU"
        end

feature -- Configuration (Fluent)

    set_provider (a_provider: STRING): like Current
        -- Set execution provider.
        require
            provider_not_void: a_provider /= Void
            provider_available: environment.is_provider_available (a_provider)
            model_loaded: model /= Void
        do
            provider := a_provider
            configure_provider (session_handle, a_provider)
            Result := Current
        ensure
            result_is_current: Result = Current
            provider_set: provider ~ a_provider
        end

    set_optimization_level (a_level: INTEGER): like Current
        -- Set optimization level (0=disabled, 3=all).
        require
            level_valid: a_level >= 0 and a_level <= 3
            model_loaded: model /= Void
        do
            optimization_level := a_level
            configure_optimization (session_handle, a_level)
            Result := Current
        ensure
            result_is_current: Result = Current
            level_set: optimization_level = a_level
        end

feature -- Inference

    execute (a_input: ONNX_TENSOR): ONNX_RESULT
        -- Execute inference with input tensor.
        require
            input_not_void: a_input /= Void
            model_loaded: model /= Void
            input_shape_valid: tensor_shape_compatible (a_input.shape, model.input_shape (0))
            input_dtype_valid: a_input.data_type = model.input_dtype (0)
        do
            Result := do_execute (a_input)
        ensure
            result_not_void: Result /= Void
            success_has_output: Result.is_success implies (Result.output_tensor /= Void)
            failure_has_error: (not Result.is_success) implies (Result.error_message /= Void)
            success_xor_error: Result.is_success xor (Result.error_code /= 0)
        end

feature -- Metadata

    model_metadata: detachable ONNX_MODEL
        -- Get loaded model metadata.
        do
            Result := model
        end

feature -- Lifecycle

    unload
        -- Free session and model memory.
        do
            if session_handle /= default_pointer then
                release_session (session_handle)
                session_handle := default_pointer
            end
            model := Void
        ensure
            model_unloaded: model = Void
            session_freed: session_handle = default_pointer
        end

feature {NONE} -- Implementation

    model: detachable ONNX_MODEL
    environment: ONNX_ENVIRONMENT
    session_handle: POINTER
    provider: STRING
    optimization_level: INTEGER

    create_session_handle
        -- Call C API to create OrtSession
        external "C"
            alias "c_create_session"
        end

    configure_provider (handle: POINTER; name: STRING)
        -- Call C API to set provider
        external "C"
            alias "c_session_set_provider"
        end

    configure_optimization (handle: POINTER; level: INTEGER)
        -- Call C API to set optimization
        external "C"
            alias "c_session_set_optimization"
        end

    do_execute (input: ONNX_TENSOR): ONNX_RESULT
        -- Call C API OrtRun
        external "C"
            alias "c_session_run"
        end

    release_session (handle: POINTER)
        -- Call C API OrtReleaseSession
        external "C"
            alias "OrtReleaseSession"
        end

    tensor_shape_compatible (provided: ONNX_SHAPE; expected: ONNX_SHAPE): BOOLEAN
        -- Check if provided shape matches expected (allow dynamic)
        do
            Result := provided.compatible_with (expected)
        end

invariant
    model_session_consistency: (model /= Void) = (session_handle /= default_pointer)
    provider_meaningful: model /= Void implies (provider.count > 0)
    optimization_in_range: model /= Void implies (optimization_level >= 0 and optimization_level <= 3)

end -- class ONNX_SESSION
```

---

## Class: ONNX_TENSOR

```eiffel
class
    ONNX_TENSOR

create
    make_float32, make_float16, make_int32, make_int64, make_bool

feature -- Initialization

    make_float32 (a_shape: ARRAY [INTEGER])
        require
            shape_not_void: a_shape /= Void
            shape_not_empty: a_shape.count > 0
            shape_positive: across a_shape as ic all ic.item > 0 end
        do
            shape := create {ONNX_SHAPE}.make (a_shape)
            data_type := {ONNX_DATA_TYPE}.float32
            allocate_data
        ensure
            shape_set: shape /= Void
            dtype_set: data_type = {ONNX_DATA_TYPE}.float32
        end

    make_float16 (a_shape: ARRAY [INTEGER])
        require
            shape_not_void: a_shape /= Void
            shape_not_empty: a_shape.count > 0
        do
            shape := create {ONNX_SHAPE}.make (a_shape)
            data_type := {ONNX_DATA_TYPE}.float16
            allocate_data
        ensure
            shape_set: shape /= Void
            dtype_set: data_type = {ONNX_DATA_TYPE}.float16
        end

    make_int32 (a_shape: ARRAY [INTEGER])
        require
            shape_not_void: a_shape /= Void
            shape_not_empty: a_shape.count > 0
        do
            shape := create {ONNX_SHAPE}.make (a_shape)
            data_type := {ONNX_DATA_TYPE}.int32
            allocate_data
        ensure
            shape_set: shape /= Void
            dtype_set: data_type = {ONNX_DATA_TYPE}.int32
        end

    make_int64 (a_shape: ARRAY [INTEGER])
        require
            shape_not_void: a_shape /= Void
            shape_not_empty: a_shape.count > 0
        do
            shape := create {ONNX_SHAPE}.make (a_shape)
            data_type := {ONNX_DATA_TYPE}.int64
            allocate_data
        ensure
            shape_set: shape /= Void
            dtype_set: data_type = {ONNX_DATA_TYPE}.int64
        end

    make_bool (a_shape: ARRAY [INTEGER])
        require
            shape_not_void: a_shape /= Void
            shape_not_empty: a_shape.count > 0
        do
            shape := create {ONNX_SHAPE}.make (a_shape)
            data_type := {ONNX_DATA_TYPE}.bool
            allocate_data
        ensure
            shape_set: shape /= Void
            dtype_set: data_type = {ONNX_DATA_TYPE}.bool
        end

feature -- Data Management

    set_data_from_array (a_values: ARRAY [REAL_32]): ONNX_TENSOR
        require
            values_not_void: a_values /= Void
            size_matches: a_values.count = element_count
            dtype_matches: data_type = {ONNX_DATA_TYPE}.float32
        do
            copy_to_c_memory (a_values)
            Result := Current
        ensure
            result_is_current: Result = Current
            data_filled: data_filled_flag
        end

    to_array: detachable ARRAY [REAL_32]
        -- Extract tensor as Eiffel array (copy).
        require
            data_filled: data_filled_flag
        do
            Result := copy_from_c_memory
        ensure
            result_not_void: Result /= Void
            result_size_matches: Result.count = element_count
        end

feature -- Properties

    shape: ONNX_SHAPE
        -- Tensor dimensions.

    data_type: ONNX_DATA_TYPE
        -- Element data type.

    element_count: INTEGER
        -- Total elements (shape product).
        do
            Result := shape.element_count
        end

feature {NONE} -- Implementation

    internal_data: POINTER
        -- C-allocated memory for tensor data

    data_filled_flag: BOOLEAN
        -- Has data been set?

    allocate_data
        -- Allocate C memory for tensor
        external "C"
            alias "malloc"
        end

    copy_to_c_memory (a_values: ARRAY [REAL_32])
        -- Copy from Eiffel array to C memory
        external "C"
            alias "c_copy_to_c"
        end

    copy_from_c_memory: ARRAY [REAL_32]
        -- Copy from C memory to Eiffel array
        external "C"
            alias "c_copy_from_c"
        end

invariant
    shape_exists: shape /= Void
    dtype_exists: data_type /= Void
    element_count_positive: element_count > 0 or shape.has_dynamic_dimension

end -- class ONNX_TENSOR
```

---

## Class: ONNX_RESULT

```eiffel
class
    ONNX_RESULT

feature -- Status

    is_success: BOOLEAN
        -- Did inference succeed?
        do
            Result := error_code = 0
        end

feature -- Output

    output_tensor: detachable ONNX_TENSOR
        -- Output tensor (Void if failed).
        do
            if is_success then
                Result := internal_output
            else
                Result := Void
            end
        ensure
            success_has_output: is_success implies (Result /= Void)
            failure_has_none: (not is_success) implies (Result = Void)
        end

feature -- Error

    error_code: INTEGER
        -- Error code (0=success, 1-6=error categories).

    error_message: detachable STRING
        -- Human-readable error message.

feature -- Helpers

    status: STRING
        -- "Success" or "Error"
        do
            if is_success then
                Result := "Success"
            else
                Result := "Error"
            end
        end

    summary: STRING
        -- Full summary with output shape or error
        do
            if is_success and output_tensor /= Void then
                Result := "Success: shape " + output_tensor.shape.out
            elseif not is_success then
                Result := "Error: " + (error_message or else "Unknown error")
            else
                Result := "Success"
            end
        end

feature {ONNX_SESSION} -- Creation (Internal)

    make_success (a_output: ONNX_TENSOR)
        -- Success result with output tensor.
        do
            error_code := 0
            internal_output := a_output
            error_message := Void
        ensure
            is_success: is_success
            output_set: output_tensor = a_output
        end

    make_error (a_code: INTEGER; a_message: STRING)
        -- Error result with code and message.
        do
            error_code := a_code
            error_message := a_message
            internal_output := Void
        ensure
            is_error: not is_success
            code_set: error_code = a_code
            message_set: error_message ~ a_message
        end

feature {NONE} -- Implementation

    internal_output: detachable ONNX_TENSOR

invariant
    success_xor_error: is_success xor (error_code /= 0)
    success_has_output: is_success implies (output_tensor /= Void)
    failure_has_message: (not is_success) implies (error_message /= Void and error_message.count > 0)

end -- class ONNX_RESULT
```

---

## Class: ONNX_MODEL

```eiffel
class
    ONNX_MODEL

create
    make

feature -- Initialization

    make (a_path: STRING; a_inputs: ARRAY [NODE_ARG]; a_outputs: ARRAY [NODE_ARG])
        require
            path_not_void: a_path /= Void
            inputs_not_void: a_inputs /= Void
            inputs_not_empty: a_inputs.count > 0
            outputs_not_void: a_outputs /= Void
            outputs_not_empty: a_outputs.count > 0
        do
            path := a_path
            input_nodes := a_inputs
            output_nodes := a_outputs
        ensure
            path_set: path ~ a_path
            inputs_set: input_count = a_inputs.count
            outputs_set: output_count = a_outputs.count
        end

feature -- Input Information

    input_count: INTEGER
        do
            Result := input_nodes.count
        end

    input_name (a_index: INTEGER): STRING
        require
            index_valid: a_index >= 0 and a_index < input_count
        do
            Result := input_nodes [a_index].name
        ensure
            result_not_void: Result /= Void
        end

    input_shape (a_index: INTEGER): ONNX_SHAPE
        require
            index_valid: a_index >= 0 and a_index < input_count
        do
            Result := input_nodes [a_index].shape
        ensure
            result_not_void: Result /= Void
        end

    input_dtype (a_index: INTEGER): ONNX_DATA_TYPE
        require
            index_valid: a_index >= 0 and a_index < input_count
        do
            Result := input_nodes [a_index].data_type
        ensure
            result_not_void: Result /= Void
        end

feature -- Output Information

    output_count: INTEGER
        do
            Result := output_nodes.count
        end

    output_name (a_index: INTEGER): STRING
        require
            index_valid: a_index >= 0 and a_index < output_count
        do
            Result := output_nodes [a_index].name
        ensure
            result_not_void: Result /= Void
        end

    output_shape (a_index: INTEGER): ONNX_SHAPE
        require
            index_valid: a_index >= 0 and a_index < output_count
        do
            Result := output_nodes [a_index].shape
        ensure
            result_not_void: Result /= Void
        end

    output_dtype (a_index: INTEGER): ONNX_DATA_TYPE
        require
            index_valid: a_index >= 0 and a_index < output_count
        do
            Result := output_nodes [a_index].data_type
        ensure
            result_not_void: Result /= Void
        end

feature -- Model Information

    opset_version: INTEGER
        -- ONNX operator set version.

    description: detachable STRING
        -- Model description (if available).

feature {NONE} -- Implementation

    path: STRING
    input_nodes: ARRAY [ONNX_NODE_ARG]
    output_nodes: ARRAY [ONNX_NODE_ARG]

invariant
    inputs_exist: input_count > 0
    outputs_exist: output_count > 0

end -- class ONNX_MODEL
```

---

## Class: ONNX_SHAPE

```eiffel
class
    ONNX_SHAPE

create
    make

feature -- Initialization

    make (a_dimensions: ARRAY [INTEGER])
        require
            dims_not_void: a_dimensions /= Void
            dims_not_empty: a_dimensions.count > 0
        do
            dimensions := a_dimensions.twin
        ensure
            dimensions_set: dimensions.count = a_dimensions.count
        end

feature -- Properties

    dimensions: ARRAY [INTEGER]
        -- Dimension sizes.

    rank: INTEGER
        do
            Result := dimensions.count
        end

    element_count: INTEGER
        -- Product of all positive dimensions.
        do
            Result := 1
            across dimensions as ic loop
                if ic.item > 0 then
                    Result := Result * ic.item
                end
            end
        end

    has_dynamic_dimension: BOOLEAN
        -- Any dimension is -1 (variable)?
        do
            Result := across dimensions as ic some ic.item = -1 end
        end

feature -- Operations

    matches (other: ONNX_SHAPE): BOOLEAN
        -- Exact match with other shape?
        require
            other_not_void: other /= Void
        do
            Result := dimensions ~ other.dimensions
        end

    compatible_with (other: ONNX_SHAPE): BOOLEAN
        -- Compatible (allow dynamic dimensions)?
        require
            other_not_void: other /= Void
        do
            if rank /= other.rank then
                Result := False
            else
                Result := across 1 |..| rank as ic all
                  (dimensions [ic.item] = -1 or
                   other.dimensions [ic.item] = -1 or
                   dimensions [ic.item] = other.dimensions [ic.item])
                end
            end
        end

    out: STRING
        -- String representation "[1, 77, 768]".
        do
            create Result.make_empty
            Result.append ("[")
            across dimensions as ic loop
                Result.append (ic.item.out)
                if ic.cursor < dimensions.count then
                    Result.append (", ")
                end
            end
            Result.append ("]")
        end

invariant
    dimensions_not_empty: dimensions.count > 0

end -- class ONNX_SHAPE
```

---

## Class: ONNX_DATA_TYPE

```eiffel
class
    ONNX_DATA_TYPE

feature -- Type Values

    float32: like Current
        do
            Result := Current
        end

    float16: like Current
        do
            Result := Current
        end

    int32: like Current
        do
            Result := Current
        end

    int64: like Current
        do
            Result := Current
        end

    bool: like Current
        do
            Result := Current
        end

feature -- Properties

    name: STRING
        -- Type name ("FLOAT32", "INT64", etc.).
        do
            -- Implementation depends on current type
            Result := "FLOAT32"
        end

    element_size: INTEGER
        -- Bytes per element.
        do
            -- Implementation depends on current type
            Result := 4  -- Example for FLOAT32
        end

    is_floating_point: BOOLEAN
        -- Is floating-point type?
        do
            Result := name ~ "FLOAT32" or name ~ "FLOAT16"
        end

    is_integer: BOOLEAN
        -- Is integer type?
        do
            Result := name ~ "INT32" or name ~ "INT64"
        end

    is_boolean: BOOLEAN
        -- Is boolean type?
        do
            Result := name ~ "BOOL"
        end

    out: STRING
        -- String representation.
        do
            Result := name
        end

end -- class ONNX_DATA_TYPE
```

---

## Class: ONNX_NODE_ARG

```eiffel
class
    ONNX_NODE_ARG

create
    make

feature -- Initialization

    make (a_name: STRING; a_shape: ONNX_SHAPE; a_dtype: ONNX_DATA_TYPE)
        require
            name_not_void: a_name /= Void
            shape_not_void: a_shape /= Void
            dtype_not_void: a_dtype /= Void
        do
            name := a_name
            shape := a_shape
            data_type := a_dtype
        ensure
            name_set: name ~ a_name
            shape_set: shape = a_shape
            dtype_set: data_type = a_dtype
        end

feature -- Properties

    name: STRING
        -- Input/output name.

    shape: ONNX_SHAPE
        -- Expected shape.

    data_type: ONNX_DATA_TYPE
        -- Expected data type.

    description: detachable STRING
        -- Human-readable description.

end -- class ONNX_NODE_ARG
```

---

## Class: ONNX_ENVIRONMENT

```eiffel
class
    ONNX_ENVIRONMENT

create
    make

feature -- Initialization

    make
        -- Initialize ONNX Runtime environment.
        do
            create_environment
        ensure
            environment_created: env_handle /= default_pointer
        end

feature -- Queries

    available_providers: ARRAY [STRING]
        -- List available providers.
        do
            Result := query_providers
        ensure
            result_not_void: Result /= Void
            has_cpu: across Result as ic some ic.item ~ "CPU" end
        end

    is_provider_available (name: STRING): BOOLEAN
        require
            name_not_void: name /= Void
        do
            Result := available_providers.has (name)
        end

    version_info: STRING
        do
            Result := query_version
        ensure
            result_not_void: Result /= Void
        end

feature {NONE} -- Implementation

    env_handle: POINTER

    create_environment
        external "C"
            alias "OrtCreateEnv"
        end

    query_providers: ARRAY [STRING]
        external "C"
            alias "c_query_providers"
        end

    query_version: STRING
        external "C"
            alias "OrtGetVersionString"
        end

invariant
    env_created: env_handle /= default_pointer

end -- class ONNX_ENVIRONMENT
```

---

## Implementation Notes

1. **External Declarations:** All C API calls use `external "C"` with `alias` to actual C function names
2. **Memory Management:** Finalizers (set_finalizer) ensure cleanup on garbage collection
3. **Void Safety:** All detachables checked with preconditions/postconditions
4. **Error Handling:** C API errors converted to exceptions in implementation
5. **Constants:** Optimization levels (0=DISABLED, 1=BASIC, 2=EXTENDED, 3=ALL) defined elsewhere

---

## Related Documents

- **06-INTERFACE-DESIGN.md** - Public API (this implements)
- **05-CONTRACT-DESIGN.md** - Contracts (this enforces)
- **04-CLASS-DESIGN.md** - Architecture (this realizes)

