# simple_onnx

[Documentation](https://simple-eiffel.github.io/simple_onnx/) •
[GitHub](https://github.com/simple-eiffel/simple_onnx) •
[Issues](https://github.com/simple-eiffel/simple_onnx/issues)

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)
![Eiffel 25.02](https://img.shields.io/badge/Eiffel-25.02-purple.svg)
![DBC: Contracts](https://img.shields.io/badge/DBC-Contracts-green.svg)
![Windows: tests pass](https://img.shields.io/badge/Windows-tests%20pass-0078D6?logo=windows&logoColor=white) ![Linux: tests pass](https://img.shields.io/badge/Linux-tests%20pass-FCC624?logo=linux&logoColor=black) ![macOS: tests pass](https://img.shields.io/badge/macOS-tests%20pass-000000?logo=apple&logoColor=white)

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

### ONNX Runtime on Windows

`lib/onnxruntime/` (not in git) holds ONNX Runtime **1.32.0**, CPU, from Microsoft's NuGet
package `Microsoft.ML.OnnxRuntime` 1.32.0 (published 2026-11-13; package SHA-512 as NuGet's
catalog publishes it; both DLLs Authenticode-signed by Microsoft Corporation). To rebuild it,
unzip the `.nupkg` and copy:

| From the package | To `lib/onnxruntime/` |
|---|---|
| `build/native/include/*` | `include/` |
| `runtimes/win-x64/native/onnxruntime.lib`, `onnxruntime_providers_shared.lib` | `lib/` |
| `runtimes/win-x64/native/onnxruntime.dll`, `onnxruntime_providers_shared.dll` | `bin/` |
| `LICENSE`, `ThirdPartyNotices.txt` | `.` |

- **Ship `onnxruntime.dll` beside your exe.** Windows 11 has its own, older
  `System32\onnxruntime.dll` (1.17.1), and Windows searches System32 before PATH. Built
  against these headers, that copy has no API version 32: `ONNX_ENVIRONMENT.is_ready` is then
  False and `ONNX_SESSION.load` leaves `is_loaded` False. `ec.sh run` copies it beside test
  exes for this reason.
- **One copy for the fleet.** simple_speech's sherpa-onnx folders and simple_scholar's `bin/`
  carry byte-identical copies of these two DLLs. Change them here first, then copy.
  sherpa-onnx-c-api.dll imports `onnxruntime.dll` by ordinal 1 (`OrtGetApiBase` in every
  version so far); check it again whenever the DLL changes.

## License

MIT License - See LICENSE file

## Support

- **Docs:** https://simple-eiffel.github.io/simple_onnx/
- **GitHub:** https://github.com/simple-eiffel/simple_onnx
- **Issues:** https://github.com/simple-eiffel/simple_onnx/issues
