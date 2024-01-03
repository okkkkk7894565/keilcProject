#include <main.h>
#include "..\lib\Delay.h"

unsigned char code7Seg[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
#define LED_PORT P3 
// define ko co dau;
sbit LED1_PIN= P2^0;
sbit LED2_PIN= P2^1;

// quet phim bam
sbit COL1=P1^0;
sbit COL2=P1^1;
sbit COL3=P1^2;
sbit COL4=P1^3;

sbit ROW1=P1^4;
sbit ROW2=P1^5;
sbit ROW3=P1^6;
sbit ROW4=P1^7;



unsigned char KeyPress(){
				COL1=0;
	    if(ROW1==0) key=1;
	    if(ROW2==0) key=2;
	    if(ROW3==0) key=3;
	    if(ROW4==0) key=4;
				COL2=0;
	    if(ROW1==0) key=5;
	    if(ROW2==0) key=6;
	    if(ROW3==0) key=7;
	    if(ROW4==0) key=8;
				COL3=0;
	    if(ROW1==0) key=9;
	    if(ROW2==0) key=10;
	    if(ROW3==0) key=11;
	    if(ROW4==0) key=12;
				COL4=0;
	    if(ROW1==0) key=13;
	    if(ROW2==0) key=14;
	    if(ROW3==0) key=15;
	    if(ROW4==0) key=16;
			return key;
	
}

void main(){
	unsigned char key, tmp;
	unsigned char chuc,donvi;

		while(1)
		{ 
			key= KeyPress();
			if(key!=0){
					tmp=key;
			}
							chuc = tmp /10;// lay phan nguyen 
							donvi = tmp %10;//// lay phan du
			
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
