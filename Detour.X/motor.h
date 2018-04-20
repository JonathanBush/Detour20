#ifndef MOTOR_H
#define MOTOR_H

/* initialize the motors to their starting positions */
void motor_init();

/* rotate the disk in this direction */
void motor_rotate(unsigned char instance, unsigned char clockwise);

/* rotate this disk to the opposite position */
unsigned char motor_flip(unsigned char instance);

/* get the current position of this disk */
unsigned char motor_getPos(unsigned char instance);

#endif