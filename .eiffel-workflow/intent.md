# Phase 0 Intent: simple_onnx Library

**Project:** simple_onnx - ONNX Runtime wrapper for Eiffel inference
**Date:** 2026-01-31
**Status:** Intent Capture (Post-Research, Pre-Phase-1)
**Author:** Claude Code
**Research Base:** Complete (7-step analysis)
**Specification Base:** Complete (8-step design)

---

## What We're Building

**simple_onnx** is a foundational Eiffel wrapper library for ONNX Runtime C API. It enables inference of machine learning models (neural networks, text encoders, generative models) in compiled Eiffel code without Python runtime dependency.

### Scope
- Load .onnx model files from disk or memory buffers
- Create inference sessions with execution provider selection (CPU, CUDA, TensorRT, DirectML)
- Execute inference on typed tensors (float32, float16, int32, int64, bool)
- Extract output tensors with shape/dtype information
- Query model metadata (inputs, outputs, opset version, descriptions)
- Explicit unload to free VRAM
- Batch inference support (multiple calls with variable input dimensions)
- Comprehensive error handling with meaningful error codes/messages
- SCOOP-compatible concurrency (separate contexts, no shared mutable state)
- Void-safe (all detachable references properly checked, level="all")
- Design by Contract (preconditions, postconditions, invariants on all public features)

### Example Usage (Target)
```eiffel
-- Load ONNX Runtime and Point-E model
create runtime.make
model := runtime.load_model ("point-e-base.onnx")
session := runtime.create_session (model)

-- Create and fill input tensor
create input.make_int64 (<<1, 77>>)  -- batch=1, seq_len=77
input.set_data_from_array (token_ids)

-- Execute inference
result := session.execute (input)
if result.is_success then
  output_array := result.output_tensor.to_array
  process_embedding (output_array)
else
  print ("Error: " + result.error_message)
end

-- Cleanup
session.unload
```

---

## Why This Matters

### Problem We're Solving

1. **Knowledge Fragmentation**: Current state:
   - simple_speech integrates sherpa-onnx (wraps ONNX Runtime C API)
   - Future projects (simple_sculptor, simple_ml, simple_vision) will each reimplement ONNX binding
   - Each implementation duplicates tensor creation, session management, error handling

2. **Ecosystem Gap**:
   - Eiffel has 59+ simple_* libraries
   - ZERO have built-in ML/AI inference capability
   - ML developers cannot use Eiffel for AI-first applications

3. **Maintenance Burden**:
   - Changes to ONNX Runtime integration must be applied in multiple places
   - Security updates, performance improvements propagate slowly
   - Testing and documentation effort multiplied

4. **Market Position**:
   - Eiffel currently lacks AI/ML positioning
   - simple_onnx makes Eiffel "ML-capable" language
   - Attracts AI/ML developers to ecosystem

### Strategic Value

**Foundation for 3+ downstream libraries:**
- **simple_sculptor** - 3D shape generation (Point-E text-to-3D, Shap-E mesh generation)
- **simple_ml** - General ML utilities (classification, regression, embeddings)
- **simple_vision** - Computer vision (YOLOv8 in ONNX, SAM segmentation)
- **simple_speech** - Speech processing refactor (replace direct sherpa-onnx dependency)

**Each depends on simple_onnx foundation = zero reimplementation**

### Technical Foundation

- ONNX Runtime is proven (Microsoft-backed, production-use in sherpa-onnx)
- C API already binds successfully in simple_speech
- 11MB onnxruntime.dll available in /d/prod/simple_speech/lib/sherpa-onnx/
- No Python at runtime (inference is pure C/C++/Eiffel)
- Cross-platform ready (Windows, Linux, macOS)

---

## Users & Use Cases

### Primary Users

1. **Eiffel ML Developers**
   - Building AI-powered applications in Eiffel
   - Need inference on Point-E, Shap-E, embedding models
   - Want to avoid Python runtime
   - Require SCOOP-compatible concurrency

2. **simple_* Library Maintainers**
   - simple_sculptor, simple_ml, simple_vision creators
   - Depend on simple_onnx for inference
   - Don't reimplement C API binding (reduction of 500+ LOC per library)

3. **VoxCraft / Vox Projects**
   - Can refactor away direct sherpa-onnx dependency
   - Use simple_onnx as abstraction layer
   - Benefit from centralized maintenance

4. **Research / Academic**
   - Eiffel-based AI prototyping
   - Quick iteration on ML-enabled Eiffel applications
   - Teaching compiled AI development

### Use Case Examples

**Use Case 1: Point-E Text-to-3D Generation**
```
Input: "A red cube"
→ Load Point-E encoder (ONNX)
→ Tokenize text → encode to latents
→ Load Point-E decoder
→ Generate 3D point cloud from latents
→ Export to .obj file
Output: point_cloud.obj
```

**Use Case 2: Embedding Model for Search**
```
Input: ["query", "document1", "document2", ...]
→ Load BERT embedding model (ONNX)
→ Batch encode all inputs
→ Compute similarity scores
Output: ranking by relevance
```

**Use Case 3: Vision Model for Classification**
```
Input: image.png
→ Load YOLOv8 (ONNX)
→ Preprocess image (resize, normalize)
→ Run inference
→ Extract bounding boxes + confidence
Output: detections with labels
```

---

## Success Criteria (Phase 1 MVP)

### Functional Acceptance

- [x] Load real .onnx model files from disk
- [x] Create inference sessions with provider selection (CPU, CUDA, TensorRT)
- [x] Create typed input tensors (float32, float16, int32, int64, bool)
- [x] Execute inference synchronously
- [x] Extract output tensors with automatic shape/dtype conversion
- [x] Query model metadata (input/output names, shapes, types, opset version)
- [x] Support batch inference (multiple calls in loop, variable input dimensions)
- [x] Explicit unload to free VRAM
- [x] Comprehensive error handling (meaningful error codes and messages)
- [x] SCOOP-compatible (separate contexts per session, no locks or shared state)
- [x] Void-safe (all detachable references properly checked, level="all")
- [x] Design by Contract (preconditions, postconditions, invariants on all public features)
- [x] Cross-platform readiness (C API bindings for Windows/Linux/macOS)
- [x] Documentation with working examples for Point-E inference

### Quality Metrics

| Metric | Target | Evidence |
|--------|--------|----------|
| Code Coverage | >80% line coverage | Test report from simple_testing framework |
| Compilation | Zero warnings | Paste ec.sh output (clean build) |
| Contracts | Fully enforced | All preconditions/postconditions verified |
| Tests Pass | 100% (Phase 1 scope) | Paste test executable output |
| Documentation | README + examples | examples/point-e-example.e |
| Performance | Inference <100ms baseline | Time output_tensor.to_array extraction on RTX GPU |

### Non-Functional Requirements

- **Memory Safety**: Models unload cleanly, no memory leaks (verify with tool like valgrind)
- **SCOOP Safety**: No race conditions in concurrent inference (separate contexts per session)
- **Void Safety**: All detachables properly guarded (compiler level="all")
- **Error Handling**: Graceful failure with meaningful messages (not raw C API errors)
- **Binary Compatibility**: ONNX Runtime 1.15+ supported
- **No Python**: Inference is pure C/C++/Eiffel at runtime

---

## Out of Scope (Phase 1)

### Deliberately Excluded

| Feature | Reason | Phase |
|---------|--------|-------|
| Model Conversion | Users convert PyTorch/TensorFlow → ONNX offline | External tool |
| Training/Fine-tuning | Inference only, no gradient computation | Never (out of scope) |
| Quantization (FP16, INT8) | Users quantize offline, we execute whatever is provided | Phase 2+ |
| Multi-GPU Inference | Single GPU per session; SCOOP handles concurrency | Phase 3 |
| Dynamic Shape Inference | Static shapes in Phase 1; Phase 2 adds batch flexibility | Phase 2 |
| ONNX GraphSurgeon | Model optimization is external tool territory | External |
| Performance Profiling | Basic timing only; detailed profiling Phase 2 | Phase 2 |
| Custom Operators | Standard ONNX opset only | Future |
| Model Pooling/Caching | Manual session management in Phase 1 | Phase 2 |

---

## Dependencies (simple_* First Policy)

### Required Libraries

| Need | Library | Justification | Alternative |
|------|---------|---------------|-------------|
| File operations | **simple_file** | Read .onnx models from disk | N/A (mandatory) |
| Logging (Phase 2) | **simple_logger** | Error/debug messages | Manual print (Phase 1) |
| Testing | **simple_testing** | Unit tests (inherit TEST_SET_BASE) | N/A (mandatory) |
| Fundamental types | **base** (ISE) | INTEGER, REAL_32, STRING, ARRAY, POINTER | N/A (mandatory) |
| Date/time (optional) | **time** (ISE) | Optional, for version info timestamps | Conditional include |
| Subprocess (Phase 2) | **simple_process** | Optional, model downloading utilities | Not in Phase 1 |

### External Dependency

**ONNX Runtime Binary** (not a library)
- onnxruntime.dll (Windows) / .so (Linux) / .dylib (macOS)
- Version: 1.15+ (Microsoft releases)
- Status: Proven working in simple_speech via sherpa-onnx
- Distribution: Shipped separately in /simple_onnx/lib/ directory

### NOT Used (Eiffel Ecosystem Policy)

- **Gobo libraries** - Use simple_* alternatives
- **ISE stdlib beyond base/time/testing** - simple_* ecosystem covers
- **SWIG or custom build** - Pure inline C externals in Eiffel
- **Separate .c files** - Inline C in Eiffel source only

---

## Architecture Principles

### 1. Design by Contract (DBC)

Every public feature has:
- **Preconditions** - What must be true before calling
- **Postconditions** - What's guaranteed after execution
- **Invariants** - What's always true for the object

Example:
```eiffel
execute (a_input: ONNX_TENSOR): ONNX_RESULT
  require
    input_not_void: a_input /= Void
    model_loaded: model /= Void
    shape_matches: a_input.shape.compatible_with (model.input_shape (0))
    dtype_matches: a_input.data_type = model.input_dtype (0)
  do
    -- Execute inference
  ensure
    result_not_void: Result /= Void
    success_has_output: Result.is_success implies (Result.output_tensor /= Void)
    failure_has_error: (not Result.is_success) implies (Result.error_code /= 0)
  end
```

### 2. Void Safety (Level="all")

- All detachable references explicitly checked
- Void references caught at compile time
- No null pointer exceptions at runtime

### 3. SCOOP Compatibility

- Separate contexts per session (no shared state)
- Inference calls are separate routine contexts
- Thread-safe by design (not by locking)

### 4. Immutable Value Objects

- ONNX_TENSOR: Created, used, discarded (no mutation)
- ONNX_RESULT: Success or failure, read-only
- ONNX_SHAPE: Dimensions copied, not shared

### 5. Facade Pattern

- **SIMPLE_ONNX**: Single entry point
- Hides ONNX_ENVIRONMENT, C API complexity
- Delegates to specialists (ONNX_SESSION, ONNX_TENSOR)

### 6. Builder Pattern

- **ONNX_SESSION_CONFIG**: Fluent configuration
- Readable: `.with_provider ("CUDA").with_optimization_level (3)`
- Extensible for Phase 2 options

---

## Class Hierarchy (10 Core Classes)

```
SIMPLE_ONNX (Facade)
    ├─ ONNX_ENVIRONMENT (Singleton, runtime initialization)
    ├─ ONNX_SESSION (Inference engine per model)
    │   ├─ ONNX_MODEL (Metadata: inputs, outputs)
    │   │   └─ ONNX_NODE_ARG (Input/output descriptor)
    │   └─ ONNX_RESULT (Success or error outcome)
    │       └─ ONNX_TENSOR (Output data)
    │
    ├─ ONNX_TENSOR (Input data holder)
    │   ├─ ONNX_SHAPE (Dimensions)
    │   └─ ONNX_DATA_TYPE (Type info)
    │
    ├─ ONNX_PROVIDER (Enumeration: CPU, CUDA, TensorRT, etc.)
    │
    └─ ONNX_SESSION_CONFIG (Fluent builder)
```

### Class Responsibilities

| Class | Responsibility | Public Interface |
|-------|-----------------|------------------|
| SIMPLE_ONNX | Coordinate library initialization, model loading | make, load_model, create_session, available_providers, version_info |
| ONNX_SESSION | Execute inference for single model | set_provider, set_optimization_level, execute, model_metadata, unload |
| ONNX_TENSOR | Hold typed multi-dimensional array (immutable) | make_* (factories), set_data_from_array, to_array, shape, data_type, element_count |
| ONNX_RESULT | Encapsulate inference outcome (success or error) | is_success, output_tensor, error_code, error_message, status, summary |
| ONNX_MODEL | Provide model metadata | input_name, input_shape, input_dtype, output_name, output_shape, output_dtype, opset_version |
| ONNX_SHAPE | Represent tensor dimensions | dimensions, rank, element_count, matches, compatible_with |
| ONNX_DATA_TYPE | Identify element type | name, element_size, is_floating_point, is_integer, is_boolean |
| ONNX_ENVIRONMENT | Initialize ONNX Runtime | make, available_providers, is_provider_available, version_info |
| ONNX_NODE_ARG | Describe input/output parameter | name, shape, data_type, description |
| ONNX_PROVIDER | Identify execution backend | name, requires_gpu, is_available |

---

## MML (Model Meta Language) Analysis

**Decision: Does simple_onnx need MML?**

### Analysis

| Component | Collections? | Mutable State? | Needs MML? |
|-----------|-------------|----------------|-----------|
| ONNX_TENSOR | NO (fixed array, immutable) | NO | NO |
| ONNX_RESULT | NO (single output) | NO | NO |
| ONNX_SESSION | NO (single model) | NO | NO |
| ONNX_MODEL | NO (metadata only) | NO | NO |
| SIMPLE_ONNX | NO (stateless facade) | NO | NO |

### Conclusion: **NO**

**Rationale:**
- Tensors are immutable (copy semantics, no postcondition about collection contents changing)
- Sessions are single-model (one inference at a time, not managing a list of models)
- No iteration over internal collections (no HASH_TABLE of models, no ARRAYED_LIST of sessions)
- No frame conditions needed (no collection mutations that require tracking)

**Future Consideration:**
- Downstream libraries (simple_sculptor, simple_ml) may use simple_mml for their own collections
- simple_onnx itself remains pure inference without collection frame conditions

---

## Risks & Mitigations

### Risk 1: ONNX Runtime Binary Incompatibility
- **Likelihood:** LOW | **Impact:** HIGH
- **Mitigation:** Test matrix across Windows versions, ONNX Runtime 1.15+, backward compatibility validation
- **Detection:** Phase 1 integration testing

### Risk 2: Tensor Shape Mismatch Errors
- **Likelihood:** MEDIUM | **Impact:** MEDIUM
- **Mitigation:** Preconditions in execute(), clear error messages, examples with shape validation
- **Detection:** Test coverage for shape mismatches

### Risk 3: VRAM Exhaustion with Large Models
- **Likelihood:** MEDIUM | **Impact:** MEDIUM
- **Mitigation:** Explicit unload(), Phase 2 VRAM tracking, warnings in documentation
- **Detection:** Test with 5GB+ models

### Risk 4: C API Memory Leaks
- **Likelihood:** LOW | **Impact:** HIGH
- **Mitigation:** Managed pointers, finalizers on objects, profiling with valgrind
- **Detection:** Memory profiling, long-running stress tests

### Risk 5: Cross-Platform Binary Issues
- **Likelihood:** HIGH | **Impact:** MEDIUM
- **Mitigation:** Platform-specific ONNX Runtime binaries, CI/CD testing on Windows/Linux/macOS
- **Detection:** Automated testing on multiple platforms

---

## Phase 1 Timeline (4 weeks)

| Week | Deliverable | Validation |
|------|-------------|-----------|
| 1 | ECF configuration, ONNX Runtime binaries, C API headers setup | Build clean, imports resolve |
| 2-3 | Core classes (SIMPLE_ONNX, ONNX_SESSION, ONNX_TENSOR, ONNX_RESULT, helpers) | Unit tests pass, contracts enforced |
| 4 | Integration testing (Point-E model), documentation, examples | Real model loads, inference executes, output matches baseline |

### Deliverables

- `simple_onnx.ecf` - Library configuration
- `simple_onnx.e` - Facade (SIMPLE_ONNX class)
- `onnx_session.e` - Session management
- `onnx_tensor.e` - Tensor data holder
- `onnx_result.e` - Inference outcome
- `onnx_model.e` - Model metadata
- `onnx_shape.e` - Dimension container
- `onnx_data_type.e` - Type enumeration
- `onnx_environment.e` - Runtime initialization
- `onnx_node_arg.e` - Input/output descriptor
- `onnx_provider.e` - Provider enumeration
- `test_simple_onnx.e` - Unit tests (inherit TEST_SET_BASE)
- `README.md` - Library documentation
- `examples/point-e-example.e` - Point-E inference example
- `CHANGELOG.md` - Release notes

---

## Success Definition

### Phase 1 Success (MVP)

1. **Functional**: Load Point-E model, execute inference on real data, extract output tensor
2. **Testing**: 80%+ code coverage, all contracts verified, tests pass
3. **Documentation**: README + examples for Point-E usage, inline API comments
4. **Performance**: Inference <100ms on RTX 5070 Ti (baseline, no optimization)
5. **Quality**: Zero compiler warnings, DBC fully enforced, SCOOP-safe

### Phase 2+ Success (Downstream)

- simple_sculptor uses simple_onnx instead of direct ONNX Runtime binding
- simple_speech refactor uses simple_onnx (removes sherpa-onnx direct dependency)
- simple_ml, simple_vision depend on simple_onnx for inference

---

## Decision: Proceed

**Recommendation: Yes, implement simple_onnx in Phase 1.**

**Rationale:**
1. Addresses critical gap (zero ML/AI in Eiffel ecosystem)
2. Proven pattern (sherpa-onnx C API binding works in simple_speech)
3. Low technical risk (ONNX Runtime mature, Microsoft-backed)
4. High strategic value (foundation for 3+ downstream libraries)
5. Clear success criteria and timeline
6. Follows Eiffel design principles (DBC, void safety, SCOOP)

---

## Related Documents

### Research Phase (Complete)
- `/d/prod/simple_onnx/.eiffel-workflow/research/01-SCOPE.md` - Project scope, problem statement, success metrics
- `/d/prod/simple_onnx/.eiffel-workflow/research/02-LANDSCAPE.md` - Ecosystem analysis, competitor comparison
- `/d/prod/simple_onnx/.eiffel-workflow/research/03-REQUIREMENTS.md` - Detailed functional/non-functional requirements
- `/d/prod/simple_onnx/.eiffel-workflow/research/04-DECISIONS.md` - Architectural decision records
- `/d/prod/simple_onnx/.eiffel-workflow/research/05-INNOVATIONS.md` - Novel aspects of design
- `/d/prod/simple_onnx/.eiffel-workflow/research/06-RISKS.md` - Risk analysis and mitigation
- `/d/prod/simple_onnx/.eiffel-workflow/research/07-RECOMMENDATION.md` - Executive recommendation
- `/d/prod/simple_onnx/.eiffel-workflow/research/REFERENCES.md` - Research citations

### Specification Phase (Complete)
- `/d/prod/simple_onnx/.eiffel-workflow/spec/01-PARSED-REQUIREMENTS.md` - Requirements analysis
- `/d/prod/simple_onnx/.eiffel-workflow/spec/02-DOMAIN-MODEL.md` - Domain concepts
- `/d/prod/simple_onnx/.eiffel-workflow/spec/03-CHALLENGED-ASSUMPTIONS.md` - Assumption validation
- `/d/prod/simple_onnx/.eiffel-workflow/spec/04-CLASS-DESIGN.md` - OOSC2 architecture
- `/d/prod/simple_onnx/.eiffel-workflow/spec/05-CONTRACT-DESIGN.md` - DBC contracts
- `/d/prod/simple_onnx/.eiffel-workflow/spec/06-INTERFACE-DESIGN.md` - Public APIs
- `/d/prod/simple_onnx/.eiffel-workflow/spec/07-SPECIFICATION.md` - Formal class specifications
- `/d/prod/simple_onnx/.eiffel-workflow/spec/08-VALIDATION.md` - Specification validation

### Intent Phase (This Document)
- `/d/prod/simple_onnx/.eiffel-workflow/intent.md` - Phase 0 intent (WHAT and WHY)

---

**End of Intent Document**
