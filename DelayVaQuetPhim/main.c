//delay va quet phim
#include <main.h>
#include <port.h>




void main()
{
	int i;

	while(1)
	{
			P2=0x00;
			if(Start_BTT==0)
			{
				while(1)
				{
					P2=~P2; 
				  // su dung i lam co xac dinh co  bam nut ko
				  for(i=0;i<=100;i++) 
					{
						 Delay_ms(10); 
						 if(Stop_BTT==0)
						 {
								break;
						 } 
					}  
					
					//neu i< 100 thi co nguoi nhan nut
					if(i<100)
					{
						   // thoat khoi vong while
							 break;
					}
				
				}
			}			
	}
}