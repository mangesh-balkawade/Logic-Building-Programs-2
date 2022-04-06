#include<stdio.h>
#include<stdbool.h>
typedef unsigned int unit;
bool ChkBits(int ino,int ipos1,int ipos2)
{
	unit imask1=0x00000001;
	unit imask2=0x80000000;
    imask1=imask1<<ipos1-1;
	imask2=imask2>>(32-(ipos2-1));
	unit imask=imask1|imask2;
	unit iret=imask&ino;
	if(iret==imask1||iret==imask2)
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
	int ino1=0,ival1=0,ival2=0;bool bret=false;
	printf("enter no\n");
	scanf("%d",&ino1);
	printf("enter pos 1\n");
	scanf("%d",&ival1);
	printf("enter pos 2\n");
	scanf("%d",&ival2);
    bret=ChkBits(ino1,ival1,ival2);
    if(bret==true)
    {
    	printf("bits are on");
    }
    else
    {
    	printf("bits are off" );
    }
    return 0;
}