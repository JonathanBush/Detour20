/* 
 * File:   colors.h
 * Author: jon
 *
 * Created on April 18, 2018, 11:32 AM
 */

#ifndef COLORS_H
#define	COLORS_H

typedef unsigned long color;

#define RGB(r,g,b) (unsigned long)(((unsigned long)g) | ((unsigned long)r << 8) | ((unsigned long)b << 16))

#define RED RGB(255, 0, 0)
#define GREEN RGB(0, 255, 0)
#define BLUE RGB(0, 0, 255)


#endif	/* COLORS_H */

