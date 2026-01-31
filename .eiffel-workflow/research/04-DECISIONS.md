# Architectural Decision Records

**Project:** simple_onnx
**Date:** 2026-01-31
**Status:** Accepted (pre-phase research)

---

## Format Note

Each decision record follows this structure:
- **Question:** The design choice we faced
- **Options:** Alternatives considered
- **Decision:** What we chose and why
- **Implications:** Tradeoffs and downstream effects
- **Validation:** How we'll verify this was right

---

## D-001: ONNX Runtime C API vs C++ Bindings

### Question
Should simple_onnx use the C API or C++ bindings for ONNX Runtime?

### Options

**Option 1: C API with Inline Eiffel Externals** (CHOSEN)
- Use C API functions directly
- Bind in Eiffel via inline externals
- Manual C memory management (OrtReleaseTensor, OrtReleaseSession)
- No separate C++ compilation

Pros:
- Simple externals (C is straightforward)
- Proven pattern (sherpa-onnx uses this)
- Self-contained library (pure Eiffel)
- Smaller binary (no C++ runtime)

Cons:
- Manual memory management (error-prone if not careful)
- Need to understand C API quirks
- More verbose (more external declarations)

**Option 2: C++ Wrapper Library**
- Create separate C++ wrapper around ONNX Runtime
- Build as DLL/SO
- Eiffel binds to C++ wrapper

Pros:
- C++ hides complexity (RAII, constructors/destructors)
- Higher-level API (easier bindings)

Cons:
- Extra compilation step (need C++ compiler)
- Extra binary distribution (two DLLs instead of one)
- Complexity: maintaining C++ wrapper
- Slower startup (C++ runtime initialization)

**Option 3: SWIG Bindings**
- Use SWIG to auto-generate Eiffel bindings from ONNX Runtime C++ API
- Auto-generated Eiffel code

Pros:
- Less manual work (SWIG handles boilerplate)
- Better C++ feature support

Cons:
- SWIG rarely used for Eiffel (unmaintained bindings)
- Generated code quality unpredictable
- Large dependency (SWIG binary)

### Decision

**CHOSEN: Option 1 - C API with Inline Eiffel Externals**

### Rationale

1. **Proven Pattern:** sherpa-onnx works in simple_speech using exactly this approach
2. **Simplicity:** No extra compilation, no extra binaries
3. **Eiffel Idiom:** Inline externals are well-understood in Eiffel ecosystem
4. **Manual Memory Management:** Manageable with Design by Contract (preconditions, postconditions)
5. **Performance:** Minimal overhead (direct C call)

### Implications

- Must implement careful memory management in externals
- Preconditions will check handles are valid (not Void)
- Postconditions will guarantee proper cleanup
- Code review focus: pointer safety
- Testing: Memory leak detection (Valgrind on Linux, Dr. Memory on Windows)

### Validation

- Prototype tensor creation and inference using C API (Phase 0)
- Verify externals compile (ec.sh -batch)
- Memory leak test: load/unload 100x, no growth
- Comparison: Performance vs sherpa-onnx (should be similar)

---

## D-002: Single Session vs Session Pool

### Question
Should each model have one session, or should we maintain a pool of sessions for concurrency?

### Options

**Option 1: Single Session Per Model** (CHOSEN)
- Each ONNX_MODEL holds one OrtSession
- Multiple models can exist simultaneously (separate objects)
- SCOOP handles concurrency (separate objects in separate processors)

Pros:
- Simple (one session = one model)
- Eiffel SCOOP natural (no shared state)
- Memory clear (know VRAM per model)

Cons:
- No session reuse (each model needs separate session)
- Can't pipeline multiple inference calls through same session

**Option 2: Session Pool with Locking**
- Maintain pool of sessions per model
- Lock pool during inference
- Multiple threads/processors share sessions

Pros:
- Memory efficient (fewer sessions for many concurrent users)
- Can pipeline

Cons:
- Complexity: synchronization, locking
- SCOOP incompatible (shared mutable state)
- Performance: lock contention

**Option 3: Thread-Local Sessions**
- Each SCOOP processor gets thread-local session (TLS)
- Automatic per-processor session management

Pros:
- Memory efficient
- SCOOP compatible
- Transparent

Cons:
- Eiffel TLS APIs limited (not well-supported)
- Complex implementation
- Hidden state (hard to reason about)

### Decision

**CHOSEN: Option 1 - Single Session Per Model**

### Rationale

1. **SCOOP Natural:** Eiffel's concurrency model is object-based, not thread-pool
2. **Simplicity:** Straightforward ownership (model owns session)
3. **Memory Transparency:** Users know exactly how much VRAM per model
4. **Eiffel Pattern:** Matches style of simple_* ecosystem (simple objects, not global pools)

### Implications

- One ONNX_MODEL = one OrtSession
- Multiple models -> multiple sessions (multiple VRAM)
- Concurrent inference -> separate ONNX_MODEL objects in separate SCOOP agents
- Users must manage model lifetime explicitly (unload when done)

### Validation

- Design Point-E usage: load encoder (one session), load decoder (second session), concurrent inference
- SCOOP test: two agents, each with separate model, infer concurrently
- Memory test: verify two models use 2x VRAM

---

## D-003: Tensor Ownership & Memory Management

### Question
Who owns tensor memory after inference? Should tensors be copied or referenced?

### Options

**Option 1: Copy to Eiffel Arrays** (CHOSEN)
- Inference extracts output tensor data into Eiffel ARRAY [REAL]
- Data copied (C float -> Eiffel REAL)
- C tensor freed immediately after copy
- No C pointers exposed to Eiffel

Pros:
- Safe (no dangling C pointers)
- Simple (no lifetime management)
- Eiffel idiomatic (ARRAY is standard)
- Void-safe (no detachable C pointers)

Cons:
- Memory copy overhead (mitigated for Phase 1)
- Large tensors (1GB) require 2GB temporary space (output + copy)

**Option 2: Zero-Copy with Managed Pointers**
- Return managed pointer to C tensor data
- Tensor lives as long as session lives
- User receives POINTER to C data
- Requires careful lifetime management

Pros:
- No copy overhead (fast)
- Good for large tensors

Cons:
- Unsafe (dangling pointers possible)
- Not void-safe
- Complex lifetime rules (when is data valid?)
- Eiffel anti-pattern (raw pointers)

**Option 3: Hybrid Approach**
- Small tensors (< 10MB): Copy
- Large tensors (> 10MB): Managed pointer option
- User chooses via feature flag

Pros:
- Best of both (safety + performance)

Cons:
- Complexity (two paths to maintain)
- Confusion (when to use which?)

### Decision

**CHOSEN: Option 1 - Copy to Eiffel Arrays (Phase 1)**

With plan for **Option 3 - Hybrid (Phase 2+)**

### Rationale

1. **Phase 1 Priority:** Safety over performance
2. **Void-Safe:** All detachables checked, no raw pointers
3. **Eiffel Idiomatic:** ARRAY [REAL] is standard type
4. **Learning:** Copy first, optimize second (proven approach)
5. **User Code:** Simple to use (receive ARRAY, not POINTER)

### Implications

- Output tensors are copied to Eiffel arrays
- Performance cost: acceptable for Phase 1, optimized in Phase 2
- Large tensors (1GB+): May be slow, documented limitation
- Memory: Temporary 2x space needed during copy
- Phase 2: Add `to_array_zero_copy ()` for advanced users

### Validation

- Profile copy performance: 1M elements per millisecond (acceptable)
- Memory test: 1GB tensor copy, peak memory < 3GB (original + copy + overhead)
- Large model test: Point-E (1GB) inference, copy completes in < 100ms

---

## D-004: Model Format Support

### Question
Should simple_onnx support only .onnx format, or also .pb, .pth, .h5, etc.?

### Options

**Option 1: .onnx Only** (CHOSEN)
- Support only ONNX format (.onnx files)
- Users convert offline (PyTorch, TensorFlow -> ONNX)
- One-time conversion cost

Pros:
- Simple (one format parser)
- Standard (ONNX is write-once-run-anywhere)
- Users already converting

Cons:
- Users must do conversion step
- Slight setup friction

**Option 2: Multiple Formats**
- Support .onnx, .pb (TensorFlow), .pth (PyTorch), .h5 (Keras)
- Use framework-specific C APIs for each

Pros:
- Convenience (no conversion needed)

Cons:
- Complexity (multiple C APIs, multiple binaries)
- Maintenance burden (track framework updates)
- Eiffel binding complexity (4+ external C APIs)
- Binary size (TensorFlow + PyTorch + ONNX)

**Option 3: Abstract Format with Pluggable Loaders**
- Generic ONNX_MODEL interface
- Users provide loaders for formats they need
- Load dynamically at runtime

Pros:
- Extensible (users add formats)
- Simpler default (.onnx)

Cons:
- Over-engineering (unnecessary abstraction)
- Complexity (plugin system)

### Decision

**CHOSEN: Option 1 - .onnx Only**

### Rationale

1. **Standard:** ONNX is industry standard, convergence point
2. **Simplicity:** One format = straightforward library
3. **Conversion Easy:** torch.onnx.export() is one-liner
4. **User Control:** Conversion happens offline, users have control
5. **Point-E/Shap-E Viable:** Both convertible to ONNX (HuggingFace models available)

### Implications

- Point-E, Shap-E, and YOLO must be converted to ONNX first
- Conversion documented in Phase 4 (documentation phase)
- Conversion scripts provided (Python example in docs)
- Future: If demand high, add format support in Phase 3+

### Validation

- Verify Point-E available in ONNX format (HuggingFace)
- Verify Shap-E convertible to ONNX (community examples)
- Document conversion process
- Provide example conversion script

---

## D-005: Configuration Approach

### Question
How should users configure the ONNX Runtime (builder pattern vs struct)?

### Options

**Option 1: Fluent Builder Pattern** (CHOSEN)
```eiffel
create runtime
  .make_with_cpu_backend
  .with_optimization_level (ONNX_RUNTIME.OPTIMIZATION_ALL)
  .with_intra_op_threads (4)
```

Pros:
- Eiffel idiomatic (consistent with simple_*)
- Feature chaining (easy to extend)
- Readable code
- Type-safe (compile-time checking)

Cons:
- More verbose declarations (each option = new feature)
- Boilerplate in implementation

**Option 2: Configuration Struct**
```eiffel
local
  config: ONNX_CONFIG
do
  create config
  config.backend := CPU
  config.optimization_level := ALL
  create runtime.make (config)
end
```

Pros:
- Fewer methods (one constructor)
- Data-driven

Cons:
- Less discoverable (options hidden in struct)
- Not idiomatic (simple_* prefer builders)

**Option 3: Make_with_options Function**
```eiffel
create runtime.make_with_options (
  backend := CPU,
  optimization_level := ALL,
  intra_op_threads := 4
)
```

Pros:
- Compact (one call)

Cons:
- Many parameters (hard to read)
- Not extensible (adding param breaks API)
- Not Eiffel idiomatic

### Decision

**CHOSEN: Option 1 - Fluent Builder Pattern**

### Rationale

1. **Eiffel Standard:** Consistent with simple_* libraries (simple_http, simple_json)
2. **Extensible:** Adding new option doesn't break existing code
3. **Readable:** Code reads naturally (method names document intent)
4. **Type-Safe:** Compiler prevents invalid configurations
5. **Discoverable:** IDE autocomplete shows all options

### Implications

- Each configuration option is a feature method
- Returns updated runtime (for chaining)
- Defaults sensible (CPU backend, OPTIMIZATION_BASIC)
- Implementation: Each feature creates/updates builder state

### Validation

- Simple_http pattern review (same builder style)
- Documentation: Clear examples of builder pattern
- IDE test: Autocomplete works for feature chaining

---

## D-006: Error Handling Strategy

### Question
How should C API errors be converted to Eiffel exceptions?

### Options

**Option 1: Convert to Eiffel Exceptions** (CHOSEN)
- Catch OrtStatus from C API
- Throw ONNX_ERROR exception (subclass of EXCEPTION)
- Include error code, message, context

Pros:
- Eiffel idiomatic (exception handling standard)
- Type-safe (exception type encodes error category)
- Preconditions/postconditions align (contract-based)

Cons:
- Need to define exception classes
- Conversion overhead (C error -> Eiffel exception)

**Option 2: Return Error Codes**
- Instead of exceptions, return error code
- Caller checks code (e.g., if status = INVALID_MODEL then ...)

Pros:
- Minimal overhead
- C-style (expected from C binding)

Cons:
- Not Eiffel idiomatic
- Error checking optional (users might ignore)
- Verbose (constant if-checks)

**Option 3: Hybrid (Try-Catch + Codes)**
- Some errors as exceptions, some as codes
- Users can choose handling style

Pros:
- Flexibility

Cons:
- Inconsistent (confusing)
- More complex API

### Decision

**CHOSEN: Option 1 - Convert to Eiffel Exceptions**

### Rationale

1. **Eiffel Standard:** Exception handling is standard Eiffel (not C)
2. **Preconditions:** Violations raise exceptions naturally
3. **Design by Contract:** Failed postconditions raise exceptions
4. **Type Safety:** Exception type = error category
5. **Consistency:** Simple_* libraries use exceptions

### Implications

- Define exception classes: ONNX_ERROR, ONNX_INVALID_MODEL, ONNX_SHAPE_MISMATCH, etc.
- Preconditions checked (will raise PRECONDITION_VIOLATED)
- C API status checked, converted to exceptions
- Rescue clauses can catch specific ONNX_ERROR subclass

### Validation

- Test: Invalid model raises ONNX_ERROR
- Test: Shape mismatch raises ONNX_SHAPE_MISMATCH
- Test: CUDA unavailable raises ONNX_PROVIDER_UNAVAILABLE
- Code review: No silent error codes (all errors visible)

---

## D-007: Data Type Support Scope

### Question
Which data types should input/output tensors support in Phase 1?

### Options

**Option 1: Float32, Float16, Int32, Int64, Bool** (CHOSEN)
Covers ~99% of inference workloads.

Pros:
- Comprehensive (covers Point-E, YOLO, BERT)
- Manageable (5 types)
- Most common types

Cons:
- Doesn't cover string, complex (rare for inference)

**Option 2: Extended (Add String, Sequences, Maps)**
Covers all ONNX data types.

Pros:
- Comprehensive

Cons:
- Complexity (string marshalling, container support)
- Rare in inference (mostly deep learning)

**Option 3: Minimal (Float32 Only)**
Just float32.

Pros:
- Simplest

Cons:
- Many models use int32/int64 (token IDs, indices)
- Misses YOLO, NLP models

### Decision

**CHOSEN: Option 1 - Float32, Float16, Int32, Int64, Bool**

### Rationale

1. **Coverage:** These 5 types handle 99%+ of inference workloads
2. **Point-E Compatible:** Token inputs (int64), embeddings (float32)
3. **YOLO Compatible:** Image inputs (float32), output indices (int64)
4. **BERT Compatible:** Token IDs (int32/int64), embeddings (float32)
5. **Simplicity:** Phase 1 focused, Phase 2 can extend

### Implications

- Phase 1: Support 5 data types
- Phase 2: Add string, sequences if demand
- Users needing other types: Can wait or contribute
- API: Separate tensor creation per type (make_float32, make_int64, etc.)

### Validation

- Point-E: Token tensors (int64), embedding outputs (float32)
- YOLO: Image inputs (float32), output (int64 indices)
- BERT: Token IDs (int32), embeddings (float32)
- All three models work with 5 types

---

## D-008: Concurrency Model

### Question
How should simple_onnx handle concurrent inference across multiple SCOOP processors?

### Options

**Option 1: Separate Contexts, No Synchronization** (CHOSEN)
- Each processor has own session
- No shared mutable state
- SCOOP scheduler handles ordering

Pros:
- Eiffel SCOOP natural (design for separate objects)
- No mutex overhead
- Scales to many processors
- Zero contention

Cons:
- Memory: Multiple sessions needed
- Requires users to design for SCOOP (not trivial)

**Option 2: Global Shared Session with Mutex**
- One session shared across processors
- Mutex protects from concurrent access
- Multiple inferences serialize

Pros:
- Memory efficient (one session)
- Simpler user code (shared model)

Cons:
- Bottleneck (all inferences serialize)
- Non-SCOOP (shared mutable state)
- Performance loss (lock contention)

**Option 3: No Concurrency Support (Phase 1), Add Later (Phase 2)**
- Single-threaded only
- Explicit error if used concurrently
- Phase 2: Add SCOOP support

Pros:
- Simplest Phase 1
- Fewer edge cases

Cons:
- Limits usefulness (no concurrent inference)
- Breaking change in Phase 2

### Decision

**CHOSEN: Option 1 - Separate Contexts, No Synchronization**

**With contingency:** Phase 1 documents concurrency pattern, Phase 2 validates with tests.

### Rationale

1. **SCOOP Native:** Matches Eiffel's concurrency model exactly
2. **Performance:** No lock overhead
3. **Scalability:** Works with unlimited processors
4. **Design Clarity:** Ownership clear (model per processor)
5. **Future-Proof:** Scales to many-core systems

### Implications

- No mutex needed (Eiffel SCOOP handles synchronization)
- Session lifetime = processor lifetime
- Multiple models loaded = multiple VRAM
- Users design with SCOOP in mind (separate objects)
- Concurrent inference pattern documented in Phase 4

### Validation

- Design: Two SCOOP agents, each loading model, concurrent inference
- Test: Verify no race conditions (sanitizer clean)
- Performance: Two concurrent inferences faster than sequential
- Documentation: Clear pattern for users

---

## D-009: Version & Release Strategy

### Question
How will simple_onnx handle ONNX Runtime version updates?

### Options

**Option 1: Pin to Stable Release, Support Two Versions** (CHOSEN)
- Primary: Latest ONNX Runtime (1.17, 1.18, etc.)
- Support: Current - 1 version (backward compatible)
- Minimum: 1.15 (proven in simple_speech)

Pros:
- Predictable (clear support window)
- Not too old (good features, fixes)
- Not too new (stability proven)

Cons:
- Some users stuck on old versions
- Requires testing multiple versions

**Option 2: Support All Versions**
- No minimum (work with 1.0+)
- No maximum (always latest)

Pros:
- Maximum compatibility

Cons:
- Regression testing burden (many versions)
- Complexity (support old bugs)

**Option 3: Always Latest**
- Update simple_onnx when new release available
- Users must upgrade

Pros:
- Always features, fixes

Cons:
- Breaking changes (users forced to update)
- Less stable (no proven versions)

### Decision

**CHOSEN: Option 1 - Pin to Stable Release, Support Two Versions**

### Rationale

1. **Proven:** ONNX Runtime 1.15+ stable, tested
2. **Manageable:** Testing 2 versions reasonable
3. **Backward Compatible:** ONNX Runtime maintains compatibility
4. **User Guidance:** Clear version recommendation
5. **Security:** Can drop old versions when critical bugs found

### Implications

- simple_onnx.ecf specifies ONNX Runtime 1.15 minimum
- CI tests against 1.15 and latest (1.17, 1.18)
- Changelog notes version compatibility
- Users on 1.13 or earlier: Unsupported (documented)

### Validation

- CI matrix: ONNX Runtime 1.15 + latest
- All tests pass on both versions
- No version-specific bugs

---

## Summary Table

| Decision | Choice | Rationale |
|----------|--------|-----------|
| D-001 | C API + Inline Externals | Proven (sherpa-onnx), simple, Eiffel idiomatic |
| D-002 | Single Session Per Model | SCOOP natural, simple ownership |
| D-003 | Copy to Eiffel Arrays (Phase 1) | Safety > performance, void-safe, extensible to Phase 2 |
| D-004 | .onnx Format Only | Standard, simple, users can convert offline |
| D-005 | Fluent Builder Pattern | Eiffel idiomatic, extensible, readable |
| D-006 | Convert to Eiffel Exceptions | Standard error handling, type-safe |
| D-007 | 5 Data Types (FP32, FP16, I32, I64, Bool) | Covers 99% inference, manageable scope |
| D-008 | Separate Contexts, SCOOP Model | Native to Eiffel, no locks, scalable |
| D-009 | Pin to Stable, Support 2 Versions | Proven versions, manageable testing |

---

## Risk Mitigation from Decisions

| Decision | Risk | Mitigation |
|----------|------|-----------|
| D-001 (C API) | Memory leak in C bindings | Testing with Valgrind, Code review |
| D-002 (Single Session) | VRAM exhaustion (multiple models) | Explicit unload, VRAM tracking |
| D-003 (Copy) | Performance overhead on large tensors | Phase 2 zero-copy option |
| D-004 (.onnx only) | User friction (need conversion) | Docs, example scripts, ease of conversion |
| D-005 (Builder) | API complexity | Incremental design, sensible defaults |
| D-006 (Exceptions) | Exception overhead | Measured in testing, acceptable |
| D-007 (5 types) | Users needing other types | Phase 2 extension, clear message |
| D-008 (SCOOP) | Users not familiar with SCOOP | Docs, examples, pattern clear |

---

## Related Documents

- **01-SCOPE.md** - Context for decisions
- **03-REQUIREMENTS.md** - Requirements driving decisions
- **05-INNOVATIONS.md** - Design novelties from decisions
- **06-RISKS.md** - Risks addressed by decisions
