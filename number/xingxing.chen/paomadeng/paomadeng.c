#include<reg51.h>
#include<intrins.h>
void delay();
unsigned char a;
void main()
{
	a=0xfe;
	while(1)
	{
		P1=a;
		delay();
		a=_crol_(a,1);
	}
}
void delay()
{
	int i;
	for(i=65525;i>0;i--);
}