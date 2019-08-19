#include <reg51.h>
#define uchar unsigned char
#define uint unsigned int
void delay() {
	uint i, j;
	for (i = 10; i > 0; i--)
	for (j = 1000; j > 0; j--);
}

void main() {
	P0=0x00;
	P2=0xff;
	while(1) {
			P0=~P2; 
			delay(); 
	}
}
