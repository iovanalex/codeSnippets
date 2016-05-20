/*
 * alvutils.c
 *
 *  Created on: May 19, 2016
 *      Author: alex
 */

#include "utils/ustdlib.h"
#include "drivers/rit128x96x4.h"

void printUl(unsigned long x, unsigned pxx, unsigned pxy) {
	char buff[10];
	usprintf(buff, "%u", x);
	RIT128x96x4StringDraw(buff, pxx, pxy, 15);
}

int nCif(int n){
	int nc=0;
	while (n){
		n=n/10;
		nc++;
	}
	return nc;
}

