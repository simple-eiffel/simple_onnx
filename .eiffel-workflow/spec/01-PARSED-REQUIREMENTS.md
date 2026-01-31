# 01 - Parsed Requirements Summary

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Research Complete → Specification Phase
**Author:** Claude Code

---

## Executive Summary

Simple_onnx addresses a critical gap in the Eiffel ecosystem: **no native ONNX Runtime wrapper for ML/AI inference**. This specification consolidates 8 research documents into actionable requirements for Phase 1 MVP development.

**Problem Statement:**
Eiffel lacks integrated machine learning capabilities. Complex models (Point-E, YOLO, BERT) cannot be used in Eiffel applications without Python-based workarounds. simple_onnx closes this gap by providing a zero-Python, compiled inference engine for ONNX models.

**Scope:**
Load .onnx model files → Execute inference → Extract output tensors. NOT model conversion, NOT training, NOT quantization (Phase 2+).

---

## Part 1: Consolidated Functional Requirements

### FR-001: Load .onnx Model Files

**What:** Load serialized ONNX model from filesystem
**Why:** Foundation for all inference; users must prepare models offline
**How:** File path → ONNX C API → Session handle
**Constraints:** .onnx format only, absolute paths, precondition on file existence
**Phase:** Phase 1 (CRITICAL)

### FR-002: Create Inference Sessions

**What:** Initialize runtime session with configurable provider (CPU, CUDA, TensorRT)
**Why:** Decouple session lifetime from model; support hardware acceleration
**How:** Provider string → Session configuration → ORT session creation
**Constraints:** CPU always available; CUDA/TensorRT optional
**Phase:** Phase 1 (CRITICAL)

### FR-003: Create Input Tensors

**What:** Allocate multi-dimensional arrays with dtype and shape
**Supported dtypes:** FLOAT32, FLOAT16, INT32, INT64, BOOL
**Why:** Users must provide typed input matching model expectations
**How:** Shape array + data array → Tensor object
**Constraints:** Precondition: data length matches shape product
**Phase:** Phase 1 (CRITICAL)

### FR-004: Execute Inference Synchronously

**What:** Run model forward pass on input tensor
**Why:** Core functionality; synchronous blocks until complete
**How:** Session + input tensor + I/O names → OrtRun → output tensor
**Constraints:** Preconditions validate shape/dtype match model schema
**Phase:** Phase 1 (CRITICAL)

### FR-005: Extract Output Tensors

**What:** Convert C tensor to Eiffel array with copy semantics
**Why:** Data available to Eiffel code; safe (no C pointers)
**How:** C tensor → copy to ARRAY [REAL] → release C memory
**Constraints:** Phase 1 uses copy; Phase 2 adds zero-copy option
**Phase:** Phase 1 (CRITICAL)

### FR-006: Query Model Metadata

**What:** Inspect model structure without loading weights
**Queries:** Input/output names, shapes, data types, opset version
**Why:** Users debug tensor preparation; enables runtime validation
**How:** Session → ORT C API → metadata objects
**Constraints:** Support symbolic dimensions (e.g., batch = None)
**Phase:** Phase 1 (IMPORTANT)

### FR-007: Unload Models Explicitly

**What:** Free model and session memory
**Why:** VRAM management; multi-model pipelines (encoder → decoder)
**How:** Unload call → OrtReleaseSession → handle invalidation
**Constraints:** Postcondition: model unusable after unload (prevents use-after-free)
**Phase:** Phase 1 (CRITICAL)

### FR-008: Support Batch Processing

**What:** Handle variable batch dimensions in inference
**Why:** Performance amortization; multi-sample inference (4x samples ≈ 2-3x faster on GPU)
**How:** Dynamic batch shape [batch_size, features] → inference scales with batch
**Constraints:** Models must support dynamic batch (not all do)
**Phase:** Phase 1 (IMPORTANT)

### FR-009: Error Handling with Context

**What:** Convert C API errors to meaningful Eiffel exceptions
**Error categories:** INVALID_MODEL, SHAPE_MISMATCH, VRAM_FULL, PROVIDER_UNAVAILABLE, DTYPE_MISMATCH
**Why:** Debugging; users recover from failures gracefully
**How:** ORT status → exception type → message with context
**Constraints:** Preconditions prevent some errors; postcondition: error_message non-void
**Phase:** Phase 1 (CRITICAL)

### FR-010: Session Configuration (Builder Pattern)

**What:** Fluent API for session settings (optimization level, provider)
**Optimization levels:** DISABLED, BASIC, EXTENDED, ALL
**Why:** Trade-off startup latency vs inference speed
**How:** Fluent methods chain and return Current
**Constraints:** Eiffel idiomatic (consistent with simple_* ecosystem)
**Phase:** Phase 1 (IMPORTANT)

### FR-011: Provider Availability Checking

**What:** Query which execution backends available on system
**Providers:** CPU (always), CUDA, TensorRT, DirectML, CoreML
**Why:** Runtime guidance for users; fallback patterns
**How:** ORT C API → list of strings
**Constraints:** Reflects actual system capabilities (not guessed)
**Phase:** Phase 1 (IMPORTANT)

### FR-012: Load Models from Memory Buffers

**What:** Load ONNX model from byte array instead of filesystem
**Use cases:** Embedded models, encrypted distribution, memory-mapped files
**Why:** Flexibility; not all models come as .onnx files
**How:** Byte array → OrtCreateSessionFromArray → session
**Constraints:** Phase 1 focuses on file loading; Phase 2 adds buffer loading
**Phase:** Phase 2 (IMPORTANT)

---

## Part 2: Consolidated Non-Functional Requirements

### NFR-001: Memory Efficiency

**Requirement:** Explicit model unload frees VRAM; no memory leaks over time
**Metrics:**
- VRAM before load: X GB
- VRAM after load: X + model_size GB
- VRAM after unload: X GB (fully reclaimed)

**Validation:** Load/unload 100x with memory monitoring; Valgrind leak detection
**Priority:** CRITICAL (prevents VRAM exhaustion issues)

### NFR-002: SCOOP Concurrency Safety

**Requirement:** Library designed for SCOOP (separate objects, no shared mutable state)
**Pattern:** Each processor has own session; multiple models independent
**Constraint:** No global state; sessions are separate objects
**Validation:** Two SCOOP agents load/infer concurrently; output matches
**Priority:** CRITICAL (Eiffel's concurrency model)

### NFR-003: Void Safety

**Requirement:** All detachable references checked; compile with void_safety="all"
**Pattern:** Preconditions check for Void; postconditions guarantee non-Void
**Constraint:** C POINTER types managed explicitly
**Validation:** No void safety violations reported by compiler
**Priority:** CRITICAL (safety by design)

### NFR-004: Performance (Copy vs Zero-Copy)

**Requirement (Phase 1):** Copy tensor data to Eiffel arrays (safety first)
**Requirement (Phase 2):** Optional zero-copy for advanced users
**Metrics:** Data copy < 1ms per 1M elements; inference not bottlenecked by copying
**Validation:** Profile tensor creation; benchmark vs PyTorch baseline
**Priority:** IMPORTANT (Phase 2 optimization)

### NFR-005: ONNX Runtime Version Compatibility

**Requirement:** Support ONNX Runtime 1.15+ with graceful degradation
**Tested versions:** 1.15 (primary), 1.16, 1.17, 1.18 (latest)
**Constraint:** Backward compatible (newer runtime works with older models)
**Validation:** CI tests against multiple versions
**Priority:** IMPORTANT (future-proofing)

### NFR-006: Cross-Platform Support

**Phase 1:** Windows (x64) with CPU-only binary (maximum compatibility)
**Phase 2+:** Linux (x64), optional CUDA
**Phase 3:** macOS (Intel + Apple Silicon)
**Constraint:** ONNX Runtime binaries provided; no source compilation required
**Validation:** Build/test on Windows 10+, Ubuntu 20.04+
**Priority:** IMPORTANT

### NFR-007: Zero Python Runtime Dependency

**Requirement:** Inference is compiled code; no Python interpreter needed
**Constraint:** Model conversion (PyTorch → ONNX) uses Python offline
**Validation:** Remove Python from PATH; inference still works
**Priority:** CRITICAL (deployment simplicity)

---

## Part 3: Extracted Design Decisions

### Decision: C API + Inline Externals

**Why:** Proven pattern (sherpa-onnx works this way); simple; Eiffel idiomatic
**Trade-off:** Manual memory management ↔ self-contained library
**Implication:** No C++ compilation; no extra binaries; use OrtReleaseTensor for cleanup

### Decision: Single Session Per Model

**Why:** SCOOP natural; clear ownership; simple lifecycle
**Trade-off:** Multiple models = multiple VRAM ↔ no session pooling complexity
**Implication:** Concurrent inference via separate objects; users manage unload explicitly

### Decision: Copy Semantics (Phase 1) → Zero-Copy (Phase 2)

**Why (Phase 1):** Safety > performance; no C pointers in Eiffel; void-safe
**Why (Phase 2):** Large tensors (1GB+) need optimization
**Implication:** Phase 1 acceptable overhead; Phase 2 power users get zero-copy

### Decision: .onnx Format Only

**Why:** Standard format; users convert offline (torch.onnx.export); simpler library
**Trade-off:** Setup friction ↔ no multi-format complexity
**Implication:** Point-E, YOLO, BERT all convertible; documented offline conversion

### Decision: Fluent Builder Pattern

**Why:** Eiffel idiom; consistent with simple_* ecosystem; readable
**Pattern:** `.with_provider("CUDA").with_optimization(ALL)`
**Implication:** Each option is separate feature method

### Decision: Exception-Based Error Handling

**Why:** Eiffel standard; type-safe; preconditions align
**Pattern:** Catch OrtStatus → throw ONNX_ERROR subclass
**Implication:** Define exception classes: ONNX_INVALID_MODEL, ONNX_SHAPE_MISMATCH, etc.

### Decision: 5 Data Types (FLOAT32, FLOAT16, INT32, INT64, BOOL)

**Why:** Covers 99%+ of inference workloads; manageable scope
**Coverage:** Point-E (int64 tokens, float32 embeddings), YOLO (float32 images), BERT (int32 IDs)
**Implication:** Phase 2 can extend if demand; clear message for other types

### Decision: SCOOP Model (Separate Contexts, No Locks)

**Why:** Native to Eiffel; no mutex overhead; scales to many processors
**Trade-off:** Memory (multiple sessions) ↔ performance (no lock contention)
**Implication:** Users design concurrent systems with separate session objects

### Decision: Version Pinning (1.15 Primary, Support 1.15 + Latest)

**Why:** Proven versions; manageable testing burden
**Implication:** CI tests both versions; changelog documents compatibility

---

## Part 4: Consolidated Use Cases

### UC-001: Load Model and Query Metadata

```eiffel
-- User wants to inspect model structure before inference
local
  runtime: SIMPLE_ONNX
  model: ONNX_MODEL
do
  create runtime.make
  model := runtime.load_model ("point-e-base.onnx")

  -- Query what to expect
  print ("Inputs: " + model.input_names.count.out)
  print ("Input 0 shape: " + model.input_shape (0).out)
  print ("Input 0 dtype: " + model.input_dtype (0).out)
end
```

### UC-002: Single Inference (Point-E Token Encoder)

```eiffel
-- User wants to embed tokens using Point-E
local
  runtime: SIMPLE_ONNX
  session: ONNX_SESSION
  tokens: ONNX_TENSOR
  output: ONNX_RESULT
do
  create runtime.make
  session := runtime.create_session (runtime.load_model ("encoder.onnx"))
  session.set_provider ("CUDA")

  -- Create token input [batch=1, seq_len=77]
  create tokens.make_int64 (<<1, 77>>)
  tokens.set_data_from_array (<<101, 2054, 3231, ...>>)

  -- Run inference
  output := session.execute (tokens)
  if output.is_success then
    -- Extract embeddings
    process_embeddings (output.output_tensor)
  else
    print ("Error: " + output.error_message)
  end

  session.unload
end
```

### UC-003: Batch Inference

```eiffel
-- User wants to process multiple samples efficiently
local
  session: ONNX_SESSION
  batch: ONNX_TENSOR
  result: ONNX_RESULT
do
  -- Load model once
  create runtime.make
  session := runtime.create_session (runtime.load_model ("model.onnx"))

  -- Inference with batch_size=4
  create batch.make_float32 (<<4, 224, 224, 3>>)
  -- Fill batch with 4 images...

  result := session.execute (batch)
  -- Output has shape [4, num_classes] (4 predictions)
  process_batch_output (result.output_tensor)

  session.unload
end
```

### UC-004: Multi-Model Pipeline with Unload

```eiffel
-- User wants to run encoder → decoder → upsampler (sequential, unload between stages)
local
  runtime: SIMPLE_ONNX
  encoder_sess, decoder_sess, upsampler_sess: ONNX_SESSION
  input, intermediate, output: ONNX_RESULT
do
  create runtime.make

  -- Stage 1: Encode (1.2GB)
  encoder_sess := runtime.create_session (runtime.load_model ("encoder.onnx"))
  input := encoder_sess.execute (prompt_tensor)
  encoder_sess.unload  -- Free 1.2GB VRAM

  -- Stage 2: Decode (2.4GB)
  decoder_sess := runtime.create_session (runtime.load_model ("decoder.onnx"))
  intermediate := decoder_sess.execute (input.output_tensor)
  decoder_sess.unload  -- Free 2.4GB VRAM

  -- Stage 3: Upsample (800MB)
  upsampler_sess := runtime.create_session (runtime.load_model ("upsampler.onnx"))
  output := upsampler_sess.execute (intermediate.output_tensor)

  upsampler_sess.unload  -- Cleanup
end
```

### UC-005: Provider Selection & Fallback

```eiffel
-- User wants GPU if available, fallback to CPU
local
  runtime: SIMPLE_ONNX
  session: ONNX_SESSION
do
  create runtime.make

  if runtime.is_provider_available ("CUDA") then
    session := runtime.create_session (runtime.load_model ("model.onnx"))
    session.set_provider ("CUDA")
    print ("Using CUDA")
  else
    session := runtime.create_session (runtime.load_model ("model.onnx"))
    session.set_provider ("CPU")
    print ("CUDA unavailable, using CPU")
  end

  result := session.execute (input_tensor)
  -- ... process result ...
  session.unload
end
```

---

## Part 5: Risk Summary

| Risk | Likelihood | Impact | Mitigation |
|------|-----------|--------|-----------|
| ONNX RT binary incompatibility | LOW | HIGH | Version pinning (1.15+), CI matrix |
| Shape/dtype mismatches | MEDIUM-HIGH | MEDIUM | Preconditions, metadata queries |
| VRAM exhaustion | MEDIUM | MEDIUM | Explicit unload, VRAM tracking |
| C API memory leaks | LOW | HIGH | Finalizers, Valgrind testing |
| Cross-platform compatibility | HIGH | MEDIUM | CPU-only Phase 1, clear errors |

**Overall Assessment:** LOW-MEDIUM risk. All risks mitigated to acceptable levels. Green light for Phase 1.

---

## Part 6: Success Criteria

**Phase 1 Complete When:**

1. All 12 FR + 7 NFR implemented and tested
2. Point-E encoder loads and runs correctly
3. Memory profiling shows no leaks (100+ iterations)
4. SCOOP concurrency test passes (two agents, concurrent inference)
5. Void-safe compilation with no violations
6. Error messages clear and actionable
7. Documentation includes Point-E, YOLO examples
8. CI passes on Windows 10+ and Ubuntu 20.04+

---

## Related Documents

- **02-DOMAIN-MODEL.md** - Core concepts and relationships
- **03-CHALLENGED-ASSUMPTIONS.md** - Validation of design choices
- **04-CLASS-DESIGN.md** - OOSC2 architecture
- **05-CONTRACT-DESIGN.md** - Design by Contract specifications
- **06-INTERFACE-DESIGN.md** - Public API and examples
- **07-SPECIFICATION.md** - Formal class definitions
- **08-VALIDATION.md** - Requirements traceability and compliance

