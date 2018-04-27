/* 
 * File:   timer.h
 * Author: jon
 *
 * Created on April 27, 2018, 2:21 AM
 */

#ifndef TIMER_H
#define	TIMER_H

#include "mcc_generated_files/mcc.h"

void timer_init();
/* set the timeout of this instance to value ms */
void timer_set(uint8_t instance, unsigned int value);
/* check if this timer is expired */
uint8_t timer_expired(uint8_t instance);

#endif	/* TIMER_H */

