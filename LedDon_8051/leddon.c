#include <REGX52.H>

void Delay_ms(int time){
  int i,y;
	for(i=0;i<=time;i++){
		for(y=0;y<=123;y++){}
	}
}

void main(){
  while(1)
  {
   P0_0=0;
	 Delay_ms(100);
	 P0_0=1;
	 Delay_ms(100);
  } 
}