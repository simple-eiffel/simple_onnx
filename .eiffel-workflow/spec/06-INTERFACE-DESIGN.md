# 06 - Interface Design & Public API

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Interface Specification
**Author:** Claude Code

---

## Executive Summary

This document specifies the complete public API of simple_onnx. The API is designed for simplicity (facade pattern), fluent configuration (builder pattern), and immutable results (value objects).

---

## Part 1: Primary Interface - SIMPLE_ONNX (Facade)

The main entry point for all operations.

### Creation

```eiffel
create runtime.make
  -- Initialize ONNX Runtime environment.
  -- Called once per application.
```

### Model Loading

```eiffel
model := runtime.load_model (path: STRING): ONNX_MODEL
  -- Load .onnx model from filesystem.
  -- Arguments: Absolute path to .onnx file
  -- Returns: ONNX_MODEL with metadata
  -- Raises: FILE_NOT_FOUND if path invalid
  --         ONNX_ERROR if model corrupted
```

### Session Creation

```eiffel
session := runtime.create_session (model: ONNX_MODEL): ONNX_SESSION
  -- Create inference session for model.
  -- Arguments: Loaded ONNX_MODEL
  -- Returns: ONNX_SESSION ready for inference
```

### Provider Queries

```eiffel
providers := runtime.available_providers: ARRAY [STRING]
  -- List available execution backends.
  -- Returns: ["CPU", "CUDA", "TensorRT", ...] as available
  -- Guarantee: Always includes "CPU"

available := runtime.is_provider_available (name: STRING): BOOLEAN
  -- Check if specific provider available.
  -- Arguments: Provider name ("CPU", "CUDA", etc.)
  -- Returns: True if available on this system
```

### Version Information

```eiffel
version := runtime.version_info: STRING
  -- Get ONNX Runtime version.
  -- Returns: Version string (e.g., "1.15.0")
```

---

## Part 2: Session Interface - ONNX_SESSION

Core inference execution.

### Configuration (Fluent Builder Pattern)

```eiffel
session := session.set_provider (name: STRING): like Current
  -- Select execution provider.
  -- Arguments: "CPU", "CUDA", "TensorRT", or other available
  -- Returns: Current (for method chaining)
  -- Example:
  --   session.set_provider ("CUDA")
  --      .set_optimization_level (3)

session := session.set_optimization_level (level: INTEGER): like Current
  -- Configure graph optimization depth.
  -- Arguments: 0=DISABLED, 1=BASIC, 2=EXTENDED, 3=ALL
  -- Returns: Current (for method chaining)
  -- Example:
  --   session.set_optimization_level (3)  -- Maximum optimization
```

### Inference Execution

```eiffel
result := session.execute (input: ONNX_TENSOR): ONNX_RESULT
  -- Execute inference synchronously.
  -- Arguments: Input tensor with data
  -- Returns: Result with output tensor (if success) or error
  -- Blocks: Caller waits for inference completion
  -- Example:
  --   result := session.execute (input_tensor)
  --   if result.is_success then
  --     output := result.output_tensor.to_array
  --   else
  --     print (result.error_message)
  --   end
```

### Metadata Queries

```eiffel
model := session.model_metadata: detachable ONNX_MODEL
  -- Get metadata of loaded model.
  -- Returns: ONNX_MODEL or Void if not loaded
  -- Queries available:
  --   model.input_name (0)        -- First input name
  --   model.input_shape (0)       -- First input shape
  --   model.input_dtype (0)       -- First input data type
  --   model.output_name (0)       -- First output name
```

### Cleanup

```eiffel
session.unload
  -- Free model and session memory.
  -- Effect: Frees VRAM; invalidates session
  -- Important: Must call before loading another model
  -- Example:
  --   session.unload  -- VRAM reclaimed, session unusable
```

---

## Part 3: Tensor Interface - ONNX_TENSOR

Input/output data containers.

### Creation (Factory Methods)

```eiffel
tensor := create {ONNX_TENSOR}.make_float32 (shape: ARRAY [INTEGER]): ONNX_TENSOR
tensor := create {ONNX_TENSOR}.make_float16 (shape: ARRAY [INTEGER]): ONNX_TENSOR
tensor := create {ONNX_TENSOR}.make_int32 (shape: ARRAY [INTEGER]): ONNX_TENSOR
tensor := create {ONNX_TENSOR}.make_int64 (shape: ARRAY [INTEGER]): ONNX_TENSOR
tensor := create {ONNX_TENSOR}.make_bool (shape: ARRAY [INTEGER]): ONNX_TENSOR
  -- Create tensor with specified data type and shape.
  -- Arguments: Shape as array of dimensions
  -- Returns: Empty tensor (ready for data)
  -- Examples:
  --   create {ONNX_TENSOR}.make_float32 (<<1, 224, 224, 3>>)  -- Image
  --   create {ONNX_TENSOR}.make_int64 (<<1, 77>>)  -- Token IDs
  --   create {ONNX_TENSOR}.make_bool (<<1, 77>>)  -- Attention mask
```

### Data Management

```eiffel
tensor := tensor.set_data_from_array (data: ARRAY [...]):
  -- Fill tensor with data from Eiffel array.
  -- Arguments: Array of values matching dtype and size
  -- Returns: Current (for chaining)
  -- Precondition: Array size must equal tensor element count
  -- Example:
  --   create {ONNX_TENSOR}.make_int64 (<<1, 77>>)
  --     .set_data_from_array (token_ids)  -- token_ids: ARRAY [INTEGER]

array := tensor.to_array: detachable ARRAY [...]
  -- Extract tensor as Eiffel array (copy semantics).
  -- Returns: Eiffel array with tensor data
  -- Note: Data copied from C to Eiffel (safe, simple)
  -- Example:
  --   output_array := output_tensor.to_array
  --   -- output_array can now be processed in Eiffel
```

### Properties

```eiffel
shape := tensor.shape: ONNX_SHAPE
  -- Tensor dimensions.
  -- Returns: ONNX_SHAPE with [dim0, dim1, ...]

dtype := tensor.data_type: ONNX_DATA_TYPE
  -- Element data type.
  -- Returns: FLOAT32, FLOAT16, INT32, INT64, or BOOL

count := tensor.element_count: INTEGER
  -- Total elements (shape product).
  -- Returns: Number of elements in tensor
  -- Example: Shape [1, 77, 768] → 59,136 elements
```

---

## Part 4: Result Interface - ONNX_RESULT

Inference outcome (success or failure).

### Status Checking

```eiffel
success := result.is_success: BOOLEAN
  -- Did inference complete successfully?
  -- Returns: True if success, False if failed

output := result.output_tensor: detachable ONNX_TENSOR
  -- Output tensor (Void if failed).
  -- Returns: ONNX_TENSOR or Void
  -- Precondition: Check is_success before accessing
  -- Example:
  --   if result.is_success then
  --     output := result.output_tensor.to_array
  --   end
```

### Error Information

```eiffel
code := result.error_code: INTEGER
  -- Error code if failed.
  -- Returns: 0 if success, 1-6 if error
  -- Error codes:
  --   1 = Shape mismatch
  --   2 = Data type mismatch
  --   3 = Inference failed
  --   4 = Out of memory (VRAM full)
  --   5 = Provider unavailable
  --   6 = Model incompatible

message := result.error_message: detachable STRING
  -- Human-readable error message.
  -- Returns: Error description or Void if success
  -- Example: "Input shape mismatch: expected [1, 77], got [1, 64]"
```

### Helper Queries

```eiffel
status := result.status: STRING
  -- Summary status.
  -- Returns: "Success" or "Error"

summary := result.summary: STRING
  -- Full summary with output shape or error details.
  -- Returns: "Success: shape [1, 768]" or "Error: Shape mismatch ..."
  -- Useful for logging and debugging
```

---

## Part 5: Model Metadata Interface - ONNX_MODEL

Model structure information.

### Input Metadata

```eiffel
count := model.input_count: INTEGER
  -- Number of model inputs.

name := model.input_name (index: INTEGER): STRING
  -- Input name at index.
  -- Example: "input_ids", "attention_mask"

shape := model.input_shape (index: INTEGER): ONNX_SHAPE
  -- Expected input shape at index.
  -- Example: [None, 77] meaning [variable_batch, 77]

dtype := model.input_dtype (index: INTEGER): ONNX_DATA_TYPE
  -- Expected input data type at index.
  -- Example: INT64 for token IDs
```

### Output Metadata

```eiffel
count := model.output_count: INTEGER
  -- Number of model outputs.

name := model.output_name (index: INTEGER): STRING
  -- Output name at index.

shape := model.output_shape (index: INTEGER): ONNX_SHAPE
  -- Expected output shape at index.

dtype := model.output_dtype (index: INTEGER): ONNX_DATA_TYPE
  -- Expected output data type at index.
```

### Model Information

```eiffel
opset := model.opset_version: INTEGER
  -- ONNX operator set version.
  -- Example: 14, 15, 16

description := model.description: detachable STRING
  -- Model description (if available).
  -- Example: "Point-E encoder, 300M params"
```

---

## Part 6: Shape Interface - ONNX_SHAPE

Tensor dimensions.

### Properties

```eiffel
dims := shape.dimensions: ARRAY [INTEGER]
  -- Dimension sizes.
  -- Example: [1, 77, 768]
  -- Note: Can contain -1 for dynamic dimensions

rank := shape.rank: INTEGER
  -- Number of dimensions.
  -- Example: 3 for [1, 77, 768]

count := shape.element_count: INTEGER
  -- Total elements (product of dimensions).
  -- Example: 1 * 77 * 768 = 59,136
  -- Note: Undefined if has dynamic dimension
```

### Operations

```eiffel
match := shape.matches (other: ONNX_SHAPE): BOOLEAN
  -- Exact match with other shape?
  -- Returns: True only if dimensions exactly equal

compat := shape.compatible_with (other: ONNX_SHAPE): BOOLEAN
  -- Compatible (allow dynamic dimensions)?
  -- Returns: True if shapes match with dynamic dims allowed
  -- Example: [1, 77, 768] compatible with [None, 77, 768]

text := shape.out: STRING
  -- String representation.
  -- Returns: "[1, 77, 768]"
```

---

## Part 7: Data Type Interface - ONNX_DATA_TYPE

Supported element types.

### Type Values

```eiffel
dtype := {ONNX_DATA_TYPE}.float32   -- 32-bit IEEE float
dtype := {ONNX_DATA_TYPE}.float16   -- 16-bit IEEE float
dtype := {ONNX_DATA_TYPE}.int32     -- 32-bit signed int
dtype := {ONNX_DATA_TYPE}.int64     -- 64-bit signed int
dtype := {ONNX_DATA_TYPE}.bool      -- Boolean
```

### Properties

```eiffel
name := dtype.name: STRING
  -- Type name.
  -- Returns: "FLOAT32", "INT64", etc.

size := dtype.element_size: INTEGER
  -- Bytes per element.
  -- Example: FLOAT32 → 4, BOOL → 1

is_float := dtype.is_floating_point: BOOLEAN
  -- Is floating-point type?

is_int := dtype.is_integer: BOOLEAN
  -- Is integer type?
```

---

## Part 8: Usage Examples

### Example 1: Simple Inference (Point-E Encoder)

```eiffel
local
  runtime: SIMPLE_ONNX
  session: ONNX_SESSION
  tokens: ONNX_TENSOR
  result: ONNX_RESULT
  output: detachable ARRAY [REAL]
do
  -- Initialize
  create runtime.make

  -- Load model
  session := runtime.create_session (runtime.load_model ("encoder.onnx"))

  -- Configure provider (try GPU, fallback to CPU)
  if runtime.is_provider_available ("CUDA") then
    session.set_provider ("CUDA")
  end

  -- Create input tensor [batch=1, seq_len=77]
  create tokens.make_int64 (<<1, 77>>)
  tokens.set_data_from_array (<<101, 2054, 3231, ... >>)  -- Token IDs

  -- Execute inference
  result := session.execute (tokens)

  -- Check result
  if result.is_success then
    output := result.output_tensor.to_array
    print ("Success: output shape " + result.summary)
    -- Process embeddings...
  else
    print ("Error: " + result.error_message)
  end

  -- Cleanup
  session.unload
end
```

### Example 2: Batch Inference

```eiffel
local
  runtime: SIMPLE_ONNX
  session: ONNX_SESSION
  batch_input: ONNX_TENSOR
  result: ONNX_RESULT
  batch_size: INTEGER
do
  create runtime.make
  session := runtime.create_session (runtime.load_model ("model.onnx"))

  -- Process batch of 4 samples
  batch_size := 4
  create batch_input.make_float32 (<<batch_size, 224, 224, 3>>)
  -- Fill batch_input with 4 images...

  result := session.execute (batch_input)
  if result.is_success then
    -- Output has batch dimension: [4, num_classes]
    process_batch_predictions (result.output_tensor)
  end

  session.unload
end
```

### Example 3: Provider Selection with Fallback

```eiffel
local
  runtime: SIMPLE_ONNX
  session: ONNX_SESSION
do
  create runtime.make

  -- Try CUDA first, fallback to CPU
  session := runtime.create_session (runtime.load_model ("model.onnx"))
  if runtime.is_provider_available ("CUDA") then
    session.set_provider ("CUDA")
    print ("Using CUDA")
  else
    session.set_provider ("CPU")
    print ("CUDA unavailable, using CPU")
  end

  -- Inference (works on either backend)
  result := session.execute (input_tensor)
  ...
end
```

### Example 4: Error Handling

```eiffel
local
  session: ONNX_SESSION
  result: ONNX_RESULT
  wrong_shape: ONNX_TENSOR
do
  -- User creates wrong shape
  create wrong_shape.make_int64 (<<1, 64>>)  -- Should be [1, 77]

  result := session.execute (wrong_shape)
rescue
  if ex.is_precondition_violated then
    print ("Shape validation failed: " + ex.message)
    print ("Expected: [1, 77]")
    print ("Provided: [1, 64]")
  end
end
```

### Example 5: Metadata Queries

```eiffel
local
  runtime: SIMPLE_ONNX
  model: ONNX_MODEL
  session: ONNX_SESSION
do
  create runtime.make
  model := runtime.load_model ("model.onnx")

  -- Query model structure
  print ("Model has " + model.input_count.out + " inputs:")
  across model.input_count.downto (1) as ic loop
    print ("  Input " + ic.item.out + ": ")
    print ("    Name: " + model.input_name (ic.item))
    print ("    Shape: " + model.input_shape (ic.item).out)
    print ("    Type: " + model.input_dtype (ic.item).name)
  end

  -- Create session and infer with properly-shaped tensor
  session := runtime.create_session (model)
  ...
end
```

---

## Part 9: Command-Query Separation

### Commands (Modify State)

| Method | Returns | Purpose |
|--------|---------|---------|
| `load_model` | ONNX_MODEL | Load model from file |
| `create_session` | ONNX_SESSION | Create session |
| `set_provider` | like Current | Configure provider |
| `set_optimization_level` | like Current | Configure optimization |
| `execute` | ONNX_RESULT | Run inference |
| `set_data_from_array` | ONNX_TENSOR | Fill tensor |
| `unload` | void | Free memory |

Commands enable **method chaining** (fluent interface):
```eiffel
session
  .set_provider ("CUDA")
  .set_optimization_level (3)
  .execute (input_tensor)
```

### Queries (Read-Only)

| Method | Returns | Purpose |
|--------|---------|---------|
| `available_providers` | ARRAY [STRING] | List backends |
| `is_provider_available` | BOOLEAN | Check backend |
| `version_info` | STRING | Get version |
| `model_metadata` | ONNX_MODEL | Get model |
| `shape` | ONNX_SHAPE | Get dimensions |
| `data_type` | ONNX_DATA_TYPE | Get type |
| `is_success` | BOOLEAN | Check result |
| `output_tensor` | detachable ONNX_TENSOR | Get output |
| `error_message` | detachable STRING | Get error |

Queries are **safe to call repeatedly** (no side effects).

---

## Part 10: API Design Principles

### Simplicity

- Single entry point (SIMPLE_ONNX facade)
- Minimal classes exposed to users
- Clear method names (no abbreviations)

### Consistency

- Fluent builder pattern (simple_http, simple_json style)
- Immutable value objects (ONNX_TENSOR, ONNX_RESULT)
- Exception-based error handling (Eiffel idiom)

### Safety

- Preconditions validate user input (fail fast)
- Postconditions guarantee results (contract assurance)
- Void-safe types (no null pointers leak to Eiffel)

### Discoverability

- Method names match intent (load_model, execute, unload)
- IDE autocomplete works naturally
- Documentation through contracts (preconditions, postconditions)

---

## Related Documents

- **04-CLASS-DESIGN.md** - Classes implementing interface
- **05-CONTRACT-DESIGN.md** - Contracts enforcing interface
- **07-SPECIFICATION.md** - Formal Eiffel class code

