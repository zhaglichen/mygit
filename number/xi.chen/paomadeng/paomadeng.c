#include<reg51.h>
 
void delay(int n)
{
	int i = 0;
	int j = 0;
	for(i = n; i > 0; i--)
	{
		for(j = 110; j > 0; j--)
		{
			;
		}
	}
}
 
int a[8] = {1, 2, 4, 8, 16, 32, 64, 128};
 
void main() 
{
	int i = 0;
	P1 = 1;
	while(1)
	{
		P1 = a[i++];
		delay(100);
 
		if(i == 8)
		{
			i = 0;
		}
	}
}
