# Changelog

All notable changes to this project will be documented in this file.

## [1.0.0] - 2026-01-31

### Added
- **Core Library Features:**
  - SIMPLE_ONNX facade for ONNX Runtime access
  - ONNX_TENSOR with support for multiple data types (float32, int32, int64, bool, float16)
  - ONNX_SESSION with configurable execution providers and optimization levels
  - ONNX_MODEL for model metadata inspection
  - ONNX_SHAPE for tensor dimension handling
  - ONNX_RESULT with XOR pattern (success OR failure, never both)

- **Type Safety & Verification:**
  - Design by Contract throughout (91+ contract clauses)
  - Void-safe implementation (void_safety="all")
  - Type-specific tensor creation (make_float32, make_int32, etc.)
  - Contract-verified shape compatibility checking

- **Execution Providers:**
  - CPU (default)
  - CUDA support
  - TensorRT support
  - CoreML support
  - Provider availability checking and selection

- **Performance Optimization:**
  - Graph optimization levels (0-3)
  - Session reuse for batch processing
  - Provider selection for GPU acceleration
  - Inline C externals for direct ONNX Runtime C API access

- **Integration:**
  - SCOOP compatible (concurrent/parallel safe)
  - Integrated with simple_speech library
  - 14+ passing tests (100% pass rate)

### Technical Details
- **Language:** Eiffel
- **Compiler:** EiffelStudio 25.02+
- **Dependencies:** ONNX Runtime C library only (no Python)
- **Architecture:** Facade pattern with immutable tensor design
- **Concurrency:** SCOOP-compatible for parallel use
- **Memory:** Eiffel GC + C library resource management

### Documentation
- Comprehensive GitHub Pages documentation site
- Quick API reference with common patterns
- User guide with workflow examples
- Full API reference for all classes
- Architecture documentation with design decisions
- Cookbook with 8 real-world recipes

### Testing
- 14+ integration tests
- Simple_speech integration validation
- ONNX foundation tests
- 100% test pass rate

### Build & Release
- Professional documentation site (/docs)
- MIT License
- Production-ready binaries
- Clean ECF configuration

## Installation

```bash
# Add to your ECF configuration:
<library name="simple_onnx" location="$SIMPLE_EIFFEL/simple_onnx/simple_onnx.ecf"/>

# Ensure ONNX Runtime C library is available:
# - Windows: onnxruntime.dll in PATH
# - Linux: libonnxruntime.so in LD_LIBRARY_PATH
# - macOS: libonnxruntime.dylib in DYLD_LIBRARY_PATH
```

## Status

✅ **Production Ready**

- Compiles successfully with zero warnings
- All tests passing
- Integrated with simple_speech
- Ready for deployment

## License

MIT License

Copyright (c) 2026 Simple Eiffel Contributors

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.

## Support

- **Documentation:** https://simple-eiffel.github.io/simple_onnx/
- **GitHub:** https://github.com/simple-eiffel/simple_onnx
- **Issues:** https://github.com/simple-eiffel/simple_onnx/issues
