/* 
 * File:   lcd.h
 * Author: jon
 *
 * Created on April 15, 2018, 3:14 PM
 */

#ifndef LCD_H
#define	LCD_H

void lcd_init();
void lcd_clear();
void lcd_setpos(unsigned char row, unsigned char column);
void lcd_writestr(char *text);
void lcd_setbacklight(unsigned char red, unsigned char green, unsigned char blue);
void lcd_writechar(char a);
void lcd_shift_right();
void lcd_shift_left();

#endif	/* LCD_H */

