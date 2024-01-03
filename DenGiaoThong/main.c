#include<main.h>
#include "..\lib\delay.h"
// dung Schematic DenGiaoThong


sbit led_vang=P0^1;
sbit led_xanh=P0^2;
sbit led_do=P0^0;
#define led_chuc P3
#define led_donvi P2

unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main(){
  unsigned char i=0;
	while (1)
  {  
			led_vang=1;
			led_xanh=1;
			led_do=0;
			for(i=20;i>0;i--){
					led_chuc=code7Seg[i%10];
					led_donvi=code7Seg[i/10];
					Delay_ms(1000);
			}
			
			
			led_vang=0;
			led_xanh=1;
			led_do=1;
			for(i=20;i>0;i--){
					led_chuc=code7Seg[i%10];
					led_donvi=code7Seg[i/10];
					Delay_ms(1000);
			}
			
			led_vang=1;
			led_xanh=0;
			led_do=1;
			for(i=20;i>0;i--){
					led_chuc=code7Seg[i%10];
					led_donvi=code7Seg[i/10];
					Delay_ms(1000);
			}
  }
}




