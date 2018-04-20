/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC18F26K40
        Driver Version    :  1.02
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

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"


void (*IOCAF0_InterruptHandler)(void);
void (*IOCAF1_InterruptHandler)(void);
void (*IOCAF2_InterruptHandler)(void);
void (*IOCAF3_InterruptHandler)(void);
void (*IOCAF4_InterruptHandler)(void);


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */   
    LATA = 0x00;    
    LATB = 0x00;    
    LATC = 0x00;    

    /**
    TRISx registers
    */    
    TRISA = 0x1F;
    TRISB = 0xC0;
    TRISC = 0x08;

    /**
    ANSELx registers
    */   
    ANSELC = 0x00;
    ANSELB = 0xC0;
    ANSELA = 0x00;

    /**
    WPUx registers
    */ 
    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */   
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    

    /**
    IOCx registers
    */
    // interrupt on change for group IOCAF - flag
    IOCAFbits.IOCAF0 = 0;
    IOCAFbits.IOCAF1 = 0;
    IOCAFbits.IOCAF2 = 0;
    IOCAFbits.IOCAF3 = 0;
    IOCAFbits.IOCAF4 = 0;
    // interrupt on change for group IOCAN - negative
    IOCANbits.IOCAN0 = 0;
    IOCANbits.IOCAN1 = 0;
    IOCANbits.IOCAN2 = 0;
    IOCANbits.IOCAN3 = 0;
    IOCANbits.IOCAN4 = 0;
    // interrupt on change for group IOCAP - positive
    IOCAPbits.IOCAP0 = 0;
    IOCAPbits.IOCAP1 = 0;
    IOCAPbits.IOCAP2 = 0;
    IOCAPbits.IOCAP3 = 0;
    IOCAPbits.IOCAP4 = 0;

    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    PIE0bits.IOCIE = 1; 
    
    
    RC4PPS = 0x05;   //RC4->CCP1:CCP1;
    RX1PPSbits.RXPPS = 0x13;   //RC3->EUSART1:RX1;
    RC5PPS = 0x07;   //RC5->PWM3:PWM3;
    RC6PPS = 0x08;   //RC6->PWM4:PWM4;
    RC7PPS = 0x09;   //RC7->EUSART1:TX1;
    T2INPPSbits.T2INPPS = 0x13;   //RC3->TMR2:T2IN;

}       

void PIN_MANAGER_IOC(void)
{   
    // interrupt on change for pin IOCAF0
    if(IOCAFbits.IOCAF0 == 1)
    {
        IOCAF0_ISR();  
    }                          

    // interrupt on change for pin IOCAF1
    if(IOCAFbits.IOCAF1 == 1)
    {
        IOCAF1_ISR();  
    }                          

    // interrupt on change for pin IOCAF2
    if(IOCAFbits.IOCAF2 == 1)
    {
        IOCAF2_ISR();  
    }                          

    // interrupt on change for pin IOCAF3
    if(IOCAFbits.IOCAF3 == 1)
    {
        IOCAF3_ISR();  
    }                          

    // interrupt on change for pin IOCAF4
    if(IOCAFbits.IOCAF4 == 1)
    {
        IOCAF4_ISR();  
    }                          


}

/**
   IOCAF0 Interrupt Service Routine
*/
void IOCAF0_ISR(void) {

    // Add custom IOCAF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF0_InterruptHandler)
    {
        IOCAF0_InterruptHandler();
    }
    IOCAFbits.IOCAF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF0 at application runtime
*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF0
*/
void IOCAF0_DefaultInterruptHandler(void){
    // add your IOCAF0 interrupt custom code
    // or set custom function using IOCAF0_SetInterruptHandler()
}

/**
   IOCAF1 Interrupt Service Routine
*/
void IOCAF1_ISR(void) {

    // Add custom IOCAF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF1_InterruptHandler)
    {
        IOCAF1_InterruptHandler();
    }
    IOCAFbits.IOCAF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF1 at application runtime
*/
void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF1
*/
void IOCAF1_DefaultInterruptHandler(void){
    // add your IOCAF1 interrupt custom code
    // or set custom function using IOCAF1_SetInterruptHandler()
}

/**
   IOCAF2 Interrupt Service Routine
*/
void IOCAF2_ISR(void) {

    // Add custom IOCAF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF2_InterruptHandler)
    {
        IOCAF2_InterruptHandler();
    }
    IOCAFbits.IOCAF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF2 at application runtime
*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF2
*/
void IOCAF2_DefaultInterruptHandler(void){
    // add your IOCAF2 interrupt custom code
    // or set custom function using IOCAF2_SetInterruptHandler()
}

/**
   IOCAF3 Interrupt Service Routine
*/
void IOCAF3_ISR(void) {

    // Add custom IOCAF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF3_InterruptHandler)
    {
        IOCAF3_InterruptHandler();
    }
    IOCAFbits.IOCAF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF3 at application runtime
*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF3
*/
void IOCAF3_DefaultInterruptHandler(void){
    // add your IOCAF3 interrupt custom code
    // or set custom function using IOCAF3_SetInterruptHandler()
}

/**
   IOCAF4 Interrupt Service Routine
*/
void IOCAF4_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCAF4_InterruptHandler)
    {
        IOCAF4_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF4_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void IOCAF4_DefaultInterruptHandler(void){
    // add your IOCAF4 interrupt custom code
    // or set custom function using IOCAF4_SetInterruptHandler()
}

/**
 End of File
*/