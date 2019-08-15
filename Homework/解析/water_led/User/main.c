#include <reg52.h>

void Delay(u8 ms)
{
        u8 temp;
        
        for( ; ms > 0; ms--)
        {
                for(temp = 200; temp > 0; temp--);
        }
}

void main()
{
		char i=0;
        
        while(1)
        {
				P1=0xfe;
                for(i=0;i<8;i++)
				{
						P1=~((~P1)<<1);
						Delay(100);
				}
        }

}
