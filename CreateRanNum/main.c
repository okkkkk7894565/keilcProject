#include<main.h>
#include "..\lib\delay.h"
// dung Schematic DenGiaoThong

sbit BTN=P1^0;
#define Led P2;

unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main(){
  unsigned char dem=0;
	while (1)
  {  
		BTN=1;
		if (BTN==0)
		{  
		    Delay_ms(20);
				if (BTN==0)
				{  
				  dem++;
				}
		}
		Led = code7Seg[dem%5+1];
  }
}




