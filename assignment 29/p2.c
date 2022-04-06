#include<stdio.h>
typedef unsigned int unit;
unit ChkBit(int ino ,int ipos)
{
unit imask=0x00000001;
imask = imask<<(ipos-1);
unit imask2=0x00000000;
imask2=imask2|ino;
unit iret=(imask^imask2);
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