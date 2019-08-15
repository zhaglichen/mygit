#include <reg51.h>
typedef unsigned char u8;
typedef unsigned int u16;
sbit led =P1^0;
void delay(u16 i){
    while(i--);
}
void main(){
    while(1){
        led=0;
        delay(200);
        led=1;
        delay(200);
    }
}
