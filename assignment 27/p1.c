#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBit(unit ino,unit ipos)
{
	unit imask=0x00000001;
	imask=imask<<(ipos-1);
	unit iret=ino&imask;
	if(iret==imask)
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
	unit ival=0;unit ibit=0;
	printf("enter no\n");
	scanf("%d",&ival);
	printf("enter position\n");
	scanf("%d",&ibit);
	bool bret=false;
	bret=ChkBit(ival,ibit);
	if(bret==true)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}
	return 0;
}
	