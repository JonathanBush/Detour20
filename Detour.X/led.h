#ifndef LED_H
#define LED_H

#include "colors.h"

typedef unsigned long color;

void led_init(unsigned int num);
void led_set(unsigned int led, color c);
void led_set_all(color c);
void led_update(void);
void led_shift_up();

#endif