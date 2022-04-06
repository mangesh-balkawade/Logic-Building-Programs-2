#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBit(int ino ,int ipos)
{
unit imask=0x00000001;
imask = imask<<(ipos-1);
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
	unit ival=0,ibit=0;bool bret=false;
	printf("enter no\n");
	scanf("%d",&ival);
	printf("enter bit\n");
	scanf("%d",&ibit);
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