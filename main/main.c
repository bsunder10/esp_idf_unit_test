#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "arthematics.h"
#include "gpios.h"

void app_main(void)
{
    printf("The add is %d \n", add(10, 5));
    printf("The sub is %d \n", sub(10, 5));
    printf("The mul is %d \n", mul(10, 5));

    init_gpio_driver();

    turn_on_gpio(GPIO_PIN);
    vTaskDelay(pdMS_TO_TICKS(1000));
    turn_off_gpio(GPIO_PIN);
    vTaskDelay(pdMS_TO_TICKS(1000));
}
