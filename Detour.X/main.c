/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65
        Device            :  PIC18F26K40
        Driver Version    :  2.00
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/eusart1.h"
#include "mcc_generated_files/interrupt_manager.h"
#include "led.h"
#include "lcd.h"
#include "colors.h"
#include "motor.h"
#include <xc.h>
#include <stdio.h>



/* actions performed when button num is pressed */
void diskButtonHandler(uint8_t num)
{
    char output[17];
    
    /* display the number on the screen */
    lcd_clear();
    lcd_setpos(0,0);
    lcd_writestr("Detour 2.0");
    lcd_setpos(1,0);
    sprintf(output, "%d", num);
    lcd_writestr(output);
    uint8_t i = 0;
    
    /* turn on the number of LEDs corresponding to the button that was pressed */
    for (; i < num; ++i) {
        led_set(i, RGB(40,40,40));
    }
    for (; i < 20; ++i) {
        led_set(i, (color)0);
    }
    led_update();
    
}

/* actions performed when the select button is pressed */
void selectButtonHandler(void)
{
    
    
}

/* actions performed when the UART receives a byte */
void uartRecvHandler(void)
{
    
    /* Code implemented by Syed here*/
}

void btn1_isr()
{
    diskButtonHandler(0);
}

void btn2_isr()
{
    diskButtonHandler(1);
}

void btn3_isr()
{
    diskButtonHandler(2);
}

void btn4_isr()
{
    diskButtonHandler(3);
}

void btn5_isr()
{
    selectButtonHandler();
}

void button_isr_init()
{
    IOCAF0_SetInterruptHandler(btn1_isr);
    IOCAF1_SetInterruptHandler(btn2_isr);
    IOCAF2_SetInterruptHandler(btn3_isr);
    IOCAF3_SetInterruptHandler(btn4_isr);
    IOCAF4_SetInterruptHandler(btn5_isr);
}


void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    OSCILLATOR_Initialize();
    PMD_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    __delay_ms(1000);
    
    led_init(40);
    lcd_init();
    motor_init();
    EUSART1_Initialize();
    PIN_MANAGER_Initialize();
    button_isr_init();
    
    lcd_setbacklight(127, 127, 100);
    
    //uint8_t dat =0;
    lcd_clear();
    lcd_setpos(0,0);
    lcd_writestr("Detour 2.0");
    char output[17];
    uint8_t dat = 0;
    while (1)
    {
        
        if (EUSART1_DataReady) {
            uartRecvHandler();
        }
        
        
    }
}
/**
 End of File
*/