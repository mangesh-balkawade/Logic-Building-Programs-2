#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBit(unit ino,unit ipos1,unit ipos2,unit ipos3,unit ipos4)
{
	unit imask1=0x00000001;
	imask1=imask1<<(ipos1-1);
	unit imask2=0x00000001;
	imask2=imask2<<(ipos2-1);
	unit imask3=0x00000001;
	imask3=imask3<<(ipos3-1);
	unit imask4=0x00000001;
	imask4=imask4<<(ipos4-1);
	unit imaska=(imask1|imask2);
	unit imaskb=(imask3|imask4);
	unit imask=(imaska|imaskb);
	unit iret= (imask&ino);
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
	unit ival=0;unit ibit1=0,ibit2=0,ibit3=0,ibit4=0;
	printf("enter no\n");
	scanf("%d",&ival);
	printf("enter position\n");
	scanf("%d",&ibit1);
	printf("enter position\n");
	scanf("%d",&ibit2);
	printf("enter position\n");
	scanf("%d",&ibit3);
	printf("enter position\n");
	scanf("%d",&ibit4);
	bool bret=false;
	bret=ChkBit(ival,ibit1,ibit2,ibit3,ibit4);
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
	