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
		P2 = (1 << num);
		_delayms(500);
		num++;
		if(num > 7)
			num = 0;
	}
}