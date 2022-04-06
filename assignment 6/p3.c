#include<stdio.h>
int countrange(ino)
{
int idigit=0,icnt=0;
if(ino<0)
{
	ino=-ino;
}
while(ino>0)
{
idigit=ino%10;
if(((idigit>3)&&(idigit<7)))
{
icnt=icnt+1;
}
ino=ino/10;
}
return icnt;
}
int main()
{
int ival=0,iret=0;
printf("enter no\n");
scanf("%d",&ival);
iret=countrange(ival);
printf("no between 3 & 7 is%d",iret);
return 0;
}
