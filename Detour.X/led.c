#include "mcc_generated_files/mcc.h"
#include "led.h"

#define MAX_LEDS 40

color leds[MAX_LEDS];
unsigned int num_leds;

void led_init(unsigned int num) {
    int i;
    num_leds = num;
    for (i = 0; i < MAX_LEDS; ++i) {
        leds[i] = (unsigned long)0x00;
    }
}

// reverse the bits in a char
unsigned long bitflip(unsigned char b) {
   b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
   b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
   b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
   return (unsigned long)b;
}


void led_set(unsigned int led, color c) {
    leds[led] = c;
}

void led_set_all(color c) {
    for (unsigned int i = 0; i < num_leds; ++i) {
        leds[i] = c;
    }
}

unsigned char led_get(unsigned int led, enum c_channel c) {
    return (unsigned char)(0xFF & (leds[led] >> c));
}


void led_write(color c) {
    int j;
    unsigned long val = *((unsigned long *)(&c));
    // the WS2812 wants bits in the order of:
    // GGGGGGGGRRRRRRRRBBBBBBBB
    // but I want to work in the opposite order. so i'm going to flip
    // the bits around and do some shifting so my order is
    // BBBBBBBBRRRRRRRRGGGGGGGG
    // with the most significant bit on the far right. so the RGB value
    // of 128 64 32, which normally would be:
    // R : 0b10000000
    // G : 0b01000000
    // B : 0b00100000
    // will become:
    // BBBBBBBBRRRRRRRRGGGGGGGG
    // 000001000000000100000010

    // now begin shifting them over one at a time
    for(j = 0; j < 24; j++) {
        // depending on if the currently viewed bit is 1 or 0
        // the pin will stay high for different times

        if (val & 1 == 1) {
            // if it is a 1, let it stay higher a bit longer
            LED_LAT = 1;
            NOP();
            NOP();
            NOP();
            LED_LAT = 0;
        } else {
            // but a 0 should go high and then low as fast as possible
            LED_LAT = 1;
            LED_LAT = 0;
        }
        
        // and then right shift to get the next bit
        val = val >> (unsigned char)1;
    }
}

void led_update() {
    LED_LAT = 0;
    __delay_ms(1);
    for (int i = 0; i < num_leds; ++i) {
        led_write(leds[i]);
    }
}
