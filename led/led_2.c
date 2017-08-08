#include <reg51.H>
sbit K1=P3^0;
sbit L1=P1^0;
void main(void)
{
	while(1)
	{
		L1=K1;
	}
}
