/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC18F26K40
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Btn1 aliases
#define Btn1_TRIS               TRISAbits.TRISA0
#define Btn1_LAT                LATAbits.LATA0
#define Btn1_PORT               PORTAbits.RA0
#define Btn1_WPU                WPUAbits.WPUA0
#define Btn1_OD                ODCONAbits.ODCA0
#define Btn1_ANS                ANSELAbits.ANSELA0
#define Btn1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Btn1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Btn1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Btn1_GetValue()           PORTAbits.RA0
#define Btn1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Btn1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Btn1_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define Btn1_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define Btn1_SetPushPull()    do { ODCONAbits.ODCA0 = 0; } while(0)
#define Btn1_SetOpenDrain()   do { ODCONAbits.ODCA0 = 1; } while(0)
#define Btn1_SetAnalogMode()  do { ANSELAbits.ANSELA0 = 1; } while(0)
#define Btn1_SetDigitalMode() do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set Btn2 aliases
#define Btn2_TRIS               TRISAbits.TRISA1
#define Btn2_LAT                LATAbits.LATA1
#define Btn2_PORT               PORTAbits.RA1
#define Btn2_WPU                WPUAbits.WPUA1
#define Btn2_OD                ODCONAbits.ODCA1
#define Btn2_ANS                ANSELAbits.ANSELA1
#define Btn2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Btn2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Btn2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Btn2_GetValue()           PORTAbits.RA1
#define Btn2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Btn2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Btn2_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define Btn2_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define Btn2_SetPushPull()    do { ODCONAbits.ODCA1 = 0; } while(0)
#define Btn2_SetOpenDrain()   do { ODCONAbits.ODCA1 = 1; } while(0)
#define Btn2_SetAnalogMode()  do { ANSELAbits.ANSELA1 = 1; } while(0)
#define Btn2_SetDigitalMode() do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set Btn3 aliases
#define Btn3_TRIS               TRISAbits.TRISA2
#define Btn3_LAT                LATAbits.LATA2
#define Btn3_PORT               PORTAbits.RA2
#define Btn3_WPU                WPUAbits.WPUA2
#define Btn3_OD                ODCONAbits.ODCA2
#define Btn3_ANS                ANSELAbits.ANSELA2
#define Btn3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Btn3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Btn3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Btn3_GetValue()           PORTAbits.RA2
#define Btn3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Btn3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Btn3_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define Btn3_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define Btn3_SetPushPull()    do { ODCONAbits.ODCA2 = 0; } while(0)
#define Btn3_SetOpenDrain()   do { ODCONAbits.ODCA2 = 1; } while(0)
#define Btn3_SetAnalogMode()  do { ANSELAbits.ANSELA2 = 1; } while(0)
#define Btn3_SetDigitalMode() do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set Btn4 aliases
#define Btn4_TRIS               TRISAbits.TRISA3
#define Btn4_LAT                LATAbits.LATA3
#define Btn4_PORT               PORTAbits.RA3
#define Btn4_WPU                WPUAbits.WPUA3
#define Btn4_OD                ODCONAbits.ODCA3
#define Btn4_ANS                ANSELAbits.ANSELA3
#define Btn4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Btn4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Btn4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Btn4_GetValue()           PORTAbits.RA3
#define Btn4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Btn4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Btn4_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define Btn4_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define Btn4_SetPushPull()    do { ODCONAbits.ODCA3 = 0; } while(0)
#define Btn4_SetOpenDrain()   do { ODCONAbits.ODCA3 = 1; } while(0)
#define Btn4_SetAnalogMode()  do { ANSELAbits.ANSELA3 = 1; } while(0)
#define Btn4_SetDigitalMode() do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set Btn5 aliases
#define Btn5_TRIS               TRISAbits.TRISA4
#define Btn5_LAT                LATAbits.LATA4
#define Btn5_PORT               PORTAbits.RA4
#define Btn5_WPU                WPUAbits.WPUA4
#define Btn5_OD                ODCONAbits.ODCA4
#define Btn5_ANS                ANSELAbits.ANSELA4
#define Btn5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Btn5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Btn5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Btn5_GetValue()           PORTAbits.RA4
#define Btn5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Btn5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Btn5_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define Btn5_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define Btn5_SetPushPull()    do { ODCONAbits.ODCA4 = 0; } while(0)
#define Btn5_SetOpenDrain()   do { ODCONAbits.ODCA4 = 1; } while(0)
#define Btn5_SetAnalogMode()  do { ANSELAbits.ANSELA4 = 1; } while(0)
#define Btn5_SetDigitalMode() do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS               TRISAbits.TRISA5
#define LED_LAT                LATAbits.LATA5
#define LED_PORT               PORTAbits.RA5
#define LED_WPU                WPUAbits.WPUA5
#define LED_OD                ODCONAbits.ODCA5
#define LED_ANS                ANSELAbits.ANSELA5
#define LED_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_GetValue()           PORTAbits.RA5
#define LED_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_SetPushPull()    do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_SetOpenDrain()   do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_SetAnalogMode()  do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LED_SetDigitalMode() do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set Mtr2 aliases
#define Mtr2_TRIS               TRISAbits.TRISA6
#define Mtr2_LAT                LATAbits.LATA6
#define Mtr2_PORT               PORTAbits.RA6
#define Mtr2_WPU                WPUAbits.WPUA6
#define Mtr2_OD                ODCONAbits.ODCA6
#define Mtr2_ANS                ANSELAbits.ANSELA6
#define Mtr2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define Mtr2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define Mtr2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define Mtr2_GetValue()           PORTAbits.RA6
#define Mtr2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define Mtr2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define Mtr2_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define Mtr2_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define Mtr2_SetPushPull()    do { ODCONAbits.ODCA6 = 0; } while(0)
#define Mtr2_SetOpenDrain()   do { ODCONAbits.ODCA6 = 1; } while(0)
#define Mtr2_SetAnalogMode()  do { ANSELAbits.ANSELA6 = 1; } while(0)
#define Mtr2_SetDigitalMode() do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set Mtr1 aliases
#define Mtr1_TRIS               TRISAbits.TRISA7
#define Mtr1_LAT                LATAbits.LATA7
#define Mtr1_PORT               PORTAbits.RA7
#define Mtr1_WPU                WPUAbits.WPUA7
#define Mtr1_OD                ODCONAbits.ODCA7
#define Mtr1_ANS                ANSELAbits.ANSELA7
#define Mtr1_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define Mtr1_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define Mtr1_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define Mtr1_GetValue()           PORTAbits.RA7
#define Mtr1_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define Mtr1_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define Mtr1_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define Mtr1_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define Mtr1_SetPushPull()    do { ODCONAbits.ODCA7 = 0; } while(0)
#define Mtr1_SetOpenDrain()   do { ODCONAbits.ODCA7 = 1; } while(0)
#define Mtr1_SetAnalogMode()  do { ANSELAbits.ANSELA7 = 1; } while(0)
#define Mtr1_SetDigitalMode() do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set Dsp_RS aliases
#define Dsp_RS_TRIS               TRISBbits.TRISB0
#define Dsp_RS_LAT                LATBbits.LATB0
#define Dsp_RS_PORT               PORTBbits.RB0
#define Dsp_RS_WPU                WPUBbits.WPUB0
#define Dsp_RS_OD                ODCONBbits.ODCB0
#define Dsp_RS_ANS                ANSELBbits.ANSELB0
#define Dsp_RS_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Dsp_RS_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Dsp_RS_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Dsp_RS_GetValue()           PORTBbits.RB0
#define Dsp_RS_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Dsp_RS_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Dsp_RS_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define Dsp_RS_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define Dsp_RS_SetPushPull()    do { ODCONBbits.ODCB0 = 0; } while(0)
#define Dsp_RS_SetOpenDrain()   do { ODCONBbits.ODCB0 = 1; } while(0)
#define Dsp_RS_SetAnalogMode()  do { ANSELBbits.ANSELB0 = 1; } while(0)
#define Dsp_RS_SetDigitalMode() do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set Dsp_EN aliases
#define Dsp_EN_TRIS               TRISBbits.TRISB1
#define Dsp_EN_LAT                LATBbits.LATB1
#define Dsp_EN_PORT               PORTBbits.RB1
#define Dsp_EN_WPU                WPUBbits.WPUB1
#define Dsp_EN_OD                ODCONBbits.ODCB1
#define Dsp_EN_ANS                ANSELBbits.ANSELB1
#define Dsp_EN_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Dsp_EN_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Dsp_EN_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Dsp_EN_GetValue()           PORTBbits.RB1
#define Dsp_EN_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Dsp_EN_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Dsp_EN_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define Dsp_EN_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define Dsp_EN_SetPushPull()    do { ODCONBbits.ODCB1 = 0; } while(0)
#define Dsp_EN_SetOpenDrain()   do { ODCONBbits.ODCB1 = 1; } while(0)
#define Dsp_EN_SetAnalogMode()  do { ANSELBbits.ANSELB1 = 1; } while(0)
#define Dsp_EN_SetDigitalMode() do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set Dsp_DB4 aliases
#define Dsp_DB4_TRIS               TRISBbits.TRISB2
#define Dsp_DB4_LAT                LATBbits.LATB2
#define Dsp_DB4_PORT               PORTBbits.RB2
#define Dsp_DB4_WPU                WPUBbits.WPUB2
#define Dsp_DB4_OD                ODCONBbits.ODCB2
#define Dsp_DB4_ANS                ANSELBbits.ANSELB2
#define Dsp_DB4_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Dsp_DB4_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Dsp_DB4_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Dsp_DB4_GetValue()           PORTBbits.RB2
#define Dsp_DB4_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Dsp_DB4_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Dsp_DB4_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define Dsp_DB4_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define Dsp_DB4_SetPushPull()    do { ODCONBbits.ODCB2 = 0; } while(0)
#define Dsp_DB4_SetOpenDrain()   do { ODCONBbits.ODCB2 = 1; } while(0)
#define Dsp_DB4_SetAnalogMode()  do { ANSELBbits.ANSELB2 = 1; } while(0)
#define Dsp_DB4_SetDigitalMode() do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set Dsp_DB5 aliases
#define Dsp_DB5_TRIS               TRISBbits.TRISB3
#define Dsp_DB5_LAT                LATBbits.LATB3
#define Dsp_DB5_PORT               PORTBbits.RB3
#define Dsp_DB5_WPU                WPUBbits.WPUB3
#define Dsp_DB5_OD                ODCONBbits.ODCB3
#define Dsp_DB5_ANS                ANSELBbits.ANSELB3
#define Dsp_DB5_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Dsp_DB5_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Dsp_DB5_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Dsp_DB5_GetValue()           PORTBbits.RB3
#define Dsp_DB5_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Dsp_DB5_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Dsp_DB5_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define Dsp_DB5_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define Dsp_DB5_SetPushPull()    do { ODCONBbits.ODCB3 = 0; } while(0)
#define Dsp_DB5_SetOpenDrain()   do { ODCONBbits.ODCB3 = 1; } while(0)
#define Dsp_DB5_SetAnalogMode()  do { ANSELBbits.ANSELB3 = 1; } while(0)
#define Dsp_DB5_SetDigitalMode() do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set Dsp_DB6 aliases
#define Dsp_DB6_TRIS               TRISBbits.TRISB4
#define Dsp_DB6_LAT                LATBbits.LATB4
#define Dsp_DB6_PORT               PORTBbits.RB4
#define Dsp_DB6_WPU                WPUBbits.WPUB4
#define Dsp_DB6_OD                ODCONBbits.ODCB4
#define Dsp_DB6_ANS                ANSELBbits.ANSELB4
#define Dsp_DB6_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Dsp_DB6_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Dsp_DB6_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Dsp_DB6_GetValue()           PORTBbits.RB4
#define Dsp_DB6_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Dsp_DB6_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Dsp_DB6_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define Dsp_DB6_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define Dsp_DB6_SetPushPull()    do { ODCONBbits.ODCB4 = 0; } while(0)
#define Dsp_DB6_SetOpenDrain()   do { ODCONBbits.ODCB4 = 1; } while(0)
#define Dsp_DB6_SetAnalogMode()  do { ANSELBbits.ANSELB4 = 1; } while(0)
#define Dsp_DB6_SetDigitalMode() do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Dsp_DB7 aliases
#define Dsp_DB7_TRIS               TRISBbits.TRISB5
#define Dsp_DB7_LAT                LATBbits.LATB5
#define Dsp_DB7_PORT               PORTBbits.RB5
#define Dsp_DB7_WPU                WPUBbits.WPUB5
#define Dsp_DB7_OD                ODCONBbits.ODCB5
#define Dsp_DB7_ANS                ANSELBbits.ANSELB5
#define Dsp_DB7_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Dsp_DB7_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Dsp_DB7_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Dsp_DB7_GetValue()           PORTBbits.RB5
#define Dsp_DB7_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Dsp_DB7_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Dsp_DB7_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define Dsp_DB7_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define Dsp_DB7_SetPushPull()    do { ODCONBbits.ODCB5 = 0; } while(0)
#define Dsp_DB7_SetOpenDrain()   do { ODCONBbits.ODCB5 = 1; } while(0)
#define Dsp_DB7_SetAnalogMode()  do { ANSELBbits.ANSELB5 = 1; } while(0)
#define Dsp_DB7_SetDigitalMode() do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set Mtr3 aliases
#define Mtr3_TRIS               TRISCbits.TRISC0
#define Mtr3_LAT                LATCbits.LATC0
#define Mtr3_PORT               PORTCbits.RC0
#define Mtr3_WPU                WPUCbits.WPUC0
#define Mtr3_OD                ODCONCbits.ODCC0
#define Mtr3_ANS                ANSELCbits.ANSELC0
#define Mtr3_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Mtr3_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Mtr3_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Mtr3_GetValue()           PORTCbits.RC0
#define Mtr3_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Mtr3_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Mtr3_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define Mtr3_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define Mtr3_SetPushPull()    do { ODCONCbits.ODCC0 = 0; } while(0)
#define Mtr3_SetOpenDrain()   do { ODCONCbits.ODCC0 = 1; } while(0)
#define Mtr3_SetAnalogMode()  do { ANSELCbits.ANSELC0 = 1; } while(0)
#define Mtr3_SetDigitalMode() do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set Mtr4 aliases
#define Mtr4_TRIS               TRISCbits.TRISC1
#define Mtr4_LAT                LATCbits.LATC1
#define Mtr4_PORT               PORTCbits.RC1
#define Mtr4_WPU                WPUCbits.WPUC1
#define Mtr4_OD                ODCONCbits.ODCC1
#define Mtr4_ANS                ANSELCbits.ANSELC1
#define Mtr4_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Mtr4_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Mtr4_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Mtr4_GetValue()           PORTCbits.RC1
#define Mtr4_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Mtr4_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define Mtr4_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define Mtr4_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define Mtr4_SetPushPull()    do { ODCONCbits.ODCC1 = 0; } while(0)
#define Mtr4_SetOpenDrain()   do { ODCONCbits.ODCC1 = 1; } while(0)
#define Mtr4_SetAnalogMode()  do { ANSELCbits.ANSELC1 = 1; } while(0)
#define Mtr4_SetDigitalMode() do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set MtrDir aliases
#define MtrDir_TRIS               TRISCbits.TRISC2
#define MtrDir_LAT                LATCbits.LATC2
#define MtrDir_PORT               PORTCbits.RC2
#define MtrDir_WPU                WPUCbits.WPUC2
#define MtrDir_OD                ODCONCbits.ODCC2
#define MtrDir_ANS                ANSELCbits.ANSELC2
#define MtrDir_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define MtrDir_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define MtrDir_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define MtrDir_GetValue()           PORTCbits.RC2
#define MtrDir_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define MtrDir_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define MtrDir_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define MtrDir_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define MtrDir_SetPushPull()    do { ODCONCbits.ODCC2 = 0; } while(0)
#define MtrDir_SetOpenDrain()   do { ODCONCbits.ODCC2 = 1; } while(0)
#define MtrDir_SetAnalogMode()  do { ANSELCbits.ANSELC2 = 1; } while(0)
#define MtrDir_SetDigitalMode() do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set Photon_RX aliases
#define Photon_RX_TRIS               TRISCbits.TRISC3
#define Photon_RX_LAT                LATCbits.LATC3
#define Photon_RX_PORT               PORTCbits.RC3
#define Photon_RX_WPU                WPUCbits.WPUC3
#define Photon_RX_OD                ODCONCbits.ODCC3
#define Photon_RX_ANS                ANSELCbits.ANSELC3
#define Photon_RX_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Photon_RX_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Photon_RX_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Photon_RX_GetValue()           PORTCbits.RC3
#define Photon_RX_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Photon_RX_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Photon_RX_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define Photon_RX_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define Photon_RX_SetPushPull()    do { ODCONCbits.ODCC3 = 0; } while(0)
#define Photon_RX_SetOpenDrain()   do { ODCONCbits.ODCC3 = 1; } while(0)
#define Photon_RX_SetAnalogMode()  do { ANSELCbits.ANSELC3 = 1; } while(0)
#define Photon_RX_SetDigitalMode() do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set Dsp_Red aliases
#define Dsp_Red_TRIS               TRISCbits.TRISC4
#define Dsp_Red_LAT                LATCbits.LATC4
#define Dsp_Red_PORT               PORTCbits.RC4
#define Dsp_Red_WPU                WPUCbits.WPUC4
#define Dsp_Red_OD                ODCONCbits.ODCC4
#define Dsp_Red_ANS                ANSELCbits.ANSELC4
#define Dsp_Red_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Dsp_Red_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Dsp_Red_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Dsp_Red_GetValue()           PORTCbits.RC4
#define Dsp_Red_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Dsp_Red_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Dsp_Red_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define Dsp_Red_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define Dsp_Red_SetPushPull()    do { ODCONCbits.ODCC4 = 0; } while(0)
#define Dsp_Red_SetOpenDrain()   do { ODCONCbits.ODCC4 = 1; } while(0)
#define Dsp_Red_SetAnalogMode()  do { ANSELCbits.ANSELC4 = 1; } while(0)
#define Dsp_Red_SetDigitalMode() do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set Dsp_Green aliases
#define Dsp_Green_TRIS               TRISCbits.TRISC5
#define Dsp_Green_LAT                LATCbits.LATC5
#define Dsp_Green_PORT               PORTCbits.RC5
#define Dsp_Green_WPU                WPUCbits.WPUC5
#define Dsp_Green_OD                ODCONCbits.ODCC5
#define Dsp_Green_ANS                ANSELCbits.ANSELC5
#define Dsp_Green_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Dsp_Green_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Dsp_Green_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Dsp_Green_GetValue()           PORTCbits.RC5
#define Dsp_Green_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Dsp_Green_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Dsp_Green_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define Dsp_Green_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define Dsp_Green_SetPushPull()    do { ODCONCbits.ODCC5 = 0; } while(0)
#define Dsp_Green_SetOpenDrain()   do { ODCONCbits.ODCC5 = 1; } while(0)
#define Dsp_Green_SetAnalogMode()  do { ANSELCbits.ANSELC5 = 1; } while(0)
#define Dsp_Green_SetDigitalMode() do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set Dsp_Blue aliases
#define Dsp_Blue_TRIS               TRISCbits.TRISC6
#define Dsp_Blue_LAT                LATCbits.LATC6
#define Dsp_Blue_PORT               PORTCbits.RC6
#define Dsp_Blue_WPU                WPUCbits.WPUC6
#define Dsp_Blue_OD                ODCONCbits.ODCC6
#define Dsp_Blue_ANS                ANSELCbits.ANSELC6
#define Dsp_Blue_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define Dsp_Blue_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define Dsp_Blue_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define Dsp_Blue_GetValue()           PORTCbits.RC6
#define Dsp_Blue_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define Dsp_Blue_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define Dsp_Blue_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define Dsp_Blue_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define Dsp_Blue_SetPushPull()    do { ODCONCbits.ODCC6 = 0; } while(0)
#define Dsp_Blue_SetOpenDrain()   do { ODCONCbits.ODCC6 = 1; } while(0)
#define Dsp_Blue_SetAnalogMode()  do { ANSELCbits.ANSELC6 = 1; } while(0)
#define Dsp_Blue_SetDigitalMode() do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()     do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()   do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF1 pin functionality
 * @Example
    IOCAF1_ISR();
 */
void IOCAF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_InterruptHandler);

*/
extern void (*IOCAF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF1_SetInterruptHandler() method.
    This handler is called every time the IOCAF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);

*/
void IOCAF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF3 pin functionality
 * @Example
    IOCAF3_ISR();
 */
void IOCAF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_InterruptHandler);

*/
extern void (*IOCAF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);

*/
void IOCAF3_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/