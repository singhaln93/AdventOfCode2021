/**
 * @file test_lib.cpp
 * @author Neeraj Singhal
 * @date 2021-12-04
 */

#include "../lib/lib.hpp"
#include "Orig_Catch.hpp"

void sayHelloTest() {
  //TEST_CASE("Verify no argument returns Hello World", "[test_lib.cpp]") {
    REQUIRE(sayHello() == "Hello World");
  //}
}