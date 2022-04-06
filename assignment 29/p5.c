#include<stdio.h>
typedef unsigned int unit;
unit ChkBit(int ino ,int ipos)
{
unit imask=0xf000000f;
imask = imask<<(ipos-1);
unit iret=(imask^ino);
return iret;
}
int main()
{
	unit ival=0,ibit=0;unit iret=0;
	printf("enter no\n");
	scanf("%d",&ival);
	printf("enter bit\n");
	scanf("%d",&ibit);
	iret=ChkBit(ival,ibit);
	printf("%d",iret);
	return 0;
}