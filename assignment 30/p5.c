#include<stdio.h>
typedef unsigned int unit;
unit ToggleBitRange(int ino,int ipos1,int ipos2)
{
	unit imask1=0xffffffff;
	printf("%x\n",imask1);
	unit imask2=0xffffffff;
	printf("%x\n",imask2 );
    imask1=imask1<<ipos1-1;
    printf("%x\n",imask1);
	imask2=imask2>>(32-ipos2);
	printf("%x\n",imask2 );
	unit imask=imask1&imask2;
	printf("%x\n",imask );
	unit iret=imask^ino;
	return iret;
}
int main()
{
	int ino1=0,ival1=0,ival2=0;int iret=0;
	printf("enter no");
	scanf("%d",&ino1);
	printf("enter pos 1");
	scanf("%d",&ival1);
	printf("enter pos 2");
	scanf("%d",&ival2);
    iret=ToggleBitRange(ino1,ival1,ival2);
    printf("aftre toggle no is %d \n",iret);
    return 0;
}