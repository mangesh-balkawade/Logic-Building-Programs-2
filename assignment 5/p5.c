#include<stdio.h>
int count2(int ino)
{
int idigit=0;
int icnt=0;
if(ino<0)
{
	ino=-ino;
}
while(ino>0)
{
idigit=ino%10;
if(idigit<6)
{
	icnt++;
}
ino=ino/10;
}
return icnt;
}
int main()
{
int ival=0,iret=0;
printf("enter no \n");
scanf("%d",&ival);
iret=count2(ival);
printf("count of 2 is %d",iret);
return 0;
}