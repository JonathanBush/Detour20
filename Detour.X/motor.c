#include <xc.h>
#include "mcc_generated_files/mcc.h"

#include "mcc_generated_files/pin_manager.h"
#include "motor.h"


unsigned char pos[4] = {0, 0, 0, 0};
/* initialize the motors to their starting positions */
void motor_init()
{
    int i;
    for (i = 0; i < 4; ++i) {
        motor_rotate(i, pos[i]);
    }
}

/* rotate the disk in this direction */
void motor_rotate(unsigned char instance, unsigned char clockwise)
{
    if (clockwise) {
        MtrDir_SetHigh();
    }
    __delay_ms(100);
    switch (instance) {
        case 0:
            Mtr1_SetHigh();
            break;
        case 1:
            Mtr2_SetHigh();
            break;
        case 2:
            Mtr3_SetHigh();
            break;
        case 3:
            Mtr4_SetHigh();
            break;
    }
    __delay_ms(500);
    Mtr1_SetLow();
    Mtr2_SetLow();
    Mtr3_SetLow();
    Mtr4_SetLow();
    MtrDir_SetLow();
}

/* get the current position of this disk */
unsigned char motor_getPos(unsigned char instance) {
    return pos[instance];
}

/* rotate this disk to the other position */
unsigned char motor_flip(unsigned char instance) {
    pos[instance] = !pos[instance];
    motor_rotate(instance, pos[instance]);
}