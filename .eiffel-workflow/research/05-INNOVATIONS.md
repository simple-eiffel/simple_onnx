# Design Innovations & Strategic Value

**Project:** simple_onnx
**Date:** 2026-01-31
**Document Type:** Strategic Design Brief

---

## Executive Summary

Simple_onnx is not merely a library wrapper. It represents a strategic shift in how Eiffel approaches ML/AI capability delivery. This document outlines four key innovations that distinguish simple_onnx from existing approaches and position it as a foundation for the Eiffel ML/AI ecosystem.

---

## I-001: Eiffel-First ONNX Wrapper

### Problem Addressed

**The Eiffel ML Gap:** The Eiffel ecosystem has no native ONNX Runtime wrapper. Developers building ML/AI features must either:
1. Bypass Eiffel (use Python subprocess)
2. Manually bind ONNX Runtime C API (duplicated work)
3. Use project-specific wrappers (sherpa-onnx for speech only)

**Impact:** Each new ML project invents the wheel, ecosystem fragmented.

### Solution: Foundational Eiffel-First Library

Simple_onnx is the first production-ready ONNX wrapper built specifically for Eiffel's design philosophy:

- **Design by Contract:** All features have preconditions (e.g., "tensor shape matches model input"), postconditions (e.g., "output is non-void")
- **Void Safety:** All detachable references checked (void safety="all")
- **SCOOP Compatible:** Designed for concurrent Eiffel code, not retrofitted
- **Simple API:** Complex internals, simple interface (inference in 5-7 lines)

### Example Contrast

**Before simple_onnx (Duplicated Work):**
```eiffel
-- simple_sculptor/src/sculptor_inference.e (duplicates ONNX binding)
external "C"
  create_session (path: STRING): POINTER alias "OrtCreateSession" end
  release_session (ptr: POINTER) alias "OrtReleaseSession" end
  create_tensor (ptr: POINTER; data: POINTER; size: INTEGER): POINTER alias "OrtCreateTensor" end
  -- 50+ more externals, repeated in simple_ml, simple_vision
end

-- simple_ml/src/ml_inference.e (same externals again)
external "C"
  create_session (path: STRING): POINTER alias "OrtCreateSession" end
  release_session (ptr: POINTER) alias "OrtReleaseSession" end
  -- Duplicated...
end
```

**After simple_onnx (Reusable Foundation):**
```eiffel
-- simple_onnx/src/onnx_runtime.e (centralized)
external "C"
  create_session (path: STRING): POINTER alias "OrtCreateSession" end
  release_session (ptr: POINTER) alias "OrtReleaseSession" end
  -- 50+ externals, once, reusable

-- simple_sculptor/src/sculptor_inference.e (reuses)
create onnx.make_with_cuda_backend
model := onnx.load_model ("point-e-base.onnx")

-- simple_ml/src/ml_inference.e (same, reuses)
create onnx.make_with_cpu_backend
model := onnx.load_model ("resnet50.onnx")
```

### Strategic Value

1. **Code Reuse:** Eliminate duplication across simple_sculptor, simple_ml, simple_vision
2. **Maintenance:** ONNX Runtime updates managed once (not thrice)
3. **Consistency:** Unified API across all ML/AI projects
4. **Expertise:** Centralized ONNX/C knowledge in one place
5. **Ecosystem Foundation:** Base layer for ecosystem growth

### Innovation Category

**Ecosystem Architecture:** Foundational library pattern

---

## I-002: SCOOP-Safe Concurrent Inference

### Problem Addressed

**ML Concurrency is Hard:** Most inference libraries are:
- **Thread-pool based** (not SCOOP)
- **Lock-based** (mutexes, atomics, not Eiffel idiom)
- **Shared mutable state** (sessions in global pools)

Eiffel's SCOOP (Simple Concurrent Object-Oriented Programming) is fundamentally different:
- **Agent-based** (tasks are objects)
- **Separation** (no shared mutable state)
- **Natural concurrency** (scheduler manages ordering)

**Impact:** Using traditional inference libraries in SCOOP is awkward (locking, race conditions, performance loss).

### Solution: SCOOP-First Design

Simple_onnx is designed from the ground up for SCOOP:

**Design Pattern: Separation Objects**
```eiffel
-- Each SCOOP processor has its own ONNX_RUNTIME and models
class APPLICATION
  feature
    process_images
      local
        agent1, agent2, agent3: separate INFERENCE_AGENT
        results: separate RESULTS_HOLDER
      do
        create agent1
        create agent2
        create agent3
        create results

        -- Launch concurrent agents (no shared mutable state)
        agent1.infer (image1, results)
        agent2.infer (image2, results)
        agent3.infer (image3, results)

        -- Wait for results (scheduler synchronizes)
        if results.is_complete then
          print (results.output)
        end
      end
end

class INFERENCE_AGENT
  feature
    infer (image: separate TENSOR; results: separate RESULTS_HOLDER)
      local
        runtime: ONNX_RUNTIME
        session: ONNX_SESSION
        output: ONNX_TENSOR
      do
        -- No locks, no synchronization
        create runtime.make_with_cuda_backend (0)
        session := runtime.load_model ("yolo.onnx")
        output := session.infer ("image", image, "detections")
        results.add_result (output)
      end
  end
```

**Why This Matters:**
- No mutex needed (SCOOP handles synchronization)
- No race conditions (separation guarantees)
- Natural scaling (unlimited agents)
- Zero contention (no shared state)

### Traditional Approach (Contrast)

```eiffel
-- With shared session + mutex (inefficient)
local
  shared_session: ONNX_SESSION
  mutex: MUTEX
  output: ONNX_TENSOR
do
  mutex.lock
  output := shared_session.infer (...)
  mutex.unlock
  -- Bottleneck: all agents serialize on mutex
end
```

### Strategic Value

1. **Natural Concurrency:** Matches Eiffel's SCOOP model
2. **Performance:** No lock overhead (scales linearly)
3. **Simplicity:** Users don't think about synchronization
4. **Robustness:** Impossible to have race conditions (SCOOP enforces)
5. **Future-Proof:** Scales to many-core systems naturally

### Innovation Category

**Concurrency Model:** Eiffel-idiomatic concurrent inference

---

## I-003: Reusable Foundation for Ecosystem Growth

### Problem Addressed

**Ecosystem Fragmentation:** Current state:
- **simple_speech** - Wraps sherpa-onnx (speech-specific)
- **simple_sculptor** - Will need ONNX (3D-specific, separate binding)
- **simple_ml** - Will need ONNX (ML-specific, separate binding)
- **simple_vision** - Will need ONNX (vision-specific, separate binding)

**Impact:** Each project solves ONNX inference independently → wasted effort, inconsistency

### Solution: Single Foundation Library

Simple_onnx as the shared base:

```
ONNX Runtime (Microsoft binary)
         ↓ (C API binding)
  SIMPLE_ONNX (foundational library)
         ↓ (Eiffel API)
   ┌─────┬──────┬─────────┬─────────┐
   ↓     ↓      ↓         ↓         ↓
SPEECH SCULPTOR  ML     VISION     ...
models models   models  models
```

**Downstream Usage:**

```eiffel
-- simple_sculptor/src/point_e_generator.e
class POINT_E_GENERATOR
  inherit
    POINT_E_CONSTANTS  -- Model paths, config
  feature
    generate (prompt: STRING): ARRAY [REAL]
      local
        runtime: ONNX_RUNTIME
        text_encoder: ONNX_SESSION
        diffusion: ONNX_SESSION
      do
        create runtime.make_with_cuda_backend (0)
        text_encoder := runtime.load_model (text_encoder_path)
        diffusion := runtime.load_model (diffusion_path)
        -- Point-E specific logic uses general ONNX_RUNTIME
      end
end

-- simple_ml/src/resnet_classifier.e
class RESNET_CLASSIFIER
  inherit
    RESNET_CONSTANTS
  feature
    classify (image: ONNX_TENSOR): ARRAY [REAL]
      local
        runtime: ONNX_RUNTIME
        model: ONNX_SESSION
      do
        create runtime.make_with_cpu_backend
        model := runtime.load_model (resnet_path)
        Result := model.infer ("image", image, "output").to_array
      end
end
```

### Ecosystem Growth Enabled

With simple_onnx as foundation:

| Library | Before | After |
|---------|--------|-------|
| simple_sculptor | Duplicates ONNX binding | Uses simple_onnx |
| simple_ml | Duplicates ONNX binding | Uses simple_onnx |
| simple_vision | Duplicates ONNX binding | Uses simple_onnx |
| simple_stats | Can't do inference | Uses simple_onnx + custom stats |
| simple_signal | Can't do neural processing | Uses simple_onnx + filtering |

### Strategic Value

1. **Foundation Pattern:** Model for future ecosystem libraries
2. **Multiplier Effect:** Each new library uses existing ONNX binding
3. **Rapid Growth:** New ML/AI libraries faster to implement
4. **Knowledge Leverage:** ONNX expertise shared, not fragmented
5. **Cohesion:** Ecosystem grows around common foundation

### Innovation Category

**Ecosystem Architecture:** Foundation layer enabling rapid growth

---

## I-004: Zero-Python Inference Pipeline

### Problem Addressed

**Python Dependency Burden:** Most inference pipelines require Python:
- Model conversion: Python (torch.onnx.export, etc.) → ONNX
- Preprocessing: Python (PIL, NumPy, etc.) → tensor
- Inference: Python (onnxruntime, PyTorch) → output
- Postprocessing: Python → results

**Result:** Deployment requires Python interpreter, dependency management, package bloat.

### Solution: Offline Conversion + Compiled Inference

Simple_onnx enables pure compiled inference:

```
DEVELOPMENT (One-Time)
  ↓
  Point-E (PyTorch)
    ↓ (Python script: torch.onnx.export)
    ONNX Model (point-e-base.onnx)
      ↓ (upload to repo)

PRODUCTION (Compiled Eiffel)
  ↓
  Eiffel App (simple_sculptor)
    ↓ (uses simple_onnx)
    Inference (inference in Eiffel)
      ↓ (no Python needed)
    Results
```

**Conversion (Once, Python):**
```python
# Once per model, developers do this offline
import torch
from openai import Point_E

model = Point_E.load_model("l1")
dummy_input = torch.randn(1, 77)

torch.onnx.export(model.encoder, dummy_input, "point-e-encoder.onnx")
torch.onnx.export(model.decoder, dummy_input2, "point-e-decoder.onnx")
# Upload .onnx files to repo
```

**Inference (Always, Eiffel):**
```eiffel
-- Production: No Python required
local
  generator: POINT_E_GENERATOR
  result: ARRAY [REAL]
do
  create generator
  result := generator.generate ("a sphere")
  -- result is 3D point cloud, ready for 3D rendering
end
```

**Advantages Over Alternatives:**

| Approach | Conversion | Inference | Deployment | Python Req? |
|----------|-----------|-----------|-----------|-----------|
| All Python | Python | Python | Python app | YES |
| PyTorch C++ | PyTorch | C++ | C++ app | NO |
| TensorFlow C++ | TensorFlow | C++ | C++ app | NO |
| **ONNX (simple_onnx)** | **Python** | **Eiffel** | **Eiffel app** | **NO** |

### Strategic Value

1. **Deployment Simplicity:** Single executable (no Python runtime)
2. **Dependency Reduction:** No Python package management
3. **Performance:** Compiled Eiffel code (no interpreter overhead)
4. **Maintainability:** Inference code is Eiffel (team expertise)
5. **Security:** Reduced attack surface (no Python interpreter)

### Real-World Benefit

**Shipping simple_sculptor:**
```bash
# Before simple_onnx: Complex deployment
simple_sculptor.exe + python.exe + onnxruntime + torch + numpy + PIL + ...
# Size: ~500MB

# After simple_onnx: Clean deployment
simple_sculptor.exe + onnxruntime.dll + point-e-models/
# Size: ~150MB (models + Eiffel code only)
```

### Innovation Category

**Deployment Model:** Offline conversion + compiled inference

---

## I-005: Design by Contract for Inference Reliability

### Problem Addressed

**Inference Failures are Silent:** Traditional inference code:
```python
# Python - No contracts
output = model.infer(input_tensor)
if output is None:  # Oops, forgot to check
    print("Failed")
```

Errors are often discovered at production runtime.

### Solution: Design by Contract (DBC) in Eiffel

Simple_onnx uses preconditions, postconditions, and invariants:

```eiffel
class ONNX_SESSION
  feature
    infer (input_name: STRING; input: ONNX_TENSOR; output_name: STRING): ONNX_TENSOR
      require
        -- Preconditions: Catch errors early
        is_loaded: handle /= default_pointer
          -- Error: Model not loaded
        input_not_void: input /= Void
          -- Error: Input tensor is void
        input_shape_valid: input.shape.count = expected_rank
          -- Error: Input has wrong rank (shape mismatch)
        input_dtype_valid: input.data_type = expected_dtype
          -- Error: Input data type mismatch
        output_name_valid: has_output (output_name)
          -- Error: Model has no such output
      do
        -- Inference implementation
        ...
      ensure
        result /= Void
          -- Postcondition: Output is never void
        result.shape.count = expected_output_rank
          -- Postcondition: Output has correct rank
        result.data_type = expected_output_dtype
          -- Postcondition: Output has correct data type
      end
end
```

**Benefits:**

1. **Fail Fast:** Errors caught before computation
2. **Self-Documenting:** Preconditions document assumptions
3. **Testing:** Contracts enable automated verification
4. **Debugging:** Exact violation point reported
5. **Maintainability:** Contract changes signal API evolution

### Strategic Value

1. **Robustness:** Inference failures impossible (contracts prevent)
2. **Correctness:** Mathematical guarantees on outputs
3. **Learning:** DBC patterns model for simple_* ecosystem
4. **Eiffel Showcase:** Demonstrates Eiffel's killer feature (DBC)
5. **Quality:** Production-grade inference library

### Innovation Category

**Quality Assurance:** Contract-based reliability

---

## Summary Table: Innovations

| Innovation | Problem | Solution | Strategic Value |
|-----------|---------|----------|-----------------|
| **I-001** | Eiffel has no ONNX wrapper | Build foundational library | Code reuse, ecosystem consistency |
| **I-002** | SCOOP + inference is awkward | SCOOP-first design | Natural concurrency, zero locks |
| **I-003** | Each project invents separately | Single foundation library | Rapid ecosystem growth, less duplication |
| **I-004** | Python required for inference | Offline conversion + compiled inference | Simpler deployment, no Python runtime |
| **I-005** | Inference failures often silent | Design by Contract | Fail-fast, self-documenting, robust |

---

## Competitive Positioning

### ONNX Runtime Wrappers (Other Languages)

| Language | Wrapper | Innovation | Eiffel Gap |
|----------|---------|-----------|-----------|
| Python | onnxruntime (native) | Direct C API binding | No gap (native support) |
| C++ | onnxruntime C++ API | Direct C++ binding | No gap (native support) |
| Rust | ort crate | Community bindings | Gap → simple_onnx fills |
| Java | ONNX Runtime Java | Official bindings | Gap → could fill with JNI |
| **Eiffel** | **None** | **Gap** | **← simple_onnx fills** |
| Go | onnx-go | Community bindings | Gap → could fill with cgo |

**simple_onnx differentiator:** First Eiffel-specific ONNX wrapper, designed for Eiffel's unique features (SCOOP, DBC).

---

## Business Impact

### Current State

- Eiffel ecosystem: 59+ simple_* libraries, no ML/AI support
- Developers wanting ML/AI: Must use Python (abandon Eiffel)
- Eiffel positioning: General-purpose, not ML-capable

### After simple_onnx

- Eiffel ecosystem: 60+libraries + ML/AI foundation
- Developers wanting ML/AI: Can build in Eiffel (simple_sculptor, etc.)
- Eiffel positioning: General-purpose + ML-capable (ONNX-powered)

### Long-Term Ecosystem Vision

```
Phase 1 (Now): simple_onnx foundation
Phase 2 (6 months): simple_sculptor, simple_ml, simple_vision built on simple_onnx
Phase 3 (12 months): Eiffel ML/AI ecosystem visible to broader community
Phase 4 (18 months): Eiffel attractive for AI development (competes with Python)
```

---

## Risk Mitigation Through Innovation

| Risk | Innovation Mitigates |
|------|----------------------|
| VRAM exhaustion (large models) | I-003: Foundation enables explicit unload, VRAM tracking |
| Concurrent inference race conditions | I-002: SCOOP design prevents races |
| Silent inference failures | I-005: DBC catches errors early |
| Ecosystem fragmentation | I-003: Reusable foundation unifies approach |
| Python deployment complexity | I-004: Zero-Python inference |
| Code duplication across projects | I-001: Eiffel-first library eliminates duplication |

---

## Conclusion

Simple_onnx is not just a technical wrapper. It represents a strategic shift toward making Eiffel a viable choice for ML/AI development. The five innovations combined (foundation, concurrency, ecosystem, deployment, quality) position simple_onnx as the cornerstone of Eiffel's ML/AI ambitions.

The library enables downstream projects (simple_sculptor, simple_ml, simple_vision) to deliver ML/AI capabilities in Eiffel without reinventing inference infrastructure. This multiplier effect accelerates ecosystem growth and positions Eiffel competitively in the AI-driven software landscape.

---

## Related Documents

- **01-SCOPE.md** - Project scope
- **03-REQUIREMENTS.md** - Functional requirements enabled by innovations
- **04-DECISIONS.md** - Design decisions supporting innovations
- **06-RISKS.md** - Risks and mitigations
