#include "motor.h"
#include "lcd.h"
#include "led.h"
#include "colors.h"

void board_init()
{
    lcd_init();
    led_init(40);
}

