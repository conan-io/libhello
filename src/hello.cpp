#include <iostream>

#include "hello.h"

#if USING_FMT == 1
#include <fmt/color.h>
#endif

std::string compose_message(const std::string& build_type, const std::string& extra_info) {
    std::string ret = std::string("hello/1.0: Hello World ") + build_type + std::string("! (") + extra_info + std::string(")\n");
    return ret;
}

void hello(){
    #if USING_FMT == 1
        #ifdef NDEBUG
        fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, compose_message("Release", "with color!"));
        #else
        fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, compose_message("Debug", "with color!"));
        #endif
    #else
        #ifdef NDEBUG
        std::cout << compose_message("Release", "without color");
        #else
        std::cout << compose_message("Debug", "without color");
        #endif
    #endif
}
