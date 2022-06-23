#include <iostream>
#include "hello.h"

#if USING_FMT == 1
#include <fmt/color.h>
#endif

void hello(){
    #if USING_FMT == 1
        #ifdef NDEBUG
        fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "hello/1.0: Hello World Release! (with color!)\n");
        #else
        fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "hello/1.0: Hello World Debug! (with color!)\n");
        #endif
    #else
        #ifdef NDEBUG
        std::cout << "hello/1.0: Hello World Release! (without color)" << std::endl;
        #else
        std::cout << "hello/1.0: Hello World Debug! (without color)" << std::endl;
        #endif
    #endif
}
