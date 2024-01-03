#include <regx52.h>

void Delay_ms(int time){
  int i,y;
	for(i=0;i<=time;i++){
		for(y=0;y<=123;y++){}
	}
}

void main(){
   P2_0=0;
	 Delay_ms(100);
	 P2_0=1;
	 Delay_ms(100);
}