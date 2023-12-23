#include<main.h>
#include "..\lib\delay.h"

sbit DEN_DO=P0^0;
sbit DEN_XANH=P0^1;
sbit DEN_VANG=P0^2;
#define led_chuc
#define led_donvi

unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main(){
  singed char i;
	while (1)
  {  
		// den do
		DEN_DO=0;
		DEN_XANH=1;
		DEN_VANG=1;
    for (i=20;i>=0;i--){
		  led_chuc=code7Seg[i/10];
			led_donvi=code7Seg[i%10];
		}
		// den vang
		DEN_DO=1;
		DEN_XANH=1;
		DEN_VANG=0;
    for (i=20;i>=0;i--){
		  led_chuc=code7Seg[i/10];
			led_donvi=code7Seg[i%10];
		}
				// den vang
		DEN_DO=1;
		DEN_XANH=0;
		DEN_VANG=1;
    for (i=20;i>=0;i--){
		  led_chuc=code7Seg[i/10];
			led_donvi=code7Seg[i%10];
		}
  }

}




