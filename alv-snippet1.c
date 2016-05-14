void printUl(unsigned long x, unsigned pxx, unsigned pxy) {
	char buff[10];
	usprintf(buff, "%u", x);
	RIT128x96x4StringDraw(buff, pxx, pxy, 15);
}

void printHex(unsigned long x, unsigned pxx, unsigned pxy) {
	char buff[15];
	usprintf(buff, "0x%x", x);
	RIT128x96x4StringDraw(buff, pxx, pxy, 15);
}

void swap(unsigned *a, unsigned *b) {	
	unsigned aux=*a;
	*a = *b;
	*b = aux;
}

void sort3(unsigned *a, unsigned *b, unsigned *c)
{
	//a<=b<=c;
	//5,7,2
	if (*a > *b) {
		swap(a,b);
	}
	if (*a > *c) {
		swap(a,c);
	}
	if (*b > *c) {
		swap(a,c);
	}
}

void printBinar(unsigned char x, int px, int py) {
	int k, bit;

	for (k = 7; k >= 0; k--) {
		bit = (x & (1 << k)) == 0 ? 0 : 1;
		printUl(bit, px, py);
		px = px + 6;
	}

}

