# 04 - Class Design & OOSC2 Architecture

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Architecture Design
**Author:** Claude Code

---

## Executive Summary

Simple_onnx architecture follows OOSC2 (Object-Oriented Software Construction 2nd Edition) principles: Single Responsibility, Open/Closed, Liskov Substitution, Interface Segregation, and Dependency Inversion. The design consists of 10 core classes organized by responsibility.

---

## Part 1: Responsibility-Driven Class Hierarchy

### Primary Classes (User-Facing)

#### SIMPLE_ONNX (Facade)

**Responsibility:** Single entry point; coordinate library initialization and session creation

**Why Facade?** Hides complexity of ONNX_ENVIRONMENT, version checking, provider detection

**Key Features:**
- Static factory for creating library instance
- Load models (disk)
- Create sessions (from models)
- Query providers (what's available on this system)
- Version info (ONNX Runtime version)

**Visibility:**
- Public: make, load_model, create_session, available_providers, is_provider_available, version_info
- Private: environment (singleton)

**Collaborators:**
- ONNX_ENVIRONMENT (create and manage)
- ONNX_SESSION (create)

**Single Responsibility:** Coordinate library operations; delegate to specialists

**Test Surface:** Load model, create session, query providers, version

---

#### ONNX_SESSION (Core Inference Engine)

**Responsibility:** Manage inference for a single model; execute forward passes

**Why Separate Class?** Inference is complex; needs its own object with lifecycle

**Key Features:**
- Configure provider and optimization (fluent)
- Execute inference synchronously
- Query model metadata
- Explicit unload for cleanup

**Visibility:**
- Public: set_provider, set_optimization_level, execute, model_metadata, unload
- Private: model, session_handle, configuration

**Collaborators:**
- ONNX_MODEL (metadata)
- ONNX_TENSOR (input/output)
- ONNX_RESULT (return type)

**Single Responsibility:** Execute inference; manage session lifecycle

**Invariants:**
- `(model /= Void) = (session_handle /= default_pointer)`
- `model /= Void implies session_ready`

**Test Surface:** Execute, unload, metadata queries, error handling

---

#### ONNX_TENSOR (Value Object for Data)

**Responsibility:** Hold typed multi-dimensional array; immutable

**Why Immutable?** Tensors created, used, discarded; no mutation needed

**Key Features:**
- Fixed shape and data type at creation
- Fill with data (set_data_from_array)
- Extract to Eiffel array (to_array)
- Query properties (shape, dtype, element_count)

**Visibility:**
- Public: make_* (factory methods), set_data_from_array, to_array, shape, data_type, element_count
- Private: internal_data, c_tensor_handle

**Factories:** make_float32, make_float16, make_int32, make_int64, make_bool

**Single Responsibility:** Encapsulate tensor data; simple data holder

**Invariants:**
- `shape /= Void`
- `data_type /= Void`
- `element_count = shape.product`

**Test Surface:** Creation, data filling, extraction, property queries

---

#### ONNX_RESULT (Value Object for Inference Outcome)

**Responsibility:** Encapsulate inference success or failure with output/error

**Why Value Object?** Result is immutable; created once per execute call

**Key Features:**
- Success/failure status
- Output tensor (if success)
- Error code and message (if failure)
- Postcondition guarantee: success XOR error

**Visibility:**
- Public: is_success, output_tensor, error_code, error_message, status, summary
- Private: (all initialized at creation)

**Creation Methods:** make_success, make_error (internal only)

**Single Responsibility:** Encapsulate inference result; immutable

**Invariants:**
- `is_success xor (error_code /= 0)`
- `is_success implies (output_tensor /= Void)`
- `not is_success implies (error_message /= Void)`

**Test Surface:** Success cases, error cases, invariant checks

---

### Supporting Classes (Implementation Details)

#### ONNX_MODEL (Metadata Holder)

**Responsibility:** Hold model metadata (names, shapes, dtypes)

**Why Separate?** Metadata querying distinct from session lifecycle

**Key Features:**
- Input/output names, shapes, data types
- Opset version
- Model description
- Immutable after creation

**Visibility:**
- Public: input_name, input_shape, input_dtype, output_name, output_shape, output_dtype, opset_version, description
- Private: model_data (from C API)

**Single Responsibility:** Model metadata queries

**Invariants:**
- `input_count > 0 and output_count > 0`
- `input_shapes.count = input_count`
- `input_dtypes.count = input_count`

**Test Surface:** Metadata queries against Point-E, YOLO, BERT models

---

#### ONNX_SHAPE (Dimension Container)

**Responsibility:** Represent tensor dimensions; support dynamic shapes

**Why Value Object?** Shapes are values; copied as needed

**Key Features:**
- Store dimension sizes
- Support dynamic dimensions (-1 = variable)
- Compute total element count
- String representation
- Comparison and compatibility checking

**Visibility:**
- Public: dimensions, rank, element_count, dimension, matches, compatible_with, out
- Private: (none; simple value object)

**Single Responsibility:** Encapsulate shape information

**Invariants:**
- `dimensions.count > 0`
- `rank > 0`
- `element_count >= 0` (could be 0 if has dynamic dimension)

**Test Surface:** Shape creation, matching, compatibility, element count

---

#### ONNX_DATA_TYPE (Type Enumeration)

**Responsibility:** Identify tensor element data type

**Why Enum?** Fixed set of types; not extensible in Phase 1

**Values:**
- FLOAT32 (32-bit IEEE float)
- FLOAT16 (16-bit IEEE float)
- INT32 (32-bit signed)
- INT64 (64-bit signed)
- BOOL (boolean)

**Key Features:**
- Type name (string)
- Element size in bytes
- Classification (floating_point, integer, boolean)
- Matching and validation

**Visibility:**
- Public: name, element_size, is_floating_point, is_integer, is_boolean, out
- Private: (none; value object)

**Single Responsibility:** Represent data type

**Test Surface:** Type creation, queries, string conversion

---

#### ONNX_ENVIRONMENT (Singleton Wrapper)

**Responsibility:** Global ONNX Runtime initialization and lifecycle

**Why Singleton?** Only one runtime per application

**Key Features:**
- Initialize ONNX Runtime (via C API OrtCreateEnv)
- Provide environment handle to sessions
- Shutdown on application exit

**Visibility:**
- Public: make (factory, enforces singleton), environment_handle
- Private: _instance (singleton storage), env_handle (C pointer)

**Singleton Pattern:**
```eiffel
create {SIMPLE_ONNX} environment  -- Only SIMPLE_ONNX can create
-- Users access via SIMPLE_ONNX, not directly
```

**Single Responsibility:** ONNX Runtime initialization

**Invariants:**
- `instance /= Void` (after first access)
- `env_handle /= default_pointer` (after initialization)

**Test Surface:** Initialization, environment validity

---

#### ONNX_NODE_ARG (Metadata Value Object)

**Responsibility:** Describe a model input or output parameter

**Why Value Object?** Immutable metadata; part of ONNX_MODEL

**Key Features:**
- Name (e.g., "input_ids")
- Shape (expected dimensions)
- Data type (expected dtype)
- Optional description

**Visibility:**
- Public: name, shape, data_type, description
- Private: (none; value object)

**Single Responsibility:** Input/output metadata

**Test Surface:** Node arg creation, property access

---

#### ONNX_PROVIDER (Provider Enumeration)

**Responsibility:** Identify execution backend

**Values:**
- CPU (multi-threaded CPU)
- CUDA (NVIDIA GPU)
- TENSORRT (NVIDIA TensorRT optimization)
- DIRECTML (Windows GPU/CPU)
- COREML (Apple)

**Key Features:**
- Provider name
- Classification (requires_gpu)
- Availability checking

**Visibility:**
- Public: name, requires_gpu, is_available
- Private: (none; value object)

**Single Responsibility:** Represent provider choice

**Test Surface:** Provider enumeration, availability checks

---

#### ONNX_SESSION_CONFIG (Builder Value Object)

**Responsibility:** Collect session configuration options before session creation

**Why Builder?** Configuration complex; needs fluent API

**Key Features:**
- Provider selection
- Optimization level
- Thread pool size
- Memory limits

**Visibility:**
- Public: with_provider, with_optimization_level, with_thread_count (fluent methods)
- Private: config_data (internal state)

**Fluent Pattern:**
```eiffel
config := create {ONNX_SESSION_CONFIG}
  .with_provider ("CUDA")
  .with_optimization_level (ALL)
session := runtime.create_session (model, config)
```

**Single Responsibility:** Collect configuration

**Test Surface:** Configuration building, fluent chaining

---

## Part 2: Class Relationships

### Inheritance Hierarchy

```
ANY
├─ SIMPLE_ONNX (main class, inherits from ANY)
├─ ONNX_SESSION (session management)
├─ ONNX_ENVIRONMENT (runtime wrapper)
├─ ONNX_TENSOR (immutable value)
├─ ONNX_RESULT (immutable value)
├─ ONNX_MODEL (immutable value)
├─ ONNX_SHAPE (immutable value)
├─ ONNX_DATA_TYPE (immutable value)
├─ ONNX_PROVIDER (immutable value)
├─ ONNX_NODE_ARG (immutable value)
└─ ONNX_SESSION_CONFIG (configuration object)
```

**Design Rationale:** Flat inheritance (avoid deep hierarchies). No abstract base classes (not needed for 10 classes). Each class stands alone with clear SRP.

### Composition Relationships

```
SIMPLE_ONNX
    │
    └─ ONNX_ENVIRONMENT [1..1]
        └─ manages ONNX_RUNTIME (C library)

ONNX_SESSION
    │
    ├─ ONNX_MODEL [0..1] (metadata)
    │   ├─ ONNX_NODE_ARG [*] (inputs)
    │   └─ ONNX_NODE_ARG [*] (outputs)
    │
    └─ ONNX_SESSION_CONFIG [0..1] (configuration)

ONNX_TENSOR
    │
    ├─ ONNX_SHAPE [1..1]
    │
    └─ ONNX_DATA_TYPE [1..1]

ONNX_RESULT
    │
    ├─ ONNX_TENSOR [0..1] (output, if success)
    │
    └─ error info (if failure)
```

### Dependency Graph

```
User Code
    ↓
SIMPLE_ONNX (facade)
    ├─ depends on ONNX_ENVIRONMENT
    └─ creates ONNX_SESSION
        ├─ depends on ONNX_MODEL
        ├─ accepts ONNX_TENSOR
        └─ returns ONNX_RESULT
            └─ contains ONNX_TENSOR

Key Property: Direction is DOWN (no circular dependencies)
Inversion: SIMPLE_ONNX depends on ONNX_SESSION abstraction, not concrete
```

---

## Part 3: OOSC2 Principle Compliance

### Single Responsibility Principle (SRP)

| Class | Responsibility |
|-------|-----------------|
| SIMPLE_ONNX | Coordinate library operations |
| ONNX_SESSION | Execute inference for one model |
| ONNX_TENSOR | Hold tensor data with shape/dtype |
| ONNX_RESULT | Encapsulate inference outcome |
| ONNX_MODEL | Provide model metadata |
| ONNX_SHAPE | Represent tensor dimensions |
| ONNX_DATA_TYPE | Identify element type |
| ONNX_ENVIRONMENT | Initialize ONNX Runtime |
| ONNX_NODE_ARG | Describe input/output |
| ONNX_PROVIDER | Identify execution backend |

**Verdict: PASS** ✓ Each class has single, focused responsibility.

---

### Open/Closed Principle (OCP)

**Open for Extension:**
- Add new data types by extending ONNX_DATA_TYPE enum
- Add new providers via ONNX_PROVIDER enum
- Add new builder options to ONNX_SESSION_CONFIG

**Closed for Modification:**
- Core inference flow (ONNX_SESSION.execute) unchanged
- Model loading (SIMPLE_ONNX.load_model) stable
- Tensor shape validation (ONNX_TENSOR) not modified for new types

**Verdict: PASS** ✓ Design extensible without breaking changes.

---

### Liskov Substitution Principle (LSP)

**No inheritance hierarchies** → No LSP violations possible.

All classes are concrete, stand-alone. No subtyping relationships that could violate LSP.

If Phase 2 adds typed tensor subclasses (ONNX_TENSOR_FLOAT32), they would honor LSP:
```eiffel
class ONNX_TENSOR_FLOAT32 inherits from ONNX_TENSOR
  -- Every operation on parent works on child
```

**Verdict: PASS** ✓ No violations; LSP not needed for flat design.

---

### Interface Segregation Principle (ISP)

**Public Interfaces are Focused:**

SIMPLE_ONNX public: `load_model, create_session, available_providers, version_info`
(Does not expose internal ONNX_ENVIRONMENT or configuration details)

ONNX_SESSION public: `set_provider, set_optimization_level, execute, model_metadata, unload`
(Does not expose C POINTER handles or internal state)

ONNX_TENSOR public: `shape, data_type, element_count, to_array`
(Does not expose C tensor handle or memory management details)

**Clients depend only on what they use:**
- Basic users: SIMPLE_ONNX and ONNX_SESSION
- Advanced users: ONNX_SESSION_CONFIG for fine-tuning
- Internal: C API bindings hidden in {NONE} sections

**Verdict: PASS** ✓ Interfaces segregated; no fat interfaces.

---

### Dependency Inversion Principle (DIP)

**High-level modules depend on abstraction:**

SIMPLE_ONNX depends on ONNX_SESSION abstraction, not C API directly.

```
User Code
    ↓
SIMPLE_ONNX (high-level)
    ↓
ONNX_SESSION (abstraction)
    ↓
ONNX_RUNTIME C API (low-level, hidden in {NONE})
```

**Inversion:** Both high and low depend on ONNX_SESSION interface.

**Benefit:** If ONNX Runtime C API changes, only ONNX_SESSION affected.

**Verdict: PASS** ✓ Dependencies inverted correctly.

---

## Part 4: Command-Query Separation

### Commands (Modify State)

| Method | Returns | Purpose |
|--------|---------|---------|
| set_provider (name) | like Current | Configure backend |
| set_optimization_level (level) | like Current | Configure optimization |
| execute (input) | ONNX_RESULT | Run inference |
| set_data_from_array (values) | ONNX_TENSOR | Fill tensor |
| unload | void | Free memory |

**Pattern:** Commands return Current (fluent) or void, enabling method chaining.

### Queries (Read-Only)

| Method | Returns | Purpose |
|--------|---------|---------|
| available_providers | ARRAY [STRING] | List backends |
| model_metadata | ONNX_MODEL | Get model info |
| shape | ONNX_SHAPE | Get tensor dimensions |
| data_type | ONNX_DATA_TYPE | Get element type |
| is_success | BOOLEAN | Check inference result |
| error_message | detachable STRING | Get error details |

**Pattern:** Queries return information without side effects.

**Benefit:** Clear intent; fluent command chains; testable queries.

---

## Part 5: Class Interaction Scenarios

### Scenario 1: Basic Inference

```
User Code
    ↓
create runtime.make
    └─ SIMPLE_ONNX initialized
    └─ ONNX_ENVIRONMENT created
    ↓
model := runtime.load_model ("point-e.onnx")
    └─ ONNX_MODEL created (metadata from C API)
    ↓
session := runtime.create_session (model)
    └─ ONNX_SESSION created
    └─ ONNX_SESSION_CONFIG applied
    └─ C OrtSession handle created
    ↓
tensor := create {ONNX_TENSOR}.make_int64 (<<1, 77>>)
    └─ ONNX_TENSOR created (empty)
    ↓
tensor.set_data_from_array (token_ids)
    └─ Data copied to C memory
    ↓
result := session.execute (tensor)
    └─ ONNX_SESSION runs inference
    └─ ONNX_RESULT created (with output ONNX_TENSOR)
    ↓
if result.is_success then
  output := result.output_tensor.to_array
  process_output (output)
end
    ↓
session.unload
    └─ C memory freed
```

### Scenario 2: Error Handling

```
tensor := create {ONNX_TENSOR}.make_float32 (<<1, 77>>)  -- Wrong dtype!

result := session.execute (tensor)
    └─ Precondition violated: tensor.data_type /= model.input_dtype (0)
    └─ PRECONDITION_VIOLATED exception raised
    ↓
rescue
  if ex.is_precondition_violated then
    print ("Shape/dtype mismatch detected")
    print ("Expected: " + model.input_dtype (0).out)
    print ("Provided: " + tensor.data_type.out)
  end
end
```

---

## Part 6: Design Patterns Used

### Facade Pattern (SIMPLE_ONNX)

**Problem:** ONNX Runtime is complex (many C functions, version handling, provider selection)

**Solution:** SIMPLE_ONNX provides simple interface to common operations

**Benefit:** Users don't see complexity; single entry point

---

### Builder Pattern (ONNX_SESSION_CONFIG)

**Problem:** Session configuration has many options (provider, optimization, threads)

**Solution:** Fluent builder collects options, validates, passes to session creation

**Benefit:** Readable, extensible configuration; clear intent

---

### Value Object Pattern (ONNX_TENSOR, ONNX_RESULT, ONNX_SHAPE)

**Problem:** Tensor data, inference results, shapes are immutable data

**Solution:** Immutable value objects with copy semantics

**Benefit:** Safe (no mutable shared state); simple lifecycle (create, use, discard)

---

### Singleton Pattern (ONNX_ENVIRONMENT)

**Problem:** ONNX Runtime environment must be initialized once

**Solution:** ONNX_ENVIRONMENT created once, shared across sessions

**Benefit:** Resource efficiency; one environment, many sessions

---

### Factory Pattern (SIMPLE_ONNX methods)

**Problem:** Creating models and sessions requires initialization logic

**Solution:** Factory methods (load_model, create_session) encapsulate creation

**Benefit:** Initialization logic centralized; users don't repeat setup

---

## Part 7: Validation Checklist

**Before Class Design Complete:**

- [ ] Each class has single responsibility (SRP)
- [ ] No circular dependencies
- [ ] Public/private visibility correct
- [ ] Immutable value objects identified
- [ ] Fluent builder pattern applied
- [ ] Command-query separation honored
- [ ] OOSC2 principles validated
- [ ] Class diagram reviewed
- [ ] Interaction scenarios walk through
- [ ] Error handling paths clear

---

## Related Documents

- **01-PARSED-REQUIREMENTS.md** - Requirements driving class design
- **02-DOMAIN-MODEL.md** - Domain concepts mapped to classes
- **05-CONTRACT-DESIGN.md** - Contracts for each class
- **06-INTERFACE-DESIGN.md** - Public API of each class

