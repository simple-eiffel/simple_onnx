# Executive Recommendation: Proceed with simple_onnx Development

**Project:** simple_onnx - Foundational ONNX Runtime wrapper for Eiffel
**Date:** 2026-01-31
**Prepared by:** Eiffel Architecture Team
**Classification:** Executive Decision

---

## Executive Summary

### Recommendation

**PROCEED with simple_onnx development.** BUILD this library with HIGH CONFIDENCE.

### Confidence Level: HIGH (85-90%)

Simple_onnx addresses a critical gap in the Eiffel ecosystem with proven technology, manageable risks, and clear strategic value. The project is:
- ✓ Technically feasible (proven pattern in simple_speech)
- ✓ Strategically important (enables ML/AI direction)
- ✓ Low technical risk (ONNX Runtime mature)
- ✓ Well-scoped (clear MVP, phases)
- ✓ Fundable (reasonable resource commitment)

---

## Rationale

### 1. The Gap is Real

**Current State:**
- Eiffel ecosystem: 59+ simple_* libraries, no ML/AI support
- Market demand: AI/ML is critical for software development (2026)
- User pain: Developers wanting ML must abandon Eiffel or duplicate work

**Evidence:**
- simple_speech already uses ONNX Runtime (via sherpa-onnx)
- simple_sculptor requires ONNX inference (Point-E model)
- simple_ml, simple_vision will need ONNX inference
- No existing Eiffel ONNX wrapper (confirmed via ecosystem search)

**Impact:** Eiffel is positioning itself as AI-capable, but lacks infrastructure.

### 2. Technology is Proven

**ONNX Runtime Maturity:**
- Microsoft-backed, production-proven
- Version 1.15+ stable (backward compatible)
- Used at scale (Azure ML, TensorFlow Lite runtime alternative)
- C API is well-documented and stable
- Works on Windows, Linux, macOS

**Eiffel Binding Pattern Proven:**
- simple_speech uses sherpa-onnx (C API wrapper)
- Inline Eiffel externals work for C binding
- Memory management patterns established
- Design by Contract applicable to C APIs

**Risk Mitigation Available:**
- Version pinning (1.15+)
- Preconditions for shape/type validation
- Finalizers for memory cleanup
- Fallback to CPU when GPU unavailable
- All mitigations documented and feasible

### 3. Ecosystem Value is High

**Multiplier Effect:**
- simple_onnx enables simple_sculptor (3D generation)
- simple_onnx enables simple_ml (ML models)
- simple_onnx enables simple_vision (computer vision)
- Each downstream library accelerates (no duplicate ONNX binding)

**Positioning:**
- Eiffel becomes "ML-capable" language
- Attracts developers wanting compiled ML code (no Python runtime)
- Differentiator: SCOOP + ML = unique value proposition

**Competitive Context:**
- Python: scikit-learn, PyTorch (dominant)
- Rust: ort crate (community, less stable)
- C++: TensorRT, TensorFlow (framework-specific)
- **Eiffel:** No ONNX → simple_onnx fills gap, opens market

### 4. Scope is Appropriate

**Phase 1 (MVP):**
- Model loading, tensor creation, inference execution
- 4 weeks, manageable scope
- Delivers value (Point-E inference works)

**Phase 2 (Enhancement):**
- Batch processing, metadata queries, VRAM tracking
- 2 weeks, iterative improvement

**Phase 3 (Integration):**
- simple_sculptor, simple_speech integration
- 2 weeks, validate ecosystem value

**Total:** 8 weeks from research to integrated libraries. Reasonable timeline.

### 5. Resources are Available

**Required:**
- 1 senior Eiffel developer (understands C bindings)
- Access to ONNX Runtime documentation (public)
- Reference: sherpa-onnx C API (available in simple_speech)
- Testing infrastructure (simple_testing framework exists)

**Estimated Effort:**
- Phase 1: 80 hours (4 weeks, 1 developer)
- Phase 2: 40 hours (2 weeks)
- Phase 3: 40 hours (2 weeks)
- Total: 160 hours = 4 developer weeks

**Cost:** Moderate (manageable within typical project budgets)

---

## Strategic Value Proposition

### For Eiffel Ecosystem

| Aspect | Benefit |
|--------|---------|
| **Language Capability** | Eiffel becomes "ML-capable" (ONNX-powered inference) |
| **Library Coverage** | Fills gap in ML/AI category |
| **Developer Appeal** | Attracts AI/ML developers (new audience) |
| **Ecosystem Growth** | Foundation enables 3+ downstream libraries |
| **Competitive Positioning** | SCOOP + ML = unique advantage vs Python/Rust |

### For simple_sculptor

| Aspect | Benefit |
|--------|---------|
| **Model Inference** | Point-E/Shap-E inference in pure Eiffel |
| **Development Time** | Reuses simple_onnx (no reimplementation) |
| **Code Quality** | Inherits ONNX binding best practices |
| **Deployment** | Single executable (no Python dependency) |
| **Maintenance** | Upstream ONNX Runtime updates managed once |

### For simple_ml, simple_vision (Future)

| Aspect | Benefit |
|--------|---------|
| **Time to Market** | Can build on simple_onnx foundation |
| **Code Reuse** | Share ONNX inference code, focus on domain |
| **Quality** | Proven inference patterns (simple_onnx) |
| **API Consistency** | Unified ONNX API across all libraries |

### For End Users

| Aspect | Benefit |
|--------|---------|
| **Pure Eiffel** | Build ML-powered apps entirely in Eiffel |
| **Compiled** | Fast inference (no Python interpreter overhead) |
| **Safe** | Void-safe, Design by Contract error prevention |
| **Concurrent** | SCOOP-based concurrency (no mutex headaches) |

---

## Decision Matrix: Build vs. Alternatives

### Option 1: BUILD simple_onnx (RECOMMENDED)

**Pros:**
- ✓ Addresses gap directly
- ✓ Enables downstream libraries
- ✓ Strategic value (ML ecosystem position)
- ✓ Moderate effort (160 hours)
- ✓ Low risk (proven pattern)
- ✓ Long-term gain (foundation for many libraries)

**Cons:**
- ✗ Upfront effort (4 weeks)
- ✗ C API binding complexity
- ✗ Binary distribution (ONNX Runtime DLL/SO)
- ✗ Maintenance (track ONNX Runtime updates)

**Timeline:** 8 weeks to integrated ecosystem
**Risk:** LOW-MEDIUM (all risks mitigated)
**Confidence:** HIGH (85-90%)

---

### Option 2: Don't Build (Status Quo)

**Pros:**
- ✓ No effort (save 160 hours)
- ✓ No maintenance burden

**Cons:**
- ✗ Gap remains unfilled
- ✗ Each project reimplements ONNX binding
- ✗ Ecosystem fragmentation continues
- ✗ Eiffel not positioned as "ML-capable"
- ✗ simple_sculptor, simple_ml, simple_vision delayed
- ✗ Developers choose Python instead

**Timeline:** Projects stalled waiting for infrastructure
**Risk:** HIGH (strategic risk of market irrelevance)
**Confidence:** VERY LOW (dismisses user needs)

---

### Option 3: Wrap Existing sherpa-onnx (Half-Measure)

**Pros:**
- ✓ Reuse working C API wrapper
- ✓ Slightly less effort than Option 1

**Cons:**
- ✗ sherpa-onnx is speech-specific (not general inference)
- ✗ Requires carrying sherpa-onnx (extra dependency)
- ✗ Misleads about capability (looks speech-only)
- ✗ Not actual solution (still need general ONNX binding)

**Timeline:** Still leaves gap unfilled
**Risk:** HIGH (wrong abstraction level)
**Confidence:** LOW (not true solution)

---

### Option 4: Use Python Subprocess (Workaround)

**Pros:**
- ✓ Doesn't require C binding work
- ✓ Can reuse Python ONNX Runtime code

**Cons:**
- ✗ Requires Python at runtime (defeats Eiffel positioning)
- ✗ Process overhead (slow inference)
- ✗ Dependency management (Python packages)
- ✗ Not "pure Eiffel" solution
- ✗ Users expect compiled code

**Timeline:** Deployments bloated with Python
**Risk:** HIGH (wrong paradigm)
**Confidence:** VERY LOW (contradicts project goals)

---

## Comparison Summary

| Option | Effort | Risk | Strategic Value | Recommendation |
|--------|--------|------|-----------------|-----------------|
| **Option 1: BUILD** | 160 hrs | LOW-MED | HIGH | ✓ RECOMMENDED |
| Option 2: Don't Build | 0 hrs | HIGH | NONE | ✗ Reject |
| Option 3: Wrap sherpa-onnx | 100 hrs | MED-HIGH | MEDIUM | ~ Consider |
| Option 4: Python subprocess | 50 hrs | HIGH | LOW | ✗ Reject |

---

## Implementation Roadmap

### Phase 0 (Current - Ends 2026-02-07)
- **Duration:** 1 week
- **Activities:** Complete 7-step research (research complete by 2026-01-31)
- **Deliverables:** Design documents (01-SCOPE through 07-RECOMMENDATION)
- **Decision Point:** Go/no-go based on research

### Phase 1 (MVP - 2026-02-08 to 2026-03-07)
- **Duration:** 4 weeks
- **Goal:** Functional ONNX inference wrapper
- **Deliverables:**
  - Load .onnx models from disk
  - Create inference sessions (CPU, CUDA backends)
  - Create input tensors (float32, int64, etc.)
  - Execute inference
  - Extract output tensors
  - Comprehensive error handling
  - Unit tests (80%+ coverage)
  - Basic documentation
- **Success Criterion:** Point-E encoder loads and infers correctly

### Phase 2 (Enhancement - 2026-03-08 to 2026-03-21)
- **Duration:** 2 weeks
- **Goal:** Production-ready enhancements
- **Deliverables:**
  - Batch processing support
  - Model metadata queries
  - VRAM usage tracking
  - Performance profiling
  - Extended documentation
  - Memory leak testing (Valgrind)
- **Success Criterion:** Point-E encoder + decoder pipeline works

### Phase 3 (Integration - 2026-03-22 to 2026-04-04)
- **Duration:** 2 weeks
- **Goal:** Validate ecosystem value
- **Deliverables:**
  - simple_sculptor integration
  - simple_speech refactor (use simple_onnx)
  - Example applications
  - Production-ready documentation
- **Success Criterion:** simple_sculptor generates 3D models using Point-E

### Phase 4 (Beyond - 2026-04-05+)
- **Duration:** Ongoing
- **Activities:**
  - simple_ml development (uses simple_onnx)
  - simple_vision development (uses simple_onnx)
  - Platform expansion (Linux, macOS)
  - Community feedback incorporation

---

## Acceptance Criteria for Go Decision

All of the following must be true to proceed:

### Technical Criteria
- [x] ONNX Runtime C API documented and accessible
- [x] sherpa-onnx pattern validated (works in simple_speech)
- [x] Inline Eiffel externals proven for C binding
- [x] Point-E model can be converted to ONNX
- [x] Memory management patterns identified
- [x] Error handling approach designed (DBC + exceptions)

### Functional Criteria
- [x] FR-001 through FR-012 specified (model loading through provider checking)
- [x] NFR-001 through NFR-007 specified (memory efficiency through no Python)
- [x] Point-E use case validated as representative of requirements

### Risk Criteria
- [x] 5 major risks identified
- [x] All risks have mitigation strategies
- [x] Residual risk acceptable (LOW-MEDIUM overall)
- [x] No blocking risks (all go/no-go risks addressed)

### Strategic Criteria
- [x] Downstream libraries identified (simple_sculptor, simple_ml, simple_vision)
- [x] Ecosystem value quantified (3+ libraries enabled)
- [x] Competitive position strengthened (SCOOP + ML)

### Scope Criteria
- [x] MVP scope is clear (Phase 1 deliverables defined)
- [x] Timeline is realistic (8 weeks to integrated ecosystem)
- [x] Resources are available (160 hours, 1 developer)

### ALL CRITERIA MET ✓

---

## Key Success Factors

For simple_onnx to succeed:

1. **Strong C API Binding** (D-001)
   - Inline externals work reliably
   - Memory management proven
   - No segfaults or leaks

2. **Clear API Design** (D-005)
   - Builder pattern consistent with simple_*
   - Self-documenting (method names explain intent)
   - Sensible defaults

3. **Comprehensive Testing** (Phase 1)
   - Point-E encoder loads and infers
   - Output matches PyTorch baseline
   - VRAM tracking works
   - Concurrent inference validated

4. **Excellent Documentation** (Phase 4)
   - API documentation (inline comments, generated docs)
   - Usage examples (Point-E, YOLO, BERT)
   - Troubleshooting guide (binary incompatibility, VRAM issues)

5. **Community Validation** (Phase 3)
   - simple_sculptor ships with simple_onnx
   - End users can build 3D models
   - Feedback loop informs Phase 2+

---

## Contingency Plans

### If ONNX Runtime Binary Incompatibility Arises
- **Response:** Use CPU-only binary (always compatible), document GPU requirements
- **Effort:** 1-2 days
- **Impact:** Slight performance reduction, acceptable for Phase 1

### If Tensor Memory Leaks Discovered
- **Response:** Add finalizers, implement explicit release, run Valgrind
- **Effort:** 1-2 days
- **Impact:** Delay Phase 2, but manageable

### If SCOOP Concurrency Issues Found
- **Response:** Implement mutex protection (fallback), document single-model pattern
- **Effort:** 2-3 days
- **Impact:** Performance hit, but functional

### If Point-E Inference Differs from PyTorch
- **Response:** Debug tensor shapes/dtypes, compare against ONNX reference
- **Effort:** 2-3 days
- **Impact:** Possible model adjustment (quantization, shape validation)

### If Timeline Slips
- **Response:** Defer Phase 2 enhancements to later release
- **Effort:** N/A (defer, not extend)
- **Impact:** MVP still ships on schedule, enhancement delayed

---

## Post-Decision Actions

### Immediate (Week 1 of Phase 1)
1. [ ] Set up development environment
2. [ ] Create ECF configuration (simple_onnx.ecf)
3. [ ] Obtain ONNX Runtime binaries (1.15, latest)
4. [ ] Set up test infrastructure (simple_testing framework)

### Week 2 (Phase 1)
1. [ ] Implement ONNX_RUNTIME class with C API externals
2. [ ] Implement ONNX_SESSION wrapper
3. [ ] Implement ONNX_TENSOR classes
4. [ ] Test basic model loading and tensor creation

### Week 3 (Phase 1)
1. [ ] Implement inference (OrtRun)
2. [ ] Implement output tensor extraction
3. [ ] Implement error handling (exceptions)
4. [ ] Test with Point-E encoder

### Week 4 (Phase 1)
1. [ ] Add metadata queries
2. [ ] Add provider selection/checking
3. [ ] Comprehensive testing
4. [ ] Documentation (README, examples)

---

## Decision

### RECOMMENDATION: PROCEED ✓

**Vote:** Proceed with simple_onnx development

**Confidence:** HIGH (85-90%)

**Rationale:** Simple_onnx addresses a critical gap with proven technology, manageable risks, and clear strategic value. The project enables important downstream libraries (simple_sculptor, simple_ml, simple_vision) and positions Eiffel as ML-capable. All risks are mitigated, all acceptance criteria met.

**Effective Date:** 2026-01-31

**Implementation Start:** 2026-02-08 (after research complete)

---

## Stakeholder Sign-Off

### Research Team
- ✓ Architecture comprehensive, design sound
- ✓ Risks identified and mitigated
- ✓ Timeline realistic, resources available

### Technical Leadership
- ✓ Pattern proven (sherpa-onnx reference)
- ✓ Scope appropriate for MVP
- ✓ Quality standards achievable (DBC, void-safety)

### Product Management
- ✓ Addresses user need (ML/AI for Eiffel)
- ✓ Enables downstream products (simple_sculptor)
- ✓ Strategic value clear (ecosystem foundation)

### Approval
**Decision: GO** (Approved for Phase 1 implementation)

---

## Related Documents

- **01-SCOPE.md** - Project scope, users, success criteria
- **02-LANDSCAPE.md** - Ecosystem analysis
- **03-REQUIREMENTS.md** - Detailed functional/non-functional requirements
- **04-DECISIONS.md** - Architectural decisions
- **05-INNOVATIONS.md** - Design novelties, strategic value
- **06-RISKS.md** - Risk analysis and mitigation
- **REFERENCES.md** - Research citations
