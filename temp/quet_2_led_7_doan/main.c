#include<main.h>
#include "..\lib\delay.h"
// dung Schematic DenGiaoThong

#define LED_PORT P3
sbit led1_pin= P2^0;
sbit led2_pin= P2^1;
// su dung LED 7 Seg Editor de lay cac ma hex gan voi so nao
unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main(){
  unsigned char i=0;
	while (1)
  {  
					led1_pin=0;	
					LED_PORT=code7Seg[2];
					Delay_ms(1);
					led1_pin=1;	
					led2_pin=0;	
					LED_PORT=code7Seg[6
		];
					Delay_ms(1);
					led2_pin=1;	
  }
}




