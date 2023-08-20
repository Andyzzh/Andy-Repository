#include <REGX52.H>


void Delayms(int ms)		//@12.000MHz
{
	unsigned char data i, j;
	while(ms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}





void main()
{
	while(1)
	{
		if(P3_1 == 0)
		{
				P2_0 = ~P2_0;
				Delayms(20);
				while(P3_1==0);
				Delayms(20);
		}
		
	}
}