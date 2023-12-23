#include <REGX52.H>
#include <..\Lib\Delay.h>

void daoByteP0();
void daoByteP1();
void daoByteP2();
void daoByteP3();
void dichTraiSoAm();



void daoByteP0(){
		P0=0xAA;
		Delay_ms(500);
	  P0=~P0;		// dao bittt cho P0_0
		Delay_ms(500);
	  
}
void daoByteP1(){
		P1=0xAA;;
		Delay_ms(500);
	  P1=~P1;		// dao bittt cho P0_1
		Delay_ms(500); 
}
void daoByteP2(){
		P2=0xAA;;
		Delay_ms(500);
	  P2=~P2;		// dao bittt cho P0_2
		Delay_ms(500);
	  
}

void daoByteP3(){
		P3=0xAA;;
		Delay_ms(500);
	  P3=~P3;		// dao bittt cho P0_3
		Delay_ms(500);
}
////////////////////////////////////////////////////////////////////////
	///phep dich bit
void dichBitP0(){
	  int i;
	  P0=0x80;
	  for(i=0;i<8;i++){
			P0=P0>>1;
			Delay_ms(300);
		}
		
}

void dichTraiSoAm(){
		int i;
		P0=0x01;
	  Delay_ms(300);
	  for(i=0;i<8;i++){
			P0=P0<<1;
			Delay_ms(300);
		}	
}
void dichTraiP1(){
		int i;
		P1=0x01;
	  Delay_ms(300);
	  for(i=0;i<8;i++){
			P1=P1<<1;
			Delay_ms(300);
		}	
		
}

void main(){
	int i;		
	while (1)
	 {
			dichTraiSoAm();	
      dichTraiP1();
		  daoByteP0();
		  
	 }
			
	
}



