#include<stdio.h>
typedef unsigned int unit;
unit ChkBit(unit ino)
{
	unit imask=0x00000000;unit ians=0;
	unit iret=(imask|ino);
	unit imask1=0x00000040;
	if(iret==ino)
	{
		ians=(imask1^ino);
	}
	else
	{
	return -1;
	}
	return ians;	
}
int main()
{
	unit ival=0;unit iret=0;
	printf("enter no\n");
	scanf("%d",&ival);
	iret=ChkBit(ival);
	printf("%d",iret);
	return 0;
}
	