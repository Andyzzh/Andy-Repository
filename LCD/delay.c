#include "delay.h"


void delay(int ms)
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