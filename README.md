# simple_onnx

[Documentation](https://simple-eiffel.github.io/simple_onnx/) •
[GitHub](https://github.com/simple-eiffel/simple_onnx) •
[Issues](https://github.com/simple-eiffel/simple_onnx/issues)

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)
![Eiffel 25.02](https://img.shields.io/badge/Eiffel-25.02-purple.svg)
![DBC: Contracts](https://img.shields.io/badge/DBC-Contracts-green.svg)

ONNX Runtime wrapper for Eiffel inference without Python dependency.

Part of the [Simple Eiffel](https://github.com/simple-eiffel) ecosystem.

## Status

✅ **Production Ready** — v1.0.0
- 14+ tests passing, 100% pass rate
- Type-safe tensor manipulation, multi-execution providers, SCOOP compatible
- Design by Contract throughout (91+ contract clauses)

## Quick Start

```eiffel
local
    onnx: SIMPLE_ONNX
    model: ONNX_MODEL
    session: ONNX_SESSION
    tensor: ONNX_TENSOR
    result: ONNX_RESULT
do
    create onnx.make
    model := onnx.load_model ("model.onnx")
    session := onnx.create_session (model)
    tensor := onnx.create_tensor_float32 (shape)
    result := session.execute (tensor)
    if result.is_success then
        process (result.output_tensor)
    end
end
```

For complete documentation, see [our docs site](https://simple-eiffel.github.io/simple_onnx/).

## Features

- Direct ONNX Runtime C API integration (inline C externals)
- Type-safe tensors (float32, int32, int64, bool, float16)
- Multi-execution providers (CPU, CUDA, TensorRT, CoreML)
- Immutable tensor design prevents state corruption
- XOR result pattern (success OR failure, never both)
- SCOOP compatible for concurrent/parallel use
- Void-safe (void_safety="all" enforced)
- Design by Contract verification (pre/post/invariant)

For details, see the [User Guide](https://simple-eiffel.github.io/simple_onnx/user-guide.html).

## Installation

Add to your ECF:

```xml
<library name="simple_onnx" location="$SIMPLE_EIFFEL/simple_onnx/simple_onnx.ecf"/>
```

## License

MIT License - See LICENSE file

## Support

- **Docs:** https://simple-eiffel.github.io/simple_onnx/
- **GitHub:** https://github.com/simple-eiffel/simple_onnx
- **Issues:** https://github.com/simple-eiffel/simple_onnx/issues
