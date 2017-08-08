#include <reg51.h>
#define uchar unsigned char
#define uint unsigned int
sbit LED=P1^0;

void DelayMS(uint x)
{
	uchar i;
	while(x--)
	{
		for(i=0;i<120;i++);
	}
}

void main()
{
	LED=0;
	while(1)
	{
		LED=~LED;
		DelayMS(150);
	}
}