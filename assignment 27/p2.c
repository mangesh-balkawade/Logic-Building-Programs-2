#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBit(unit ino,unit ipos1,unit ipos2)
{
	unit imask1=0x00000001;
	imask1=imask1<<(ipos1-1);
	unit imask2=0x00000001;
	imask2=imask2<<(ipos2-1);
	unit imask=(imask1|imask2);
	if((ino&imask)==imask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	unit ival=0;unit ibit1=0,ibit2=0;
	printf("enter no\n");
	scanf("%d",&ival);
	printf("enter position\n");
	scanf("%d",&ibit1);
	printf("enter position\n");
	scanf("%d",&ibit2);
	bool bret=false;
	bret=ChkBit(ival,ibit1,ibit2);
	if(bret==true)
	{
		printf("bits are on");
	}
	else
	{
		printf("bits are off");
	}
	return 0;
}
	