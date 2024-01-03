#include <main.h>
#include <PORT.H>


void docP10dieuKhienP21();
void suDung2NutNhan();
void daoTrangThaiLed();

//chu y khai bao P20=0 trc wwhile(1)
void docP10dieuKhienP21(){
     if(P1_0==0)
		  {
				P2_0=1;
			}else{
				P2_0=0;
			}
}


//su dung hai nut nhan P1^2 dieu khien led p20
void suDung2NutNhan(){
      LED=0;
		while(1)
		{
			 // xuat ra tin hieu trc khi doc dam bao chuong trinh luon dung
			ON_BTT=1;
			if(ON_BTT==0){
			 LED=1;
			}
			OFF_BTT==1;
			if(OFF_BTT==0){
			 LED=0;
			}
		}
}


//dao trang thai led P2^0 
//su dung 1 nut nhan P1^0 
//cach chong doi phim	
void daoTrangThaiLed()
{
	  LED=0;
		while(1)
		{
			//xuat muc 1 trc khi kt dam bao nut ko bi anh huong boi cac chuong trinh khac
			changeStatus_BTT=1;
			//neu co nhan nut se dao trang thai cua bong den
			if(changeStatus_BTT==0){
				  Delay_ms(20);//chong doi phim 
					if(changeStatus_BTT==0){
						 LED=!LED;
						 //neu nut nhan van dang dc giu 
						 //thi chuong trinh se dung lai tai vong while
						 //ko kiem tra tiep lam vxl hieu lam da nhan nut lan nua
						 while(changeStatus_BTT==0){continue;}
				}
			}
		}
}

void main()
{			
 
		while(1)
		{
			daoTrangThaiLed();
		}
}

