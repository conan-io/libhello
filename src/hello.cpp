#include <iostream>
#include "hello.h"
#include <fmt/color.h>

void hello(){
    #ifdef NDEBUG
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "hello/1.0: Hello World Release!\n");
    #else
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "hello/1.0: Hello World Debug!\n");
    #endif

    // ARCHITECTURES
    #ifdef _M_X64
    fmt::print(fg(fmt::color::medium_orchid), "  hello/1.0: _M_X64 defined\n");
    #endif

    #ifdef _M_IX86
    fmt::print(fg(fmt::color::medium_orchid), "  hello/1.0: _M_IX86 defined\n");
    #endif

    #if __i386__
    fmt::print(fg(fmt::color::medium_orchid), "  hello/1.0: __i386__ defined\n");
    #endif

    #if __x86_64__
    fmt::print(fg(fmt::color::medium_orchid), "  hello/1.0: __x86_64__ defined\n");
    #endif

    // Libstdc++
    #if defined _GLIBCXX_USE_CXX11_ABI
    fmt::print(fg(fmt::color::crimson), "  hello/1.0: _GLIBCXX_USE_CXX11_ABI "<< _GLIBCXX_USE_CXX11_ABI << "\n");
    #endif

    // COMPILER VERSIONS
    #if _MSC_VER
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: _MSC_VER" << _MSC_VER<< "\n");
    #endif

    #if _MSVC_LANG
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: _MSVC_LANG" << _MSVC_LANG<< "\n");
    #endif

    #if __cplusplus
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __cplusplus" << __cplusplus<< "\n");
    #endif

    #if __INTEL_COMPILER
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __INTEL_COMPILER" << __INTEL_COMPILER<< "\n");
    #endif

    #if __GNUC__
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __GNUC__" << __GNUC__<< "\n");
    #endif

    #if __GNUC_MINOR__
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __GNUC_MINOR__" << __GNUC_MINOR__<< "\n");
    #endif

    #if __clang_major__
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __clang_major__" << __clang_major__<< "\n");
    #endif

    #if __clang_minor__
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __clang_minor__" << __clang_minor__<< "\n");
    #endif

    #if __apple_build_version__
    fmt::print(fg(fmt::color::papaya_whip), "  hello/1.0: __apple_build_version__" << __apple_build_version__<< "\n");
    #endif

    // SUBSYSTEMS

    #if __MSYS__
    fmt::print(fg(fmt::color::spring_green), "  hello/1.0: __MSYS__" << __MSYS__<< "\n");
    #endif

    #if __MINGW32__
    fmt::print(fg(fmt::color::spring_green), "  hello/1.0: __MINGW32__" << __MINGW32__<< "\n");
    #endif

    #if __MINGW64__
    fmt::print(fg(fmt::color::spring_green), "  hello/1.0: __MINGW64__" << __MINGW64__<< "\n");
    #endif

    #if __CYGWIN__
    fmt::print(fg(fmt::color::spring_green), "  hello/1.0: __CYGWIN__" << __CYGWIN__<< "\n");
    #endif
}
