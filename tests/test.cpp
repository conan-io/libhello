#include "../include/hello.h"

#include <limits.h>

#include "gtest/gtest.h"
namespace {
    TEST(HelloTest, ComposeMessages) {
      EXPECT_EQ(std::string("hello/1.0: Hello World Release! (with color!)\n"), compose_message("Release", "with color!"));
      EXPECT_EQ(std::string("hello/1.0: Hello World Debug! (with color!)\n"), compose_message("Debug", "with color!"));
      EXPECT_EQ(std::string("hello/1.0: Hello World Release! (without color)\n"), compose_message("Release", "without color"));
      EXPECT_EQ(std::string("hello/1.0: Hello World Debug! (without color)\n"), compose_message("Debug", "without color"));
    }
}