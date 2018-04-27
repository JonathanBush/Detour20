#include "mcc_generated_files/tmr2.h"
#include "mcc_generated_files/mcc.h"

#define INSTANCES ((uint8_t)6) 

static unsigned int count[INSTANCES];

void timer_isr()
{
    uint8_t i;
    for (i = 0; i < INSTANCES; ++i) {
        count[i] -= (count[i] != 0);
    }
}

void timer_init()
{
    uint8_t i;
    for (i = 0; i < INSTANCES; ++i) {
        count[i] = 0;
    }
    TMR2_Initialize();
    TMR2_SetInterruptHandler(timer_isr);
    TMR2_Start();
}
/* set the timeout of this instance to value ms */
void timer_set(uint8_t instance, unsigned int value)
{
    count[instance] = value;
}
/* check if this timer is expired */
uint8_t timer_expired(uint8_t instance)
{
    return !count[instance];
}
