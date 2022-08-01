#include "../include/hello.h"

#include <limits.h>

#include "gtest/gtest.h"
namespace {

    TEST(HelloTest, ComposeMessages) {
      ASSERT_STREQ("hello/1.0: Hello World Release! (with color!)\n", compose_message("Release", "with color"));
      ASSERT_STREQ("hello/1.0: Hello World Debug! (with color!)\n", compose_message("Debug", "with color"));
    }
}