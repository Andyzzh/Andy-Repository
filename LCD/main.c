#include <REGX52.H>
#include "LCD1602.H"
#include "uart.h"

void _delayms(int ms)
{
	while(ms--)
	{
			unsigned char i,j;
			i=2;
			j=239;
			do{
				while(--j);
			}while(--i);
	}	
}

void main()
{
		LCD_Init();
		uart_init();
		P1 = 0X7F;    //0111 1111
		uart_send('h');
		while(1)
		{
//				if(P1_3 == 0)
//				{
//					_delayms(20);
//					while(P1_3 == 0)
//						_delayms(20);
//					LCD_ShowChar(1,1,'f');
//				}
				
						
		}
		
}