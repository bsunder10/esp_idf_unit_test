#include <stdio.h>

#include "unity.h"

#include "arthematics.h"



TEST_CASE("Test Addition", "[arthematics]")
{
    int expected = 10 + 6;
    TEST_ASSERT_EQUAL_INT(expected, add(10, 5));
}


TEST_CASE("Test Subtraction", "[arthematics]")
{
    int expected = 10 - 5;
    TEST_ASSERT_EQUAL_INT(expected, sub(10, 5));
}