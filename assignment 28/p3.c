#include<stdio.h>
typedef unsigned int unit;
unit ChkBit(unit ino)
{
	unit imask=0x00000040;unit ians=0;
	unit iret=(imask^ino);
	return iret;	
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
	