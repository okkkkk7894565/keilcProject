#include <main.h>
#include "..\lib\Delay.h"

unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
#define LED_PORT P3 
// define ko co dau;
sbit LED1_PIN= P2^0;
sbit LED2_PIN= P2^1;

void main(){
	unsigned char dem;
	unsigned char chuc,donvi;
	unsigned int time;
	while(1){
		 for(dem=0;dem<100;dem++){
					chuc = dem /10;// lay phan nguyen 
					donvi = dem %10;//// lay phan du
				 for(time=0; time<500;time++){
					 	LED_PORT=code7Seg[donvi];
						LED2_PIN=0;
						Delay_ms(1);
						LED2_PIN=1;
					 
					  LED_PORT=code7Seg[chuc];
						LED1_PIN=0;
						Delay_ms(1);
						LED1_PIN=1;

				 }
		 }
	}
}
