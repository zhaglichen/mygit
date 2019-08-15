#include<reg51.h>
sbit led=P1^0;
void delay();
void main()
{
	while(1)
	{
		led=0;
		delay();
		led=1;
		delay();
	}
}
void delay()
{
	unsigned char i;
	for(i=200;i>0;i--);
}