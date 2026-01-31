# Phase 0 Intent Review Prompt

**Context:** simple_onnx is a foundational ONNX Runtime wrapper library for Eiffel. This document has completed research (7-step analysis) and specification (8-step design). The intent document captures WHAT and WHY we're building it.

**Task:** Review the intent document and provide expert feedback on architecture, design decisions, and readiness for Phase 1 implementation.

---

## Intent Document Summary

**What:** Eiffel wrapper for ONNX Runtime C API enabling machine learning model inference (Point-E, Shap-E, embeddings, vision models)

**Why:**
1. Critical gap: Eiffel ecosystem (59+ simple_* libraries) lacks ML/AI inference capability
2. Duplication prevention: Avoid reimplementing ONNX C API binding in multiple projects
3. Foundation for downstream: simple_sculptor, simple_ml, simple_vision can depend on simple_onnx
4. Market positioning: Makes Eiffel "ML-capable" language

**Users:** Eiffel ML developers, simple_* library maintainers, research/academic projects

**Core Components (10 classes):**
- SIMPLE_ONNX (facade)
- ONNX_SESSION (inference engine)
- ONNX_TENSOR (typed data holder)
- ONNX_RESULT (success/error outcome)
- ONNX_MODEL (metadata)
- ONNX_SHAPE (dimensions)
- ONNX_DATA_TYPE (type enumeration)
- ONNX_ENVIRONMENT (runtime initialization)
- ONNX_NODE_ARG (input/output descriptor)
- ONNX_PROVIDER (provider enumeration)

**Design Principles:**
- Design by Contract (preconditions, postconditions, invariants)
- Void safety (level="all")
- SCOOP compatibility (separate contexts, no shared state)
- Facade pattern (simple API, hides complexity)
- Immutable value objects (ONNX_TENSOR, ONNX_RESULT, ONNX_SHAPE)
- Inline C externals (no separate .c files)
- simple_* first policy (use simple_file, simple_testing, etc.)

**Phase 1 Timeline:** 4 weeks (model loading, inference execution, error handling, basic tests)

**Success Criteria:**
- Load Point-E model, execute inference, extract output
- 80%+ code coverage, all contracts verified
- Zero compiler warnings
- SCOOP-safe, void-safe, DBC enforced
- Cross-platform readiness (Windows, Linux, macOS)

---

## Review Questions

Please address the following in your review:

### 1. ARCHITECTURE ASSESSMENT

**1.1 Class Design**
- [ ] Are the 10 core classes appropriate for Phase 1?
- [ ] Does SIMPLE_ONNX facade hide enough complexity?
- [ ] Is the separation of concerns (Session vs. Tensor vs. Result) correct?
- [ ] Should any classes be merged or split?
- [ ] Are there missing classes (e.g., batch manager, memory allocator)?

**1.2 Inheritance & Composition**
- [ ] Flat inheritance (no abstract base classes) appropriate for this problem?
- [ ] Are composition relationships correct (ONNX_SESSION contains ONNX_MODEL)?
- [ ] Any circular dependencies?
- [ ] Should ONNX_SESSION_CONFIG be included in Phase 1?

**1.3 OOSC2 Compliance**
- [ ] Does the design follow Single Responsibility Principle?
- [ ] Is it open for extension (Phase 2 additions) without modification?
- [ ] Any Liskov Substitution concerns?
- [ ] Are interfaces segregated (no fat interfaces)?

### 2. DESIGN DECISIONS

**2.1 Immutability & Value Objects**
- [ ] Is making ONNX_TENSOR immutable correct for the use case?
- [ ] Does copy-to-Eiffel-array semantics match the intended usage?
- [ ] Should ONNX_RESULT be immutable (yes/no and why)?

**2.2 Void Safety (Level="all")**
- [ ] Will the approach of checking all detachables compile cleanly?
- [ ] Are there patterns (Optional, Result types) better suited than Void?
- [ ] Will DBC preconditions catch Void errors early enough?

**2.3 SCOOP Compatibility**
- [ ] Is "separate contexts per session, no shared state" sufficient for concurrency?
- [ ] Will ONNX Runtime C API work correctly with SCOOP separate objects?
- [ ] Any locking or synchronization needed beyond SCOOP semantics?

**2.4 Inline C vs. Separate C Files**
- [ ] Is avoiding .c files and using only inline C externals realistic?
- [ ] Will complex C bindings (tensor creation, memory management) fit in inline C?
- [ ] Risk of inline C becoming unreadable or unmaintainable?

**2.5 Builder Pattern (ONNX_SESSION_CONFIG)**
- [ ] Is the fluent builder pattern right for session configuration?
- [ ] Phase 1 scope: Should config builder be deferred to Phase 2?
- [ ] What options should be configurable (provider, optimization level, threads)?

### 3. DEPENDENCIES & SCOPE

**3.1 simple_* First Policy**
- [ ] Is the dependency list correct (simple_file, simple_testing, base, time)?
- [ ] Are there any ISE/Gobo alternatives that should be replaced with simple_*?
- [ ] Should simple_process be included for Phase 1 (model downloading)?

**3.2 Out of Scope**
- [ ] Is deferring quantization, dynamic shapes, multi-GPU to Phase 2 appropriate?
- [ ] Should any out-of-scope items be Phase 1 to avoid later rework?
- [ ] Model zoo (pre-packaged model downloading) Phase 2 or Phase 3?

**3.3 External Dependencies**
- [ ] Is ONNX Runtime 1.15+ the right version to target?
- [ ] Should we support older versions?
- [ ] Binary distribution strategy clear (ship onnxruntime.dll with library)?

### 4. ERROR HANDLING & CONTRACTS

**4.1 Design by Contract**
- [ ] Are precondition/postcondition examples appropriate?
- [ ] Will DBC catch common errors (shape mismatches, dtype conflicts)?
- [ ] Is the error code scheme (0=success, 1-6=error categories) complete?

**4.2 User-Facing Errors**
- [ ] Will users understand error messages or get raw C API codes?
- [ ] Should error messages include hints (e.g., "Expected shape [1, 77], got [2, 77]")?
- [ ] Exception handling strategy clear (precondition violation vs. runtime error)?

### 5. TESTING & VALIDATION

**5.1 Unit Test Strategy**
- [ ] Is 80% code coverage a realistic Phase 1 target?
- [ ] What are the critical test scenarios (success path, error paths, edge cases)?
- [ ] Should tests include real ONNX models (Point-E, BERT, YOLO)?

**5.2 Performance Baselines**
- [ ] Is <100ms inference on RTX 5070 Ti a reasonable baseline?
- [ ] Should Phase 1 include performance profiling or just functional tests?
- [ ] Any expected performance cliffs (large models, batch processing)?

### 6. PHASE 1 TIMELINE REALISM

**6.1 4-Week Schedule**
- [ ] Week 1 (Setup): Is 1 week realistic for ECF, binaries, headers?
- [ ] Weeks 2-3 (Core Classes): Can 10 classes + tests be done in 2 weeks?
- [ ] Week 4 (Integration): Is Point-E integration + docs realistic in 1 week?
- [ ] Any critical path items that could slip?

**6.2 Risks**
- [ ] Which risks are most likely to impact Phase 1 timeline?
- [ ] Should we allocate buffer time for C API binding issues?
- [ ] Contingency plans if ONNX Runtime integration fails?

### 7. DOWNSTREAM DEPENDENCIES

**7.1 simple_sculptor, simple_ml, simple_vision**
- [ ] Will the API be usable by these libraries without rework?
- [ ] Any features (batch processing, metadata queries) needed before downstream adoption?
- [ ] Should Phase 1 include downstream integration testing?

**7.2 simple_speech Refactor**
- [ ] Is refactoring simple_speech to use simple_onnx a Phase 2 task?
- [ ] Will removing sherpa-onnx direct dependency require API changes?
- [ ] Risk of breaking simple_speech during refactor?

### 8. DOCUMENTATION & EXAMPLES

**8.1 README & API Docs**
- [ ] Should Phase 1 include architecture diagram?
- [ ] Point-E example sufficient or need additional examples (BERT, YOLO)?
- [ ] Should README include troubleshooting guide for binary compatibility?

**8.2 Inline Comments & Contracts**
- [ ] Will contracts serve as sufficient documentation?
- [ ] Should each class have a "Context" comment explaining its role?
- [ ] Example code in contracts or separate examples/ directory?

### 9. MML DECISION

**9.1 Model Meta Language**
- [ ] Does the analysis correctly conclude simple_onnx needs no MML?
- [ ] Is there any internal collection (HASH_TABLE of sessions, ARRAYED_LIST of models)?
- [ ] Should future Phase 2 extensions consider MML early?

### 10. OVERALL READINESS

**10.1 Go/No-Go Decision**
- [ ] Is the intent document sufficient to start Phase 1 implementation?
- [ ] Any critical gaps that must be addressed before coding?
- [ ] Any assumptions that need validation (ONNX Runtime C API stability, binary compatibility)?

**10.2 Confidence Level**
- [ ] How confident are you (0-100%) that this design will succeed?
- [ ] What's the single biggest risk to Phase 1 delivery?
- [ ] What's one change that would significantly improve the design?

---

## Feedback Format

Please provide feedback in this structure:

```markdown
## 1. ARCHITECTURE ASSESSMENT

### 1.1 Class Design
✓ **PASS** / ✗ **FLAG** / ? **CONCERN**

[Your analysis]

### 1.2 Inheritance & Composition
✓ **PASS** / ✗ **FLAG** / ? **CONCERN**

[Your analysis]

[Continue for all sections...]

## 2. DESIGN DECISIONS

[Similar structure...]

## 3. CRITICAL ISSUES (If Any)

[List blocking issues]

## 4. RECOMMENDATIONS FOR IMPROVEMENT

[List non-blocking suggestions]

## 5. OVERALL ASSESSMENT

**Confidence Level:** X/100%

**Go/No-Go:** PROCEED / CAUTION / HOLD

**Summary:** [1-2 sentence assessment]
```

---

## Additional Context

### Research Documents Available
- `/d/prod/simple_onnx/.eiffel-workflow/research/01-SCOPE.md` - Scope, problem, success metrics
- `/d/prod/simple_onnx/.eiffel-workflow/research/02-LANDSCAPE.md` - Ecosystem analysis
- `/d/prod/simple_onnx/.eiffel-workflow/research/03-REQUIREMENTS.md` - Requirements detail
- `/d/prod/simple_onnx/.eiffel-workflow/research/04-DECISIONS.md` - Architectural decisions
- `/d/prod/simple_onnx/.eiffel-workflow/research/05-INNOVATIONS.md` - Novel aspects
- `/d/prod/simple_onnx/.eiffel-workflow/research/06-RISKS.md` - Risk analysis
- `/d/prod/simple_onnx/.eiffel-workflow/research/07-RECOMMENDATION.md` - Recommendation

### Specification Documents Available
- `/d/prod/simple_onnx/.eiffel-workflow/spec/04-CLASS-DESIGN.md` - OOSC2 architecture
- `/d/prod/simple_onnx/.eiffel-workflow/spec/07-SPECIFICATION.md` - Formal class specifications

### Questions?
If you need clarification on any aspect of the intent or research/spec documents, ask inline in your review. The review document will be placed at `/d/prod/simple_onnx/.eiffel-workflow/evidence/phase0-ai-review.md` for project record-keeping.

---

**End of Review Prompt**
