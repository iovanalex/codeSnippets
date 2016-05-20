/*
 * dsputils.h
 *
 *  Created on: May 19, 2016
 *      Author: alex
 */

#ifndef DSPUTILS_H_
#define DSPUTILS_H_

#include "drivers/rit128x96x4.h"

#define DSP_WIDTH 128
#define DSP_HEIGHT 96
#define CHAR_WIDTH 6
#define CHAR_HEIGHT 8


void dspRst();
int goTo(int, int);
void printDec(int);
void printLnDec(int);
void printLn();


#endif /* DSPUTILS_H_ */
