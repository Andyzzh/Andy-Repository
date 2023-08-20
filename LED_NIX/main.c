#include <REGX52.H>

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
	int num = 0;
	while(1)
	{
		P2 = 0x1c;           //0001 1100
		P0 = 0x30;      //0011 0000
		_delayms(5);
		P2 = 0x18;           //0001 1000
		P0 = 0x5b;      //0101 1011
		_delayms(5);
	}
}