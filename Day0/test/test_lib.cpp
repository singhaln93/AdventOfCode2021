/**
 * @file test_lib.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "../lib/lib.h"
#include "Orig_Catch.hpp"

void sayHelloTest() {
  SCENARIO("Verify no argument returns Hello World", "[test_Hello.cpp]") {
    REQUIRE(sayHello() == "Hello World");
  }
}