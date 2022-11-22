cmake_minimum_required(VERSION 3.15)
project(hello CXX)

add_library(hello src/hello.cpp)

if (BUILD_SHARED_LIBS)
    set_target_properties(hello PROPERTIES LIBRARY_OUTPUT_NAME hello-shared)
else()
    set_target_properties(hello PROPERTIES LIBRARY_OUTPUT_NAME hello-static)
endif()

target_include_directories(hello PUBLIC include)
set_target_properties(hello PROPERTIES PUBLIC_HEADER "include/hello.h")

if (WITH_FMT)
    find_package(fmt REQUIRED)
    target_link_libraries(hello fmt::fmt)
    target_compile_definitions(hello PRIVATE USING_FMT=1)
endif()

if (NOT BUILD_TESTING STREQUAL OFF)
    add_subdirectory(tests)
endif()

install(TARGETS hello)
