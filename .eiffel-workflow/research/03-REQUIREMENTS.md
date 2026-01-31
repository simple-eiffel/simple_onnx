# Functional & Non-Functional Requirements

**Project:** simple_onnx
**Date:** 2026-01-31
**Classification:** Pre-Phase Specification

---

## Executive Summary

Simple_onnx requires 12 functional requirements (model loading, inference, metadata), 7 non-functional requirements (memory safety, concurrency, void safety), and 6 design constraints. This document specifies the detailed requirements for Phase 1 (MVP) and hints at Phase 2+ enhancements.

---

## Part 1: Functional Requirements

### FR-001: Load .onnx Model Files from Disk

**Description:** Load a serialized ONNX model (.onnx file) from the filesystem and create an inference session.

**User Story:**
```
As an Eiffel developer
I want to load a model file (e.g., "point-e-base.onnx")
So that I can prepare it for inference
```

**Acceptance Criteria:**
- Load from absolute file path
- Return session object (ONNX_SESSION or similar)
- Raise error if file doesn't exist (precondition)
- Raise error if file is not valid ONNX (from C API)

**API Sketch:**
```eiffel
local
  runtime: ONNX_RUNTIME
  session: ONNX_SESSION
do
  create runtime.make_with_cpu_backend
  session := runtime.load_model ("/path/to/model.onnx")
  -- session now ready for inference
end
```

**Testing:** Load Point-E encoder from disk, verify session handle is valid

**Priority:** CRITICAL (Phase 1)

---

### FR-002: Load .onnx Models from Memory Buffers

**Description:** Load ONNX model from byte array (memory buffer) instead of file.

**Use Case:** Embedded models, encrypted model distribution, memory-mapped files

**Acceptance Criteria:**
- Accept byte array/buffer as input
- Delegate to OrtCreateSessionFromArray (C API)
- Return session object
- Handle invalid buffer (corrupt data)

**API Sketch:**
```eiffel
local
  model_bytes: ARRAY [NATURAL_8]
  session: ONNX_SESSION
do
  -- Load model into byte array (from file, network, etc.)
  model_bytes := load_file_as_bytes ("model.onnx")
  session := runtime.load_model_from_buffer (model_bytes)
end
```

**Testing:** Extract Point-E from disk to buffer, load from buffer, compare results to FR-001

**Priority:** IMPORTANT (Phase 1 or Phase 2)

---

### FR-003: Create Inference Sessions with Provider Selection

**Description:** Create inference session with configurable execution provider (CPU, CUDA, TensorRT, etc.).

**User Story:**
```
As a machine learning engineer
I want to choose between CPU and CUDA inference
So that I can optimize for my hardware
```

**Acceptance Criteria:**
- Support CPU provider (always available)
- Support CUDA provider (if NVIDIA CUDA available)
- Support TensorRT provider (if NVIDIA CUDA available)
- Builder pattern for configuration
- Fall back gracefully if provider unavailable
- Raise informative error if provider requested but not available

**API Sketch:**
```eiffel
local
  runtime: ONNX_RUNTIME
  session: ONNX_SESSION
do
  -- CPU backend
  create runtime.make_with_cpu_backend
  session := runtime.load_model ("model.onnx")

  -- CUDA backend (if available)
  create runtime.make_with_cuda_backend (device_id := 0)
  session := runtime.load_model ("model.onnx")

  -- TensorRT backend (if available)
  create runtime.make_with_tensorrt_backend (device_id := 0)
  session := runtime.load_model ("model.onnx")
end
```

**Testing:**
- Load on CPU (always works)
- Load on CUDA (if hardware available, skip if not)
- Verify provider selection in session metadata

**Priority:** CRITICAL (Phase 1)

---

### FR-004: Create Input Tensors with Data Type Support

**Description:** Create input tensors with specified shape, data type, and fill with data.

**Supported Data Types:**
- Float32 (most common)
- Float16 (inference with precision loss)
- Int32 (token IDs, discrete inputs)
- Int64 (indices, large integers)
- Bool (masking, control flow)

**User Story:**
```
As a developer using Point-E
I want to create a tensor for token IDs (int64, shape [1, 77])
And fill it with embedding token IDs
So that I can pass it to the encoder
```

**Acceptance Criteria:**
- Create tensor with shape array (e.g., [1, 77])
- Support float32, float16, int32, int64, bool
- Set data from array (e.g., token array)
- Precondition: data length matches shape
- Precondition: data types match (e.g., int64 for int64 tensor)

**API Sketch:**
```eiffel
local
  input_shape: ARRAY [INTEGER]
  token_tensor: ONNX_TENSOR
  token_ids: ARRAY [INTEGER]
do
  input_shape := <<1, 77>>
  create token_tensor.make_int64 (input_shape)

  token_ids := << 101, 2054, 3231, ... >>  -- 77 tokens
  token_tensor.set_data_from_array (token_ids)

  -- Token tensor ready to pass to inference
end
```

**Testing:**
- Create tensor for each supported data type
- Verify shape stored correctly
- Verify data copied correctly
- Precondition violation: shape mismatch

**Priority:** CRITICAL (Phase 1)

---

### FR-005: Execute Inference Synchronously

**Description:** Run inference on loaded model with prepared input tensors, get output tensors.

**User Story:**
```
As a developer
I want to execute inference on my input tensor
So that I get model output for downstream processing
```

**Acceptance Criteria:**
- Invoke OrtRun (C API)
- Input validation: tensor shape/type matches model expectations
- Output tensor returned with correct shape/type
- Synchronous execution (caller blocks until inference completes)
- Error handling: catch C API errors (invalid input, etc.)

**API Sketch:**
```eiffel
local
  session: ONNX_SESSION
  input_tensor: ONNX_TENSOR
  output_tensor: ONNX_TENSOR
  input_name: STRING
  output_name: STRING
do
  input_name := "input_ids"
  output_name := "hidden_state"

  output_tensor := session.infer (input_name, input_tensor, output_name)
  -- output_tensor now contains model output
end
```

**Testing:**
- Point-E encoder: feed token tensor, get hidden state
- Compare output to PyTorch baseline (tolerance: 1e-4)
- Invalid input shape: error caught and reported

**Priority:** CRITICAL (Phase 1)

---

### FR-006: Extract Output Tensors with Type Conversion

**Description:** Extract data from output tensor as Eiffel array (copy semantics, not pointers).

**User Story:**
```
As a developer
I want to read model output as an Eiffel ARRAY
So that I can process it in Eiffel code
```

**Acceptance Criteria:**
- Return Eiffel array (ARRAY [REAL])
- Handle type conversion (C float -> Eiffel REAL)
- Support all tensor data types (float, int, bool)
- Postcondition: array shape and data correct
- Postcondition: data copied (no C pointers in Eiffel)

**API Sketch:**
```eiffel
local
  output_tensor: ONNX_TENSOR
  output_array: ARRAY [REAL]
  output_shape: ARRAY [INTEGER]
do
  output_array := output_tensor.to_array
  output_shape := output_tensor.shape

  -- output_array can now be processed in pure Eiffel
  process_embeddings (output_array)
end
```

**Testing:**
- Extract float32 tensor to ARRAY [REAL]
- Verify values match C data
- Verify shape information available
- Large tensors (1M+ elements) don't corrupt

**Priority:** CRITICAL (Phase 1)

---

### FR-007: Query Model Metadata

**Description:** Inspect model structure (inputs, outputs, shapes, types) without loading weights.

**User Story:**
```
As a developer
I want to know what inputs a model expects (names, shapes, types)
So that I can prepare tensors correctly
```

**Acceptance Criteria:**
- Query input names (e.g., ["input_ids", "attention_mask"])
- Query input shapes (e.g., [None, 77] meaning variable batch, fixed 77 tokens)
- Query input data types (e.g., INT64)
- Query output names, shapes, types similarly
- Support symbolic dimensions (e.g., "batch" = None in shape)

**API Sketch:**
```eiffel
local
  session: ONNX_SESSION
  input_names: ARRAY [STRING]
  input_shapes: ARRAY [ARRAY [INTEGER]]
  input_types: ARRAY [STRING]
do
  input_names := session.input_names
  input_shapes := session.input_shapes
  input_types := session.input_types

  -- Print: "Model expects 2 inputs: input_ids (INT64, [None, 77]), attention_mask (INT64, [None, 77])"
  print_model_info (session)
end
```

**Testing:**
- Load Point-E, query input/output metadata
- Verify metadata matches HuggingFace model card
- Dynamic shapes: [None, 77] handled correctly (None = variable)

**Priority:** IMPORTANT (Phase 1, enables debugging)

---

### FR-008: Support Batch Processing

**Description:** Handle variable input dimensions (batching) in inference.

**User Story:**
```
As a developer building a service
I want to process multiple samples in one inference call
So that I can amortize model loading overhead
```

**Acceptance Criteria:**
- Load model with dynamic batch dimension (shape = [None, features])
- Create tensor with variable batch size (batch_size = 1, 2, 4, 8, etc.)
- Execute inference with different batch sizes
- Output shape reflects batch size

**API Sketch:**
```eiffel
local
  session: ONNX_SESSION
  batch_size_1: ONNX_TENSOR
  batch_size_4: ONNX_TENSOR
  output_1: ONNX_TENSOR
  output_4: ONNX_TENSOR
do
  -- Single sample
  create batch_size_1.make_float32 (<<1, 77>>)
  output_1 := session.infer ("input_ids", batch_size_1, "output")

  -- Batch of 4
  create batch_size_4.make_float32 (<<4, 77>>)
  output_4 := session.infer ("input_ids", batch_size_4, "output")

  -- Output shapes: [1, hidden_size] and [4, hidden_size]
end
```

**Testing:**
- Same model with batch_size = 1, 2, 4
- Verify output shapes scale correctly
- Performance: 4x samples ≈ 2-3x faster (GPU benefit)

**Priority:** IMPORTANT (Phase 2, enables service use case)

---

### FR-009: Unload Models to Free VRAM

**Description:** Explicitly free model and session memory, release VRAM.

**User Story:**
```
As a developer loading multiple 1GB models
I want to unload models when done
So that I can fit another model in VRAM
```

**Acceptance Criteria:**
- Explicit unload method (model.unload or session.destroy)
- Free all C-allocated memory
- Postcondition: model unusable after unload (prevent use-after-free)
- Memory profiling: VRAM reclaimed (not fragmented)

**API Sketch:**
```eiffel
local
  model1: ONNX_MODEL
  model2: ONNX_MODEL
do
  model1 := runtime.load_model ("point-e-1gb.onnx")
  -- ... use model1 ...
  model1.unload  -- Frees 1GB VRAM

  model2 := runtime.load_model ("shap-e-2gb.onnx")
  -- Now can fit model2 (was 2GB available, now 3GB available)
end
```

**Testing:**
- Monitor VRAM before/after unload
- Verify unload destroys C session handle
- Accessing unloaded model: precondition violation

**Priority:** CRITICAL (Phase 1, prevents VRAM exhaustion)

---

### FR-010: Comprehensive Error Handling

**Description:** Convert C API errors to meaningful Eiffel exceptions.

**User Story:**
```
As a developer
I want meaningful error messages when inference fails
So that I can debug the issue
```

**Acceptance Criteria:**
- Catch OrtStatus errors from C API
- Convert to Eiffel exception with details
- Include error code, message, context
- Common errors: invalid model, shape mismatch, VRAM full, provider unavailable

**Error Categories:**

| Error | Cause | Message |
|-------|-------|---------|
| INVALID_MODEL | Corrupted/wrong format | "Invalid ONNX model: xyz.onnx (check format)" |
| SHAPE_MISMATCH | Input tensor shape doesn't match model | "Input 'input_ids' expects shape [batch, 77], got [batch, 64]" |
| VRAM_FULL | GPU out of memory | "CUDA out of memory: model requires 2GB, device has 1GB" |
| PROVIDER_UNAVAILABLE | CUDA/TensorRT requested but not installed | "CUDA backend requested but NVIDIA CUDA not found" |
| DATA_TYPE_MISMATCH | Tensor data type invalid | "Input expects INT64, provided FLOAT32" |

**API Sketch:**
```eiffel
local
  session: ONNX_SESSION
  output: ONNX_TENSOR
do
  output := session.infer ("input", wrong_tensor, "output")
rescue
  -- Catch ORT_INVALID_ARGUMENT exception
  if ex.code = 3 then
    -- ORT reports shape mismatch
    print ("Error: " + ex.message)
    -- Recover gracefully
  end
end
```

**Testing:**
- Load invalid model: meaningful error
- Inference with wrong tensor shape: clear message
- CUDA unavailable but requested: instructions to install

**Priority:** CRITICAL (Phase 1)

---

### FR-011: Session Creation with Optimization Control

**Description:** Configure session optimization level (graph optimization depth).

**Use Case:** Trade off inference speed vs first-load time

**Acceptance Criteria:**
- Builder option: optimization_level (DISABLED, BASIC, EXTENDED, ALL)
- DISABLED: No graph optimization (debug, fast startup)
- BASIC: Essential optimizations (constant folding, constant elimination)
- EXTENDED: Operator fusion, memory optimizations
- ALL: Maximum optimization (may add startup latency)

**API Sketch:**
```eiffel
local
  runtime: ONNX_RUNTIME
  session: ONNX_SESSION
do
  -- Fast startup (no optimization)
  create runtime.make_with_optimization (ONNX_RUNTIME.OPTIMIZATION_DISABLED)
  session := runtime.load_model ("model.onnx")

  -- Optimized inference (slow startup, fast inference)
  create runtime.make_with_optimization (ONNX_RUNTIME.OPTIMIZATION_ALL)
  session := runtime.load_model ("model.onnx")
end
```

**Testing:**
- Startup time: DISABLED < ALL
- Inference latency: ALL < DISABLED
- Correctness: Same output regardless of optimization level

**Priority:** IMPORTANT (Phase 2, tuning)

---

### FR-012: Provider Availability Checking

**Description:** Query which execution providers are available (CUDA present? TensorRT? etc.)

**User Story:**
```
As a system administrator
I want to check if CUDA is installed
So that I can tell users what backends are available
```

**Acceptance Criteria:**
- Check if CPU provider available (always true)
- Check if CUDA provider available
- Check if TensorRT provider available
- Check if DirectML available (Windows)
- Return availability as booleans

**API Sketch:**
```eiffel
local
  runtime: ONNX_RUNTIME
do
  if runtime.is_cuda_available then
    print ("CUDA backend available")
    create runtime.make_with_cuda_backend (0)
  else
    print ("CUDA not available, using CPU")
    create runtime.make_with_cpu_backend
  end
end
```

**Testing:**
- Query providers on CPU-only machine: CPU=true, CUDA=false
- Query on NVIDIA GPU: CPU=true, CUDA=true, TensorRT=true
- Reflect reality (not guessing)

**Priority:** IMPORTANT (Phase 1, user guidance)

---

## Part 2: Non-Functional Requirements

### NFR-001: Memory Efficiency

**Requirement:** Models unload cleanly, no memory leaks, VRAM reclaimed.

**Metrics:**
- VRAM usage before load: X GB
- VRAM usage after load: X + model_size GB
- VRAM usage after unload: X GB (no fragmentation)

**Implementation:**
- OrtReleaseTensor called for every tensor created
- OrtReleaseSession called on unload
- C memory freed via finalizers (ensure proper cleanup)

**Testing:**
- Load/unload model 100x times
- Monitor VRAM: should not grow
- No memory leak detector warnings (Valgrind, Dr. Memory on Windows)

**Priority:** CRITICAL

---

### NFR-002: SCOOP Concurrency Safety

**Requirement:** Library is thread-safe, designed for SCOOP-style concurrency.

**Constraints:**
- No global mutable state (sessions are separate objects)
- Each SCOOP processor has its own session (no sharing)
- Multiple models can be loaded in separate contexts
- C API is thread-safe at OrtSession level (per documentation)

**Design Pattern:**
```eiffel
-- No shared mutable state
class POINT_E_GENERATOR
  feature
    generate (prompt: STRING): ARRAY [REAL]
    local
      runtime: ONNX_RUNTIME  -- Separate runtime per processor
      session: ONNX_SESSION  -- Separate session per processor
    do
      create runtime.make_with_cuda_backend (0)
      session := runtime.load_model ("point-e.onnx")
      -- Process independently in SCOOP processor
    end
end
```

**Testing:**
- Load model in two separate SCOOP agents
- Infer concurrently in both agents
- Verify output correctness (no race conditions)
- No mutual exclusion needed

**Priority:** CRITICAL

---

### NFR-003: Void Safety

**Requirement:** All detachable references checked, void-safe code (Eiffel void safety level = "all").

**Constraints:**
- C pointers (POINTER type) must be managed carefully
- Session/model handles can be null after unload
- Preconditions check for null handles
- Postconditions guarantee non-null when expected

**Pattern:**
```eiffel
class ONNX_SESSION
  feature
    infer (input_name: STRING; input: ONNX_TENSOR; output_name: STRING): ONNX_TENSOR
      require
        is_loaded: handle /= default_pointer
        input_not_void: input /= Void
      do
        -- Call C API
      ensure
        result /= Void
      end
end
```

**Testing:**
- Compile with `void_safety value="all"` in ECF
- No void safety violations reported
- Passing Void to required parameters: precondition failure

**Priority:** CRITICAL

---

### NFR-004: Performance (Zero-Copy Where Possible)

**Requirement:** Minimize data copying between C and Eiffel.

**Tradeoff:** Safety vs performance
- **Current Approach (Phase 1):** Copy tensor data to Eiffel arrays (safe, simple)
- **Future Approach (Phase 2+):** Zero-copy managed pointers (complex, needs careful design)

**Acceptable Performance:**
- Tensor creation: < 1ms per 1M elements (memory allocation)
- Data copy: C float array -> Eiffel ARRAY < 1ms per 1M elements
- Inference: Limited by model complexity, not copying

**Testing:**
- Profile tensor creation and extraction
- Identify bottlenecks (inference time, not copying)
- Optimize if copying becomes bottleneck

**Priority:** IMPORTANT (Phase 2)

---

### NFR-005: ONNX Runtime Version Compatibility

**Requirement:** Support ONNX Runtime 1.15+ with graceful degradation if features unavailable.

**Version Constraint:**
- Minimum: ONNX Runtime 1.15 (released 2023, proven)
- Tested with: Latest (1.16, 1.17, 1.18 as available)
- Backward compatible: Older models load fine in newer runtime

**API Stability:**
- C API changed minimally from 1.15 to 1.18
- New functions added, old functions unchanged
- Deprecated functions: Flag in documentation

**Testing:**
- Compile against ONNX Runtime 1.15 header
- Test with binaries from 1.15, 1.16, 1.17, 1.18
- Verify no version-dependent bugs

**Priority:** IMPORTANT

---

### NFR-006: Cross-Platform Binary Support

**Requirement:** Support Windows, Linux, macOS (eventually) with platform-specific binaries.

**Phase 1:** Windows only
- onnxruntime.dll (x64)
- Visual C++ Runtime compatibility

**Phase 2:** Linux
- onnxruntime.so (x64)
- GLIBC 2.29+ compatibility

**Phase 3:** macOS
- onnxruntime.dylib (universal binary, Intel + Apple Silicon)

**Distribution:**
- Simple_onnx ships onnxruntime binaries in `bin/` folder
- License: Apache 2.0 (ONNX Runtime), documented in LICENSE

**Testing:**
- Build/test on Windows, Linux, macOS
- Binary portability: exe/binary works across different machines

**Priority:** IMPORTANT

---

### NFR-007: No Python Runtime Dependency

**Requirement:** Inference is pure compiled code, no Python interpreter required.

**Constraint:**
- Model conversion to ONNX: Python (offline, one-time)
- Inference: Compiled Eiffel + C (Python not needed)
- Deployment: Single executable, no Python dependency

**Example:**
```bash
# Conversion (offline, Python required)
$ python -c "torch.onnx.export(...)"

# Inference (no Python)
$ simple_sculptor.exe --prompt "A sphere"  # Uses simple_onnx (Point-E)
```

**Testing:**
- Remove Python from PATH
- Inference still works
- Verify no Python process spawned

**Priority:** CRITICAL

---

## Part 3: Constraints & Design Decisions

### C-001: C API Only (No C++ Wrapping)

**Constraint:** Use ONNX Runtime C API directly, not C++ bindings.

**Rationale:**
- Simpler inline Eiffel externals (C is easier than C++)
- Proven pattern (sherpa-onnx works this way)
- No C++ compilation, no build complexity
- Smaller binary (C runtime, not C++ runtime)

**Implication:** Manual memory management (OrtReleaseSession, etc.), but doable.

---

### C-002: Inline Eiffel Externals

**Constraint:** Use Eiffel's inline C feature, no separate .c files.

**Pattern:**
```eiffel
external "C"
  my_c_function (x: INTEGER): INTEGER
    alias "c_function_name"
    end
```

**Rationale:**
- Self-contained library (no C compilation)
- Easier distribution (pure Eiffel + binary DLL)
- Matches simple_speech pattern

---

### C-003: .onnx Format Only

**Constraint:** Support .onnx files only, not .pb, .pth, .tflite, etc.

**Rationale:**
- Standard format (industry convergence)
- Users convert offline (one-time cost)
- Simplifies library (one format parser)

**Implication:** Users must convert Point-E/Shap-E to ONNX first (easy with torch.onnx.export).

---

### C-004: Fluent Builder Pattern for Configuration

**Constraint:** Use fluent builder for session configuration (consistency with simple_*).

**Pattern:**
```eiffel
create runtime.make_with_cpu_backend
  .with_optimization_level (ONNX_RUNTIME.OPTIMIZATION_ALL)
  .with_intra_op_threads (4)
```

**Rationale:**
- Eiffel idiom (consistent with ecosystem)
- Easy to extend (add new options without API change)
- Readable (feature chaining)

---

### C-005: Copy Semantics for Tensor Data

**Constraint:** Copy tensor data to Eiffel arrays (safety first, performance second).

**Tradeoff:**
- Safe: No C pointers in Eiffel, no dangling references
- Simple: No lifetime management issues
- Cost: Memory copy overhead (mitigated in Phase 2 with zero-copy option)

**Rationale:**
- Phase 1: Get safety right
- Phase 2+: Optimize with zero-copy for power users

---

### C-006: SCOOP-First Design

**Constraint:** Sessions designed for SCOOP concurrency, not shared mutable state.

**Pattern:**
```eiffel
-- Each SCOOP processor has separate session
agent_1.call (model1.infer (...))  -- Separate session in processor 1
agent_2.call (model2.infer (...))  -- Separate session in processor 2
-- No shared mutable state, no locking needed
```

**Rationale:**
- Eiffel's concurrency model
- No mutex/synchronization overhead
- Scales naturally to many processors

---

## Part 4: Requirements Priority Matrix

### Phase 1 (MVP) - CRITICAL

| Requirement | Status |
|-------------|--------|
| FR-001: Load from disk | CRITICAL |
| FR-003: Provider selection | CRITICAL |
| FR-004: Create tensors | CRITICAL |
| FR-005: Execute inference | CRITICAL |
| FR-006: Extract output | CRITICAL |
| FR-009: Unload models | CRITICAL |
| FR-010: Error handling | CRITICAL |
| NFR-001: Memory efficiency | CRITICAL |
| NFR-002: SCOOP safety | CRITICAL |
| NFR-003: Void safety | CRITICAL |
| NFR-007: No Python | CRITICAL |

### Phase 1 (MVP) - IMPORTANT

| Requirement | Status |
|-------------|--------|
| FR-007: Metadata queries | IMPORTANT |
| FR-012: Provider checking | IMPORTANT |
| NFR-005: Version compatibility | IMPORTANT |
| NFR-006: Cross-platform (Windows) | IMPORTANT |

### Phase 2+ (Enhancement)

| Requirement | Status |
|-------------|--------|
| FR-002: Load from buffer | IMPORTANT |
| FR-008: Batch processing | IMPORTANT |
| FR-011: Optimization control | IMPORTANT |
| NFR-004: Zero-copy performance | IMPORTANT |

---

## Testing Strategy

### Unit Tests (simple_testing framework)

```eiffel
-- Per feature
test_load_model_from_disk
test_create_float32_tensor
test_inference_execution
test_error_on_invalid_model
test_tensor_shape_validation
test_batch_processing
test_model_unload
```

### Integration Tests

```eiffel
-- End-to-end workflows
test_point_e_encoder (load -> infer -> extract)
test_concurrent_sessions (SCOOP)
test_provider_selection (CPU vs CUDA)
test_memory_cleanup (no leaks)
```

### Regression Tests

```eiffel
-- Against baseline
test_output_matches_pytorch (tolerance: 1e-4)
test_onnx_runtime_versions (1.15, 1.16, 1.17, 1.18)
```

---

## Success Criteria for Phase 1

All CRITICAL requirements implemented and tested.
All IMPORTANT requirements implemented.
Point-E encoder loads and infers correctly.
VRAM usage traced and verified (no leaks).
SCOOP concurrency validated (concurrent inference works).
Void-safe compilation with no violations.
Error messages clear and actionable.

---

## Related Documents

- **01-SCOPE.md** - Project scope and constraints
- **02-LANDSCAPE.md** - Ecosystem analysis
- **04-DECISIONS.md** - Architectural decisions
- **03-REQUIREMENTS.md** - This document
