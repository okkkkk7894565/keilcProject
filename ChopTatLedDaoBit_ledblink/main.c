#include <REGX52.H>
#include <..\Lib\Delay.h>
void daoToanboP0();
void daoXenKeP2();

void daoByteP0(){
		P0=0xFF;
		Delay_ms(500);
	  P0=~P0;		// dao bittt cho P0_0
		Delay_ms(500);
	  
}

void daoBitP2(){
		P2=0xAA;
		Delay_ms(500);
	  P2=~P2;		// dao bittt cho P0_0
	  Delay_ms(500);
}

void main(){
	
	while(1){
		daoByteP0();
		daoBitP2();
	}	
}



