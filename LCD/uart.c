#include "uart.h"
#include <REGX52.H>

void uart_init()
{
	SCON=0X40;
	PCON |= 0X80;
	TMOD &= 0X0F;
	TMOD |= 0X20;
	TL1 = 0XF3;
	TH1 = 0XF3;
	ET1 = 0;
	TR1 = 1;
}

void uart_send(unsigned char c)
{
	SBUF = c;
	while(TI==0);
	TI=0;
//	while(*str != '\0')
//	{
//		SBUF = *str;
//		while(TI==0);
//		TI=0;
//		str++;
//	}
}