#include <REGX51.H>
#include "E:\8051project\Lib\delay.h"

void main(){
	while(1){
		P2_0=!P2_0;
    Delay_ms(500);		
	}

}