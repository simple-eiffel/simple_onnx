# 02 - Domain Model & Concepts

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Domain Analysis
**Author:** Claude Code

---

## Executive Summary

The simple_onnx domain consists of 9 core concepts representing ONNX Runtime, model loading, inference execution, and tensor management. This document establishes shared vocabulary and relationships for all stakeholders.

---

## Part 1: Core Domain Concepts

### ONNX_RUNTIME (External System)

**Definition:** The C library interface provided by ONNX Runtime (Microsoft)
**Responsibility:** Load models, create sessions, execute inference
**Ownership:** External (not owned by simple_onnx)
**Key Functions:**
- `OrtCreateEnv`: Initialize runtime environment
- `OrtCreateSession`: Create inference session from model
- `OrtRun`: Execute inference with input tensors
- `OrtReleaseTensor`, `OrtReleaseSession`: Cleanup resources

**Constraints:**
- Thread-safe at session level
- Binary-specific (version compatibility critical)
- Memory management manual (caller responsible for cleanup)

---

### ONNX_ENVIRONMENT (Managed by simple_onnx)

**Definition:** Global runtime context for ONNX (wraps OrtEnv)
**Responsibility:** Initialize/shutdown ONNX Runtime; manage global state
**Ownership:** Owned by SIMPLE_ONNX (created once per application)
**Lifetime:** Application startup → shutdown
**Invariants:**
- Exactly one ONNX_ENVIRONMENT per application
- Created before any models loaded
- Destroyed after all sessions unloaded

**Features:**
- Initialize with CPU, CUDA, or TensorRT backend
- Query available providers
- Create sessions tied to this environment

---

### ONNX_MODEL (Immutable Value Object)

**Definition:** Metadata about a loaded .onnx file (not weights)
**Responsibility:** Hold model structure information
**Ownership:** Owned by ONNX_SESSION (created when session loads model)
**Lifetime:** Valid until session unload
**Immutable:** YES (created once, not modified)

**Properties:**
- `name: STRING` - Model filename (e.g., "point-e-base.onnx")
- `path: STRING` - Absolute filesystem path
- `input_count: INTEGER` - Number of inputs
- `output_count: INTEGER` - Number of outputs
- `opset_version: INTEGER` - ONNX operator set version
- `inputs: ARRAY [NODE_ARG]` - Input metadata
- `outputs: ARRAY [NODE_ARG]` - Output metadata

**Queries:**
- `input_name (index: INTEGER): STRING`
- `input_shape (index: INTEGER): ONNX_SHAPE`
- `input_dtype (index: INTEGER): ONNX_DATA_TYPE`
- `output_name (index: INTEGER): STRING`
- `output_shape (index: INTEGER): ONNX_SHAPE`
- `output_dtype (index: INTEGER): ONNX_DATA_TYPE`

---

### ONNX_SESSION (Stateful, Owned)

**Definition:** Runtime session for a single model; handles inference
**Responsibility:** Execute model inference; manage session lifetime
**Ownership:** Owned by caller; created by SIMPLE_ONNX.create_session
**Lifetime:** Created explicitly; destroyed on unload
**Stateful:** YES (holds model, configuration, session handle)

**Properties:**
- `model: detachable ONNX_MODEL` - Loaded model (Void after unload)
- `provider: STRING` - Execution provider (CPU, CUDA, etc.)
- `optimization_level: INTEGER` - DISABLED, BASIC, EXTENDED, ALL
- `session_handle: POINTER` - C OrtSession pointer (internal)

**Commands:**
- `set_provider (name: STRING): like Current` - Configure backend (fluent)
- `set_optimization_level (level: INTEGER): like Current` - Configure optimization (fluent)
- `execute (input: ONNX_TENSOR): ONNX_RESULT` - Run inference
- `unload` - Free memory, invalidate session

**Queries:**
- `model_metadata: detachable ONNX_MODEL` - Get model info
- `is_ready: BOOLEAN` - Can execute inference?

**Invariants:**
- `model /= Void implies session_handle /= default_pointer`
- `session_handle = default_pointer implies model = Void`

---

### ONNX_TENSOR (Immutable Value Object)

**Definition:** Multi-dimensional array of typed data (input or output)
**Responsibility:** Hold tensor data with shape and dtype
**Ownership:** Caller; created explicitly or returned from inference
**Lifetime:** Use immediately, discard after processing
**Immutable:** YES (shape and dtype fixed at creation)

**Properties:**
- `shape: ONNX_SHAPE` - Dimensions (e.g., [batch, seq_len, features])
- `data_type: ONNX_DATA_TYPE` - Element type (float32, int64, etc.)
- `element_count: INTEGER` - Total elements (shape product)
- `data: detachable ARRAY [...]` - Actual values (type-dependent)

**Creation Methods:**
- `make_float32 (a_shape: ARRAY [INTEGER]): ONNX_TENSOR`
- `make_float16 (a_shape: ARRAY [INTEGER]): ONNX_TENSOR`
- `make_int32 (a_shape: ARRAY [INTEGER]): ONNX_TENSOR`
- `make_int64 (a_shape: ARRAY [INTEGER]): ONNX_TENSOR`
- `make_bool (a_shape: ARRAY [INTEGER]): ONNX_TENSOR`

**Commands:**
- `set_data_from_array (values: ARRAY [...]): ONNX_TENSOR` - Fill with data
- `release` - Explicitly free C memory

**Queries:**
- `to_array: detachable ARRAY [...]` - Copy to Eiffel array
- `shape_matches (expected: ONNX_SHAPE): BOOLEAN`
- `dtype_matches (expected: ONNX_DATA_TYPE): BOOLEAN`

**Postconditions:**
- `to_array /= Void implies (to_array.count = element_count)`

---

### ONNX_SHAPE (Immutable Value Object)

**Definition:** Dimensions of a tensor
**Responsibility:** Store shape information with dimension names
**Ownership:** Value object; copied as needed
**Lifetime:** Immutable after creation

**Properties:**
- `dimensions: ARRAY [INTEGER]` - Actual sizes (e.g., [1, 77, 768])
- `rank: INTEGER` - Number of dimensions (length of array)
- `element_count: INTEGER` - Product of all dimensions

**Features:**
- Support dynamic dimensions: -1 or "None" means variable
  - Example: Shape [1, -1, 768] means variable middle dimension (batch variable)
  - Example: Shape [None, 77] in metadata means batch dimension is variable

**Queries:**
- `dimension (index: INTEGER): INTEGER` - Get size of dimension
- `matches (other: ONNX_SHAPE): BOOLEAN` - Exact match?
- `compatible_with (other: ONNX_SHAPE): BOOLEAN` - Allow dynamic dims?
- `out: STRING` - String representation "[1, 77, 768]"

---

### ONNX_DATA_TYPE (Enum Value)

**Definition:** Element data type in a tensor
**Responsibility:** Identify numeric type and size
**Values:**
- `FLOAT32` - 32-bit IEEE float (most common)
- `FLOAT16` - 16-bit IEEE float (inference with precision loss)
- `INT32` - 32-bit signed integer
- `INT64` - 64-bit signed integer (token IDs, indices)
- `BOOL` - Boolean (masking, control flow)

**Queries:**
- `element_size: INTEGER` - Bytes per element (4 for FLOAT32, 1 for BOOL)
- `is_floating_point: BOOLEAN`
- `is_integer: BOOLEAN`
- `out: STRING` - String representation ("FLOAT32", "INT64", etc.)

---

### ONNX_PROVIDER (Enum Value)

**Definition:** Execution backend for inference
**Responsibility:** Specify where inference runs (CPU, GPU, etc.)
**Values:**
- `CPU` - Multi-threaded CPU execution (always available)
- `CUDA` - NVIDIA GPU (if CUDA 12.x installed)
- `TENSORRT` - NVIDIA TensorRT optimization (if TensorRT installed)
- `DIRECTML` - DirectML on Windows (GPU or CPU)
- `COREML` - Core ML on macOS/iOS

**Queries:**
- `name: STRING` - String representation ("CPU", "CUDA", etc.)
- `requires_gpu: BOOLEAN`
- `is_available (runtime: ONNX_RUNTIME): BOOLEAN`

---

### ONNX_RESULT (Immutable Value Object)

**Definition:** Outcome of inference execution (success or failure)
**Responsibility:** Encapsulate inference result with error handling
**Ownership:** Value object; returned from ONNX_SESSION.execute
**Lifetime:** Check immediately after execute
**Immutable:** YES (fixed at creation)

**Properties:**
- `is_success: BOOLEAN` - Did inference complete without error?
- `output_tensor: detachable ONNX_TENSOR` - Output data (Void on failure)
- `error_code: INTEGER` - 0=success, 1+=error category
- `error_message: detachable STRING` - Human-readable error

**Error Codes:**
- `0` - Success
- `1` - Input shape mismatch
- `2` - Input dtype mismatch
- `3` - Inference failed (ORT error)
- `4` - Out of memory (VRAM full)
- `5` - Provider unavailable
- `6` - Model incompatible

**Invariants:**
- `is_success xor (error_code /= 0)` - Success OR error, not both
- `is_success implies (output_tensor /= Void)` - Success has output
- `not is_success implies (error_message /= Void)` - Error has message

**Queries:**
- `status: STRING` - "Success" or "Error"
- `summary: STRING` - "Success: shape [1, 768]" or "Error: Shape mismatch (expected [1, 77], got [1, 64])"

---

### ONNX_NODE_ARG (Value Object)

**Definition:** Metadata about a model input or output
**Responsibility:** Describe expected tensor properties
**Ownership:** Value object; part of ONNX_MODEL
**Lifetime:** Immutable; same as ONNX_MODEL

**Properties:**
- `name: STRING` - Input/output name (e.g., "input_ids", "hidden_state")
- `shape: ONNX_SHAPE` - Expected tensor dimensions
- `data_type: ONNX_DATA_TYPE` - Expected data type
- `description: detachable STRING` - Human-readable description (if available)

**Constraints:**
- May have dynamic dimensions (batch size = -1)
- Some models have multiple inputs/outputs

---

## Part 2: Domain Relationships

### Ownership Hierarchy

```
SIMPLE_ONNX (Facade)
    └─ ONNX_ENVIRONMENT (Singleton)
        └─ ONNX_SESSION (created on demand)
            ├─ ONNX_MODEL (metadata)
            │   ├─ ONNX_NODE_ARG (inputs)
            │   └─ ONNX_NODE_ARG (outputs)
            └─ C OrtSession handle (pointer)

External: ONNX_RUNTIME (C library, not owned)
```

### Create Sequence Diagram

```
User Code
  │
  ├─ create runtime.make
  │  └─ ONNX_ENVIRONMENT initialized
  │
  ├─ model := runtime.load_model ("point-e.onnx")
  │  └─ ONNX_MODEL created (metadata from C API)
  │
  ├─ session := runtime.create_session (model)
  │  └─ ONNX_SESSION created, bound to model
  │     └─ OrtSession C handle created
  │
  ├─ tensor := create ONNX_TENSOR.make_int64 (<<1, 77>>)
  │  └─ ONNX_TENSOR created (empty, waiting for data)
  │
  ├─ tensor.set_data_from_array (token_ids)
  │  └─ Eiffel array copied to C memory
  │
  ├─ result := session.execute (tensor)
  │  └─ ORT inference executes
  │  └─ ONNX_RESULT created with output tensor
  │
  └─ session.unload
     └─ OrtSession freed
     └─ ONNX_MODEL invalidated (model = Void)
```

### Concurrency Model (SCOOP)

```
Processor 1                      Processor 2
  │                                │
  ├─ create runtime1               ├─ create runtime2
  ├─ session1 = load_model         ├─ session2 = load_model
  ├─ result1 = session1.execute    ├─ result2 = session2.execute
  │  (executes in processor 1)     │  (executes in processor 2)
  │  (no locks needed)             │  (no locks needed)
  │  [Concurrent execution]
  │
  └─ session1.unload              └─ session2.unload
```

**Key Property:** Each processor has its own ONNX_SESSION. ONNX Runtime C API is thread-safe at session level, so no mutex needed. Eiffel SCOOP scheduler handles ordering.

---

## Part 3: Domain Rules (Invariants)

### DR-001: Session Must Have Loaded Model Before Inference

**Rule:** Cannot execute inference if model not loaded
**Implementation:**
```eiffel
execute (input: ONNX_TENSOR): ONNX_RESULT
  require
    model_loaded: model /= Void
    session_ready: session_handle /= default_pointer
```
**Enforcement:** Precondition violation raises exception

### DR-002: Input Tensor Dtype Must Match Model Expectation

**Rule:** User-provided dtype must match model input dtype
**Example:** Point-E encoder expects INT64 for tokens; float32 input fails
**Implementation:**
```eiffel
execute (input: ONNX_TENSOR): ONNX_RESULT
  require
    input_dtype_valid: input.data_type = model.input_dtype (0)
```
**Enforcement:** Precondition violation with error message

### DR-003: Input Tensor Shape Must Match Model Expectation

**Rule:** User-provided shape must match model input shape (allowing dynamic batch)
**Example:** Point-E encoder expects [batch, 77]; shape [batch, 64] fails
**Implementation:**
```eiffel
execute (input: ONNX_TENSOR): ONNX_RESULT
  require
    input_shape_valid: input.shape.compatible_with (model.input_shape (0))
```
**Enforcement:** Clear error message with expected vs. actual shape

### DR-004: Models Are Unloaded When Session Destroyed

**Rule:** Calling unload() invalidates model for current session
**Invariant:** After unload, model = Void and session_handle = default_pointer
**Rationale:** Prevents use-after-free bugs
**Implementation:**
```eiffel
unload
  ensure
    model_unloaded: model = Void
    session_freed: session_handle = default_pointer
```

### DR-005: Only One Result Per Inference Execution

**Rule:** Each execute() call produces exactly one ONNX_RESULT
**Property:** Result is stateless; multiple inferences create multiple results
**Rationale:** Simplifies lifetime management; no state to track

---

## Part 4: Domain Glossary

### Model
**Definition:** A .onnx file containing neural network graph topology and weights
**In scope:** Loading, metadata queries
**Out of scope:** Training, conversion from other formats
**Example:** point-e-base.onnx (1.2GB, image generation model)

### Session
**Definition:** Runtime state for inference with one model
**Lifetime:** Created when user loads model; destroyed on unload
**Properties:** Model, provider, optimization level
**Constraint:** One session per model instance (not pooled)

### Tensor
**Definition:** Multi-dimensional array (vector, matrix, or higher)
**In scope:** Creation, data filling, extraction
**Out of scope:** Mathematical operations, transformations
**Example:** [batch=1, seq_len=77, features=768] FLOAT32 tensor

### Provider
**Definition:** Hardware backend for inference execution
**CPU:** Multi-threaded CPU execution (always available)
**GPU:** NVIDIA CUDA or TensorRT (if hardware/drivers present)
**Examples:** "CPU", "CUDA", "TensorRT", "DirectML"

### Shape
**Definition:** Dimensions of a tensor
**Notation:** [dim0, dim1, dim2, ...] or [1, 77, 768]
**Dynamic:** Dimension can be -1 (variable) or None in metadata
**Example:** [batch, 77] means [variable, 77] at model level

### Data Type (Dtype)
**Definition:** Numeric type of tensor elements
**Common:** FLOAT32 (32-bit float), INT64 (64-bit int)
**Rare:** FLOAT16, INT32, BOOL
**Constraint:** 5 types supported; Phase 2 can expand

### Inference
**Definition:** Forward pass through neural network
**Input:** Tensor with user data
**Output:** Tensor with model predictions
**Computation:** Synchronous (blocks until complete)

### VRAM
**Definition:** GPU video memory where model weights + tensors live
**Constraint:** Limited (4GB mobile, 8GB typical, 24GB professional)
**Management:** Explicit unload() to free space
**Risk:** Exhaustion if multiple large models loaded

### Precondition
**Definition:** Constraint that must be true before function executes
**Violation:** Raises PRECONDITION_VIOLATED exception
**Example:** `require model /= Void` - session must have model

### Postcondition
**Definition:** Guarantee about function result
**Violation:** Raises POSTCONDITION_VIOLATED exception
**Example:** `ensure result /= Void` - must return valid result

---

## Part 5: Invariant Table

| Object | Invariant | Rationale |
|--------|-----------|-----------|
| ONNX_SESSION | `(model /= Void) = (session_handle /= default_pointer)` | Model presence matches handle validity |
| ONNX_TENSOR | `shape /= Void and data_type /= Void` | Always have shape and type |
| ONNX_RESULT | `is_success xor (error_code /= 0)` | Success OR error, not both |
| ONNX_SHAPE | `dimensions.count > 0` | Must have at least one dimension |
| ONNX_MODEL | `input_count > 0 and output_count > 0` | Models have inputs and outputs |

---

## Part 6: Domain Patterns

### Builder Pattern (Session Configuration)

```eiffel
-- Fluent configuration
session := runtime.create_session (model)
  .set_provider ("CUDA")
  .set_optimization_level (ALL)
  .execute (input_tensor)
```

**Benefit:** Readable, extensible, type-safe

### Copy-on-Extract Pattern (Tensor Data)

```eiffel
-- Tensor data copied to Eiffel array (safe, simple)
output := session.execute (input_tensor)
if output.is_success then
  eiffel_array := output.output_tensor.to_array
  -- C memory freed automatically
end
```

**Benefit:** No C pointers leak into Eiffel; void-safe

### SCOOP Separate Objects Pattern (Concurrency)

```eiffel
-- Each processor has own session (no locks)
processor1: session1.execute (...)
processor2: session2.execute (...)
-- Executes concurrently, no synchronization needed
```

**Benefit:** Eiffel idiomatic; scales to many processors

### Explicit Lifecycle Pattern (Memory Management)

```eiffel
-- Clear ownership and lifetime
session := runtime.create_session (model)
-- ... use session ...
session.unload  -- Explicit cleanup, VRAM reclaimed
```

**Benefit:** No surprises; users know when VRAM freed

---

## Related Documents

- **01-PARSED-REQUIREMENTS.md** - Requirements driving domain model
- **03-CHALLENGED-ASSUMPTIONS.md** - Validation of domain concepts
- **04-CLASS-DESIGN.md** - Domain mapped to classes
- **05-CONTRACT-DESIGN.md** - Domain invariants as contracts

