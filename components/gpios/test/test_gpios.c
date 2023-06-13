#include <stdio.h>

#include "unity.h"

#include "gpios.h"


TEST_CASE("Test GPIO Turn ON", "[gpio]")
{
    int expected = 1;

    init_gpio_driver();
    turn_on_gpio(GPIO_PIN);
    TEST_ASSERT_EQUAL_INT(expected, gpio_get_level(GPIO_PIN));
}



TEST_CASE("Test GPIO Turn OFF", "[gpio]")
{
    int expected = 1;

    init_gpio_driver();
    turn_off_gpio(GPIO_PIN);
    TEST_ASSERT_EQUAL_INT(expected, gpio_get_level(GPIO_PIN));
}