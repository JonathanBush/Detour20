#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/pwm1.h"
#include "mcc_generated_files/pwm3.h"
#include "mcc_generated_files/pwm4.h"
#include "lcd.h"
#include "mcc_generated_files/mcc.h"
#include <xc.h>

//#define RS Dsp_RS_LAT
//#define EN Dsp_EN_LAT
//#define D4 Dsp_DB4_LAT
//#define D5 Dsp_DB5_LAT
//#define D6 Dsp_DB6_LAT
//#define D7 Dsp_DB7_LAT

#define RS RB0
#define EN RB1
#define D4 RB2
#define D5 RB3
#define D6 RB4
#define D7 RB5

void lcd_port(char a)
{
	if(a & 1)
		D4 = 1;
	else
		D4 = 0;

	if(a & 2)
		D5 = 1;
	else
		D5 = 0;

	if(a & 4)
		D6 = 1;
	else
		D6 = 0;

	if(a & 8)
		D7 = 1;
	else
		D7 = 0;
}

void lcd_cmd(char a)
{
    RS = 0;
    lcd_port(a);
    EN = 1;
    __delay_ms(4);
    EN = 0;
}

void lcd_init()
{
    PWM1_Initialize();
    PWM3_Initialize();
    PWM4_Initialize();
    lcd_setbacklight(0x7FFF, 0x7FFF, 0x7FFF);
    
    TRISB = 0x00;
    lcd_port(0x00);
    __delay_ms(20);
    lcd_cmd(0x03);
    __delay_ms(5);
    lcd_cmd(0x03);
    __delay_ms(11);
    lcd_cmd(0x03);
    lcd_cmd(0x02);
    lcd_cmd(0x02);
    lcd_cmd(0x08);
    lcd_cmd(0x00);
    lcd_cmd(0x0C);
    lcd_cmd(0x00);
    lcd_cmd(0x06);
}

void lcd_clear()
{
    lcd_cmd(0);
    lcd_cmd(1);
}


void lcd_writechar(char a)
{
//    RS = 1;
//    lcd_port(a >> 4);
//    EN = 1;
//    EN = 0;
//    lcd_port(a & 0x0F);
//    EN = 1;
//    EN = 0;
//    __delay_us(40);
    char temp, y;
    temp = a & 0x0F;
    y = a & 0xF0;
    RS = 1;
    lcd_port(y >> 4);
    EN = 1;
    __delay_us(40);
    //__delay_ms(5);
    EN = 0;
    lcd_port(temp);
    EN = 1;
    __delay_us(40);
    //__delay_ms(5);
    EN = 0;
}

void lcd_setpos(unsigned char row, unsigned char column)
{
    char temp, z, y;
    temp = ((row == 0) ? 0x80 : 0xC0) + column;
    z = temp >> 4;
    y = temp & 0x0F;
    lcd_cmd(z);
    lcd_cmd(y);

}

void lcd_writestr(char *a)
{
    while (*a != '\0') {
        lcd_writechar(*a);
        ++a;
        __delay_ms(1);
    }
}

void lcd_setbacklight(unsigned char red, unsigned char green, unsigned char blue)
{
    PWM1_LoadDutyValue(0x03FF - ((uint16_t)red   << 2));
    PWM3_LoadDutyValue(0x03FF - ((uint16_t)green << 2));
    PWM4_LoadDutyValue(0x03FF - ((uint16_t)blue  << 2));
}

void lcd_shift_right()
{
    lcd_cmd(0x01);
    lcd_cmd(0x0C);
}
void lcd_shift_left()
{
    lcd_cmd(0x01);
    lcd_cmd(0x08);
}
