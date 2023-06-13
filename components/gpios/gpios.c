#include "gpios.h"


void init_gpio_driver()
{
    gpio_config_t config = {
        .pin_bit_mask = (1ULL << GPIO_PIN),
        .mode = GPIO_MODE_INPUT_OUTPUT,
        .pull_up_en = 0,
        .pull_down_en = 0,
        .intr_type = GPIO_INTR_DISABLE,
    };
    gpio_config(&config);
}


void turn_on_gpio(gpio_num_t gpio_number)
{
    gpio_set_level(gpio_number, true);
}


void turn_off_gpio(gpio_num_t gpio_number)
{
    gpio_set_level(gpio_number, false);
}