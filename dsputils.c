/*
 * dsputils.c
 *
 *  Created on: May 19, 2016
 *      Author: alex
 */

#include "dsputils.h"
#include "alvutils.h"

#define COL_COUNT (DSP_WIDTH/CHAR_WIDTH)
#define ROW_COUNT (DSP_HEIGHT/CHAR_HEIGHT)

int cursorX=0; //poz absoluta in caractere
int cursorY=0;

void dspRst(){
	RIT128x96x4Clear();
	cursorX=0;
	cursorY=0;
}

int goTo(int x, int y){ /*deplsare absoluta in coordonate de caracter*/
	if ((x>COL_COUNT)||(y>ROW_COUNT)){
		return 0;
	}
	else {
		cursorX=x;
		cursorY=y;
		return 1;
	}
}

void printDec(int n){
	int len=nCif(n);
	if (n<0){
		len++;
	}
	if (len>(COL_COUNT-cursorX)){
		printLn();
	}

	printUl(n, cursorX*CHAR_WIDTH, cursorY*CHAR_HEIGHT);
	cursorX+=len;
}

void printLnDec(int n){

}

void printLn(){
	cursorX=0;
	cursorY++; /* nu e tratata situatia cand ajung jos de tot in display */
}
