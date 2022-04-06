#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBit(unit ino)
{
	unit imask=0x80000001;
	unit iret=(imask&ino);
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
	unit ival=0;
	printf("enter no\n");
	scanf("%d",&ival);
	bool bret=false;
	bret=ChkBit(ival);
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
	