#ifndef _COMPONENTS_GPIOS_INCLUDE_GPIOS_H_
#define _COMPONENTS_GPIOS_INCLUDE_GPIOS_H_


#include <stdio.h>

#include "driver/gpio.h"

#include "gpios_config.h"

void init_gpio_driver();
void turn_on_gpio(gpio_num_t gpio_number);
void turn_off_gpio(gpio_num_t gpio_number);




#endif  /* _COMPONENTS_GPIOS_INCLUDE_GPIOS_H_ */