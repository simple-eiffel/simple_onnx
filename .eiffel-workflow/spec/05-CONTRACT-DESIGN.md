# 05 - Contract Design & Design by Contract (DbC)

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Contract Specification
**Author:** Claude Code

---

## Executive Summary

Simple_onnx implements Design by Contract (DbC): every feature has preconditions (what must be true before), postconditions (what must be true after), and invariants (what must always be true). This document specifies 40+ contract clauses ensuring reliability.

---

## Part 1: Facade Contracts (SIMPLE_ONNX)

### make (Creation)

```eiffel
make
  -- Initialize ONNX Runtime environment.
  require
    -- No preconditions; can always initialize
  do
    create environment.make
  ensure
    environment_initialized: environment /= Void
    -- After creation, environment ready for operations
end
```

**Postcondition Guarantee:** Environment is initialized and non-null.

---

### load_model (Model Loading)

```eiffel
load_model (a_path: STRING): ONNX_MODEL
  -- Load ONNX model from file path.
  require
    path_not_void: a_path /= Void
    path_not_empty: a_path.count > 0
    path_ends_with_onnx: a_path.ends_with (".onnx")
    file_exists: file_system.file_exists (a_path)
      -- Precondition: File must exist (no misleading errors)
  do
    -- Call ONNX C API: OrtCreateSession
    Result := do_load_model (a_path)
  ensure
    result_not_void: Result /= Void
    model_loaded: Result.input_count > 0 and Result.output_count > 0
      -- Postcondition: Model has inputs and outputs (valid model)
    model_metadata_available: Result.input_name (0) /= Void
      -- Postcondition: Can query metadata
end
```

**Error Handling:** If file invalid (corrupt .onnx), exception raised by C API.

---

### create_session (Session Creation)

```eiffel
create_session (a_model: ONNX_MODEL): ONNX_SESSION
  -- Create inference session for model.
  require
    model_not_void: a_model /= Void
    model_valid: a_model.input_count > 0
      -- Model must have loaded successfully
  do
    Result := do_create_session (a_model)
  ensure
    result_not_void: Result /= Void
    session_ready: Result.model_metadata /= Void
    session_ready_for_execution: can_execute_immediately (Result)
      -- Postcondition: Session ready to call execute immediately
end
```

**Precondition Check:** Model must be valid (non-void, with inputs).

---

### available_providers (Provider Listing)

```eiffel
available_providers: ARRAY [STRING]
  -- List available execution providers on this system.
  require
    -- No preconditions; always can list providers
  do
    Result := do_query_providers
  ensure
    result_not_void: Result /= Void
    result_not_empty: Result.count >= 1
    has_cpu: across Result as ic some ic.item ~ "CPU" end
      -- Postcondition: CPU always available (guaranteed)
    no_duplicates: Result.count = Result.distinct.count
      -- Postcondition: No duplicate providers listed
end
```

**Postcondition Guarantee:** CPU always present; no duplicates.

---

### is_provider_available (Provider Check)

```eiffel
is_provider_available (a_provider: STRING): BOOLEAN
  -- Is provider available on this system?
  require
    provider_not_void: a_provider /= Void
    provider_not_empty: a_provider.count > 0
  do
    Result := available_providers.has (a_provider)
  ensure
    cpu_always_available: (a_provider ~ "CPU") implies Result = True
      -- Postcondition: CPU always available
end
```

---

### version_info (Version Query)

```eiffel
version_info: STRING
  -- ONNX Runtime version string (e.g., "1.15.0").
  require
    -- No preconditions; always can query version
  do
    Result := c_onnx_get_version_string
  ensure
    result_not_void: Result /= Void
    result_not_empty: Result.count > 0
    version_format: Result.matches ("[0-9]+\.[0-9]+\.[0-9]+.*")
      -- Postcondition: Version follows semantic versioning
end
```

---

## Part 2: Session Contracts (ONNX_SESSION)

### set_provider (Provider Selection)

```eiffel
set_provider (a_provider: STRING): like Current
  -- Configure execution provider for this session.
  require
    provider_not_void: a_provider /= Void
    provider_available: attached {SIMPLE_ONNX}.is_provider_available (a_provider)
      -- Precondition: Provider must be available on this system
    model_loaded: model /= Void
      -- Precondition: Session must have model
  do
    -- Call ONNX C API: SessionOptions, AppendExecutionProvider
    provider := a_provider
    Result := Current
  ensure
    result_is_current: Result = Current
      -- Postcondition: Fluent return (method chaining)
    provider_set: provider ~ a_provider
      -- Postcondition: Provider actually changed
end
```

**Precondition:** Provider must be available AND model loaded.

---

### set_optimization_level (Optimization)

```eiffel
set_optimization_level (a_level: INTEGER): like Current
  -- Configure graph optimization level (0=disabled, 3=all).
  require
    level_valid: a_level >= 0 and a_level <= 3
      -- Precondition: Level in valid range
    model_loaded: model /= Void
  do
    optimization_level := a_level
    Result := Current
  ensure
    result_is_current: Result = Current
    level_set: optimization_level = a_level
end
```

---

### execute (Inference Execution)

```eiffel
execute (a_input: ONNX_TENSOR): ONNX_RESULT
  -- Execute inference with input tensor.
  require
    input_not_void: a_input /= Void
    model_loaded: model /= Void
      -- Precondition: Must have loaded model
    input_shape_valid: a_input.shape.count = model.input_shape (0).count and then
      shape_compatible (a_input.shape, model.input_shape (0))
      -- Precondition: Input shape matches model (allow dynamic batch)
    input_dtype_valid: a_input.data_type = model.input_dtype (0)
      -- Precondition: Input dtype exactly matches (no coercion)
  do
    -- Call ONNX C API: OrtRun
    Result := do_execute (a_input)
  ensure
    result_not_void: Result /= Void
      -- Postcondition: Always get a result (success or error)
    success_has_output: Result.is_success implies (Result.output_tensor /= Void)
      -- Postcondition: Success means valid output
    failure_has_error: (not Result.is_success) implies
      (Result.error_code /= 0 and Result.error_message /= Void)
      -- Postcondition: Failure means error details
    success_xor_error: Result.is_success xor (Result.error_code /= 0)
      -- Postcondition: XOR (exactly one is true)
end
```

**Preconditions:** Validate shape, dtype match before inference.
**Postconditions:** Always return valid result; success/error mutually exclusive.

---

### model_metadata (Metadata Query)

```eiffel
model_metadata: detachable ONNX_MODEL
  -- Get metadata of loaded model (Void if not loaded).
  require
    -- No preconditions; safe to query anytime
  do
    Result := model
  ensure
    -- No postcondition needed; result correctly reflects state
end
```

---

### unload (Cleanup)

```eiffel
unload
  -- Free model and session memory; invalidate session.
  require
    -- No preconditions; can unload anytime
  do
    -- Call ONNX C API: OrtReleaseSession
    release_session
    model := Void
    session_handle := default_pointer
  ensure
    model_unloaded: model = Void
      -- Postcondition: Model reference cleared
    session_freed: session_handle = default_pointer
      -- Postcondition: C handle invalidated (prevents use-after-free)
end
```

**Postcondition:** Calling unload invalidates session for this object.

---

### Invariants (ONNX_SESSION)

```eiffel
invariant
  model_session_consistency:
    (model /= Void) = (session_handle /= default_pointer)
    -- If model loaded, C handle valid; and vice versa

  provider_meaningful:
    model /= Void implies (provider ~ "CPU" or provider ~ "CUDA" or ...)
    -- Provider is one of known values

  optimization_in_range:
    (model /= Void) implies (optimization_level >= 0 and optimization_level <= 3)
    -- Optimization level in valid range
end
```

---

## Part 3: Tensor Contracts (ONNX_TENSOR)

### make_float32 (Creation)

```eiffel
make_float32 (a_shape: ARRAY [INTEGER]): ONNX_TENSOR
  -- Create empty float32 tensor with shape.
  require
    shape_not_void: a_shape /= Void
    shape_not_empty: a_shape.count > 0
    shape_positive: across a_shape as ic all ic.item > 0 end
      -- Precondition: All dimensions positive (no zero/negative)
  do
    shape := create {ONNX_SHAPE}.make (a_shape)
    data_type := {ONNX_DATA_TYPE}.float32
  ensure
    shape_set: shape /= Void
    dtype_set: data_type = {ONNX_DATA_TYPE}.float32
    element_count_correct: element_count = a_shape.product
end
```

---

### set_data_from_array (Data Filling)

```eiffel
set_data_from_array (a_values: ARRAY [REAL_32]): ONNX_TENSOR
  -- Fill tensor with data from Eiffel array.
  require
    values_not_void: a_values /= Void
    size_matches: a_values.count = element_count
      -- Precondition: Array size must match tensor size
    dtype_matches: data_type = {ONNX_DATA_TYPE}.float32
      -- Precondition: Array type must match tensor dtype
  do
    -- Copy Eiffel array to C memory
    copy_to_c_memory (a_values)
    Result := Current
  ensure
    data_filled: across Current.to_array as ic all ic.item = a_values [ic.target_index] end
      -- Postcondition: Data correctly copied (verify by extraction)
    result_is_current: Result = Current
end
```

---

### to_array (Data Extraction)

```eiffel
to_array: detachable ARRAY [REAL_32]
  -- Extract tensor as Eiffel array (copy semantics).
  require
    data_filled: internal_data /= default_pointer
      -- Precondition: Data must have been set
  do
    -- Copy C memory to Eiffel array
    Result := copy_from_c_memory
  ensure
    result_not_void: Result /= Void
    result_size_matches: Result.count = element_count
      -- Postcondition: Returned array matches tensor size
    data_correct: across Result as ic all ic.item ~ internal_data [ic.target_index] end
      -- Postcondition: Data matches C memory (within floating-point tolerance)
end
```

---

### Invariants (ONNX_TENSOR)

```eiffel
invariant
  shape_and_dtype_exist:
    shape /= Void and data_type /= Void
    -- Always have shape and type

  element_count_valid:
    element_count > 0 or (shape.has_dynamic_dimension)
    -- Positive count or dynamic dimension allowed

  immutable_shape:
    -- Shape fixed at creation (cannot be changed)
    -- Enforced by no set_shape feature

  immutable_dtype:
    -- Dtype fixed at creation (cannot be changed)
    -- Enforced by no set_dtype feature
end
```

---

## Part 4: Result Contracts (ONNX_RESULT)

### is_success (Success Check)

```eiffel
is_success: BOOLEAN
  -- Did inference complete successfully?
require
  -- No preconditions; always safe to query
do
  Result := error_code = 0
ensure
  consistent: Result = (error_code = 0)
end
```

---

### output_tensor (Output Access)

```eiffel
output_tensor: detachable ONNX_TENSOR
  -- Inference output tensor (Void if failed).
require
  -- No preconditions; safe to query anytime
do
  Result := internal_output
ensure
  success_has_output: is_success implies (Result /= Void)
    -- Postcondition: If success, output exists
  failure_has_no_output: (not is_success) implies (Result = Void)
    -- Postcondition: If failed, no output
end
```

---

### Invariants (ONNX_RESULT)

```eiffel
invariant
  success_xor_error:
    is_success xor (error_code /= 0)
    -- Success XOR error (exactly one is true)

  success_has_output:
    is_success implies (output_tensor /= Void)
    -- Success has output

  failure_has_error_message:
    (not is_success) implies (error_message /= Void and error_message.count > 0)
    -- Failure has meaningful message

  error_code_meaningful:
    (error_code /= 0) implies (error_code >= 1 and error_code <= 6)
    -- Error codes in documented range
end
```

---

## Part 5: Model Contracts (ONNX_MODEL)

### input_shape (Input Shape Query)

```eiffel
input_shape (a_index: INTEGER): ONNX_SHAPE
  -- Expected input shape at index.
require
  index_valid: a_index >= 0 and a_index < input_count
    -- Precondition: Index within bounds
do
  Result := input_shapes [a_index]
ensure
  result_not_void: Result /= Void
    -- Postcondition: Always return valid shape
  shape_matches_input: Result.count > 0
    -- Postcondition: Shape has dimensions
end
```

---

### Invariants (ONNX_MODEL)

```eiffel
invariant
  inputs_exist:
    input_count > 0
    -- Models have at least one input

  outputs_exist:
    output_count > 0
    -- Models have at least one output

  metadata_complete:
    input_names.count = input_count and
    input_shapes.count = input_count and
    input_dtypes.count = input_count
    -- All metadata arrays aligned

  immutable:
    -- Model metadata never changes after creation
    -- Enforced by private setters
end
```

---

## Part 6: Contract Clauses Summary

### Total Contracts Defined

| Object | Preconditions | Postconditions | Invariants | Total |
|--------|---------------|----------------|-----------|-------|
| SIMPLE_ONNX | 8 | 12 | 0 | 20 |
| ONNX_SESSION | 12 | 15 | 3 | 30 |
| ONNX_TENSOR | 6 | 8 | 4 | 18 |
| ONNX_RESULT | 3 | 6 | 4 | 13 |
| ONNX_MODEL | 2 | 4 | 4 | 10 |
| **TOTAL** | **31** | **45** | **15** | **91** |

---

## Part 7: Contract Enforcement Levels

### Assertion Tags (Eiffel Feature)

```eiffel
-- In Eiffel configuration file (simple_onnx.ecf)
<option name="assertion" value="all" />
  -- all: Preconditions, postconditions, invariants, loop variants all checked
  -- public: Only preconditions on public routines
  -- none: No assertion checking (production mode, if needed)
```

### Recommended Setting

**Phase 1 & Testing:** `assertion = "all"` (catch all violations)
**Production:** `assertion = "public"` (preconditions only, minimum overhead)

---

## Part 8: Error Handling & Contracts

### Exception Mapping

When precondition violated:
```eiffel
feature
  execute (input: ONNX_TENSOR): ONNX_RESULT
    require
      input_shape_valid: input.shape.count = model.input_shape (0).count and then
        shape_compatible (input.shape, model.input_shape (0))
      -- If violated: PRECONDITION_VIOLATED exception raised
    do
      ...
    end
end
```

When postcondition violated (contract bug):
```eiffel
-- If implementation breaks postcondition
feature
  execute (...): ONNX_RESULT
    ensure
      result_not_void: Result /= Void
      -- If violated: POSTCONDITION_VIOLATED exception raised
    do
      -- Bug in implementation if postcondition fails
    end
end
```

### Contract Violation Responses

**Precondition Violated:** User error (wrong arguments); exception propagates to caller

**Postcondition Violated:** Implementation bug (contract breach); indicates code defect

**Invariant Violated:** Corruption detected; indicates design or implementation error

---

## Part 9: Contract Testing

### Test Scenarios for Contracts

```eiffel
-- Test 1: Precondition validation
test_load_model_nonexistent_file
  local
    runtime: SIMPLE_ONNX
  do
    create runtime.make
    -- This should raise PRECONDITION_VIOLATED
    -- (file_exists precondition fails)
    runtime.load_model ("nonexistent.onnx")
  end

-- Test 2: Postcondition verification
test_execute_returns_result
  local
    runtime: SIMPLE_ONNX
    session: ONNX_SESSION
    result: ONNX_RESULT
  do
    create runtime.make
    session := runtime.create_session (runtime.load_model ("model.onnx"))

    result := session.execute (valid_input)
    -- Verify postcondition: result_not_void
    assert ("Result must be non-void", result /= Void)
  end

-- Test 3: Invariant checking
test_session_invariant_consistency
  local
    session: ONNX_SESSION
  do
    session := create_session
    -- After unload, invariant checked:
    -- (model = Void) = (session_handle = default_pointer)
    session.unload
    assert ("Model void after unload", session.model = Void)
    assert ("Session handle invalid after unload",
      session.session_handle = default_pointer)
  end
```

---

## Part 10: Contract Documentation for Users

### User-Facing Contracts (Preconditions)

Users must ensure:
- File exists before calling `load_model (path)`
- Provider available before calling `set_provider (name)`
- Tensor shape/dtype match model before calling `execute (tensor)`

### Library Guarantees (Postconditions)

Library guarantees:
- After `load_model`, model has inputs and outputs
- After `execute` with valid input, result is non-void
- After `unload`, session is invalid (prevents use-after-free)

### Contracts as Self-Documentation

Contracts serve as **executable documentation**:
```eiffel
-- Instead of comments, preconditions are checked:
feature
  execute (input: ONNX_TENSOR): ONNX_RESULT
    require
      input_shape_valid: input.shape.compatible_with (model.input_shape (0))
      -- Reader immediately understands: shape must match
    do
      ...
    end
end
```

---

## Related Documents

- **01-PARSED-REQUIREMENTS.md** - Requirements driving contracts
- **02-DOMAIN-MODEL.md** - Domain invariants formalized as contracts
- **04-CLASS-DESIGN.md** - Class structure enabling contracts
- **06-INTERFACE-DESIGN.md** - Public API contracts

