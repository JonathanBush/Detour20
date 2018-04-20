#ifndef LED_H
#define LED_H

#include "colors.h"

typedef enum c_channel {
    Red = 8, 
    Green = 0,
    Blue = 16
};

void led_init(unsigned int num);
void led_set(unsigned int led, color c);
void led_set_all(color c);
void led_update(void);
unsigned char led_get(unsigned int led, enum c_channel c);

#endif