#include<reg51.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int
//??
void DelayMS(uint x)
{
	uchar i;
	while(x--)
	{
		for(i=0;i<120;i++);
	}
}
//???
void main()
{
	uchar i,j;
	j=0x01;
	while(1)
	{
		for(i=0;i<7;i++)
		{	
			P1=~j;
			j=_crol_(j,1); //??????
			
			DelayMS(500);
		}
		for(i=0;i<7;i++)
		{	
			P1=~j;
			j=_cror_(j,1); //??????
			
			DelayMS(500);
		}
	}
}
