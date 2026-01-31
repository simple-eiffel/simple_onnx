# Simple ONNX - Project Scope

**Project:** simple_onnx - Foundational ONNX Runtime wrapper library for Eiffel
**Date:** 2026-01-31
**Status:** Pre-Phase (Research Complete)

---

## Executive Summary

simple_onnx addresses a critical gap in the Eiffel ecosystem: the lack of a production-ready ONNX Runtime wrapper. Currently, each project requiring ONNX inference (simple_speech, future simple_sculptor, simple_ml) must duplicate integration work with the underlying C API. This project consolidates that work into a reusable foundation library.

---

## Problem Statement

### Current State
- **simple_speech** already integrates sherpa-onnx (which wraps ONNX Runtime) for speech processing
- **onnxruntime.dll** (11MB) is proven working in /d/prod/simple_speech/lib/sherpa-onnx/
- **C API headers and .lib files** are available at /d/prod/simple_speech/lib/sherpa-onnx/
- **Issue:** Every project that needs ONNX inference must:
  - Re-implement tensor creation logic
  - Duplicate session management code
  - Rewrite error handling for C API calls
  - Manage ONNX Runtime binary distribution separately

### Impact
- **Code duplication:** ML/AI features across simple_* ecosystem reinvent the wheel
- **Maintenance burden:** Changes to ONNX Runtime integration must be applied in multiple places
- **Knowledge fragmentation:** Each project maintains separate expertise in C API binding
- **Ecosystem blocker:** simple_sculptor, simple_ml, simple_vision cannot easily consume ONNX models

---

## Solution Overview

### What We're Building

A single, reusable Eiffel library (`simple_onnx`) that wraps the ONNX Runtime C API, providing:

1. **Model Loading** - Load .onnx files or memory buffers into inference sessions
2. **Tensor Management** - Create input tensors, execute inference, extract output tensors
3. **Session Configuration** - Select execution providers (CPU, CUDA, TensorRT)
4. **Error Handling** - Meaningful error messages from C API failures
5. **Memory Management** - Explicit session/model unload to free VRAM
6. **Concurrency Safety** - SCOOP-compatible separation objects, no shared mutable state
7. **Void Safety** - All detachable references properly checked
8. **Batch Processing** - Support variable-dimension inputs for batched inference

### Design Philosophy

- **Simple API:** Inference in 5-7 lines of Eiffel code
- **Safe Defaults:** Copy semantics (tensors) for safety over performance
- **SCOOP-First:** Designed for concurrent Eiffel code, not retrofitted
- **C API Only:** Use ONNX Runtime C bindings (no C++ wrapping, no separate build)
- **Pure Eiffel:** Inline C externals in Eiffel source, no custom C files

### Success Criteria

1. Load a real ONNX model (e.g., Point-E encoder) from disk
2. Create inference session with backend selection
3. Create, fill, and extract tensors with shape/type validation
4. Execute inference synchronously in < 10 lines of Eiffel
5. Properly unload models to reclaim VRAM
6. SCOOP-compatible (separate contexts, no race conditions)
7. Comprehensive error handling with meaningful messages
8. Documented with working examples for simple_sculptor use case

---

## User Personas

### Primary Users

**Eiffel Developers Building ML/AI Features**
- Using ONNX models (Point-E, Shap-E, diffusion models, vision models)
- Need inference capability in compiled Eiffel code
- Want to avoid Python at runtime
- Require SCOOP-compatible concurrency

### Downstream Libraries

- **simple_sculptor** - 3D shape generation (Point-E/Shap-E inference)
- **simple_speech** - Speech refactor to use simple_onnx instead of sherpa-onnx directly
- **simple_ml** - General ML utilities (classification, regression)
- **simple_vision** - Computer vision models (YOLOv8 in ONNX, SAM, etc.)

### Usage Pattern

```eiffel
-- Expected usage after simple_onnx is complete
local
  onnx: ONNX_RUNTIME
  model: ONNX_MODEL
  input: ONNX_TENSOR
  output: ONNX_TENSOR
do
  -- Load runtime with CPU backend
  create onnx.make_with_cpu_backend

  -- Load model
  model := onnx.load_model ("point-e-base.onnx")

  -- Create input tensor (batch=1, 77 token IDs)
  create input.make_int64 (<<1, 77>>)
  input.set_data_from_array (token_ids)

  -- Run inference
  output := model.infer ("input_ids", input)

  -- Extract results
  latent_vector := output.to_array

  -- Cleanup
  model.unload
end
```

---

## In Scope

### Functional Requirements

- **FR-001:** Load .onnx model files from disk
- **FR-002:** Load .onnx models from memory buffers
- **FR-003:** Create inference sessions with execution provider selection (CPU, CUDA, TensorRT)
- **FR-004:** Create input tensors (float32, float16, int32, int64)
- **FR-005:** Execute inference synchronously
- **FR-006:** Extract output tensors with automatic data type conversion
- **FR-007:** Query model metadata (input/output names, shapes, types)
- **FR-008:** Support batch processing (variable input dimensions)
- **FR-009:** Unload models explicitly to free VRAM
- **FR-010:** Comprehensive error handling with error codes and messages
- **FR-011:** Session creation with optimization level control
- **FR-012:** Provider availability checking (CUDA presence detection)

### Non-Functional Requirements

- **NFR-001:** Memory efficient - models unload cleanly, no memory leaks
- **NFR-002:** SCOOP-compatible - separate contexts for concurrent use
- **NFR-003:** Void-safe - all detachables properly checked (void safety level="all")
- **NFR-004:** Performance - zero-copy where possible for large tensors
- **NFR-005:** Compatible with ONNX Runtime 1.15+ (proven version from simple_speech)
- **NFR-006:** Cross-platform readiness (C API portable to Windows, Linux, macOS)
- **NFR-007:** No external Python dependencies at runtime

### Design Decisions (In Scope)

- C API binding via inline Eiffel externals (not C++ wrapper)
- Single session per model (SCOOP handles concurrency)
- Copy-to-Eiffel-arrays for tensor data (safety > performance)
- .onnx format only (users convert offline)
- Fluent builder pattern for session configuration

---

## Out of Scope

### Explicitly Not Included (Phase 1 MVP)

- **Model Conversion:** Python tooling for converting PyTorch/TensorFlow to ONNX (users do offline)
- **Architecture-Specific Optimization:** TensorRT graph optimization (users can select provider)
- **Training:** ONNX Runtime training API (inference only)
- **Fine-Tuning:** Model adaptation utilities
- **Model Zoo:** Pre-packaged model downloading (users manage model files)
- **Quantization:** Automatic model quantization (users quantize offline)
- **C++ Bindings:** Direct C++ API wrapping (C API only)
- **Custom Operators:** User-defined ONNX operations
- **Format Conversion:** Supporting non-.onnx formats (.pb, .pth, .tflite)

### Future Phases (Phase 2+)

- Batch inference with async execution
- Model pooling for concurrent sessions
- VRAM usage tracking and warnings
- FP16 quantization support
- Mobile deployment (iOS, Android)
- WebAssembly support
- Custom memory allocators

---

## Constraints

### Technical Constraints

1. **C/C++ Runtime Only** - ONNX Runtime is written in C++, distribution as binary DLL/SO/dylib
2. **SCOOP Requirement** - Must design for concurrent Eiffel code (no global mutable state)
3. **Void Safety** - Eiffel void safety level must be "all" (C bindings are tricky)
4. **No Python** - Production inference is pure compiled code (Python for offline conversion only)
5. **Inline C Only** - Use Eiffel's external inline C feature, no separate .c files to compile
6. **Simple_* Priority** - Depend on simple_file, simple_process, etc., not ISE stdlib

### Business Constraints

1. **Binary Distribution** - onnxruntime.dll must be distributed with library
2. **License Compliance** - ONNX Runtime is Apache 2.0, simple_onnx must comply
3. **Platform Support** - Prioritize Windows initially, Linux/macOS secondary

### Resource Constraints

1. **Knowledge Dependency** - C API expertise required (reference: sherpa-onnx pattern)
2. **Testing Data** - Need real ONNX models for validation (Point-E, diffusion models)

---

## Assumptions to Validate

### ONNX Runtime Assumptions

1. **Assumption:** ONNX Runtime C API is stable and backward compatible
   - **Validation:** Check GitHub releases, backward compatibility policy
   - **Risk:** If false, need versioning strategy
   - **Mitigation:** Pin to ONNX Runtime 1.15+, test matrix for compatibility

2. **Assumption:** C API is sufficient for typical inference use cases
   - **Validation:** Review C API functions against Point-E model requirements
   - **Risk:** If false, may need C++ wrapper
   - **Mitigation:** Prototype with Point-E encoding phase before Phase 1 complete

3. **Assumption:** onnxruntime.dll is portable across Windows machines
   - **Validation:** Test on 2+ Windows machines, different CPU generations
   - **Risk:** If false, need platform-specific binaries
   - **Mitigation:** Document hardware requirements, provide troubleshooting guide

### Eiffel Ecosystem Assumptions

4. **Assumption:** SCOOP-based concurrency is sufficient for inference workloads
   - **Validation:** Design review against simple_speech concurrent usage patterns
   - **Risk:** If false, may need additional synchronization
   - **Mitigation:** Prototype with concurrent model loading

5. **Assumption:** Inline C externals can bind ONNX Runtime C API cleanly
   - **Validation:** Prototype tensor creation, inference call, output extraction
   - **Risk:** If false, may need SWIG or manual C wrapper
   - **Mitigation:** Build prototype in Phase 0 (before Phase 1 commitment)

### Use Case Assumptions

6. **Assumption:** Point-E and Shap-E can be converted to ONNX format
   - **Validation:** Search HuggingFace, OpenAI GitHub for ONNX exports
   - **Risk:** If false, affects simple_sculptor timeline
   - **Mitigation:** Prototype ONNX export from PyTorch Point-E before Phase 1

7. **Assumption:** Multiple models in memory simultaneously is important use case
   - **Validation:** Survey simple_sculptor and simple_ml requirements
   - **Risk:** If false, simplifies design (single model per session)
   - **Mitigation:** Document model swapping patterns in Phase 4 documentation

---

## Success Metrics

### Phase 1 (MVP - 4 weeks)

| Metric | Target | Evidence |
|--------|--------|----------|
| Model Loading | Load real .onnx models | Point-E encoder loads without error |
| Inference Execution | Execute inference | Output tensor matches PyTorch baseline |
| Error Handling | Graceful failures | Invalid model path produces meaningful error |
| Code Coverage | >80% line coverage | Test report from simple_testing framework |
| API Usability | Inference in <10 lines | simple_sculptor integration example |
| Documentation | API + examples | README, CHANGELOG, inline comments |

### Phase 2 (Enhanced - 2 weeks)

| Metric | Target | Evidence |
|--------|--------|----------|
| Batch Support | Variable dimension handling | Test with batch_size=1,2,4 |
| Metadata | Query model structure | List inputs/outputs with shapes |
| Memory | Explicit unload works | VRAM freed after model.unload |

### Overall Success

- simple_sculptor uses simple_onnx instead of direct ONNX Runtime binding
- simple_speech refactor uses simple_onnx (removes sherpa-onnx, adds sherpa_text_to_speech wrapper)
- New libraries (simple_ml, simple_vision) depend on simple_onnx for inference

---

## Dependencies

### External Dependencies (Not Our Build)

- **ONNX Runtime 1.15+** - Binary DLL/SO from Microsoft releases
- **simple_file** - File path operations (exists in /d/prod/simple_file)
- **simple_process** - Subprocess utilities if needed for model download (exists)

### Simple Ecosystem Dependencies

| Library | Purpose | Status |
|---------|---------|--------|
| simple_file | File operations for model loading | Existing |
| simple_process | Optional: model downloading | Existing |
| simple_testing | Test framework | Existing |
| simple_error | Error handling pattern | Existing |

### Internal Dependencies

- None initially (standalone library)

---

## Project Timeline

### Phase 0 (Pre-Implementation) - CURRENT
- **Duration:** 1 week (ending 2026-02-07)
- **Deliverables:** 7-step research (this document + 7 more)
- **Output:** Go/no-go decision

### Phase 1 (MVP)
- **Duration:** 4 weeks (2026-02-08 to 2026-03-07)
- **Deliverables:** Model loading, inference execution, error handling, basic tests
- **Output:** Working simple_onnx library

### Phase 2 (Enhancement)
- **Duration:** 2 weeks (2026-03-08 to 2026-03-21)
- **Deliverables:** Batch support, metadata queries, VRAM management
- **Output:** Production-ready library

### Phase 3 (Integration)
- **Duration:** 2 weeks (2026-03-22 to 2026-04-04)
- **Deliverables:** simple_sculptor integration, simple_speech refactor
- **Output:** Downstream libraries using simple_onnx

---

## Risk Summary (Detailed in 06-RISKS.md)

| Risk | Likelihood | Impact | Mitigation |
|------|------------|--------|-----------|
| ONNX Runtime binary incompatibility | LOW | HIGH | Test matrix, backward compatibility |
| Tensor shape mismatches | MEDIUM | MEDIUM | Preconditions, detailed validation |
| VRAM exhaustion with large models | MEDIUM | MEDIUM | Explicit unload, warnings |
| C API memory leaks | LOW | HIGH | Managed pointers, profiling |
| Cross-platform binary issues | HIGH | MEDIUM | Platform-specific binaries, docs |

---

## Recommendation

**Proceed with simple_onnx development.**

The library addresses a clear gap in the Eiffel ecosystem, follows proven patterns (sherpa-onnx C API binding), and enables multiple downstream projects (simple_sculptor, simple_ml, simple_vision). Low technical risk given ONNX Runtime maturity and existing reference implementation in simple_speech.

---

## Next Steps

1. **Immediate:** Validate assumptions in 07-RECOMMENDATION.md
2. **Week 1:** Complete 7-step research (this + 6 more documents)
3. **Week 2:** Run `/eiffel.spec` and `/eiffel.intent` to capture detailed design
4. **Week 3:** Create ECF configuration, prototype tensor binding
5. **Week 4:** Phase 1 implementation starts 2026-02-08

---

## Related Documents

- **02-LANDSCAPE.md** - Ecosystem analysis, competitor comparison
- **03-REQUIREMENTS.md** - Detailed functional/non-functional requirements
- **04-DECISIONS.md** - Architectural decision records
- **05-INNOVATIONS.md** - Novel aspects of design
- **06-RISKS.md** - Risk analysis and mitigation
- **07-RECOMMENDATION.md** - Executive recommendation
- **REFERENCES.md** - Research citations
