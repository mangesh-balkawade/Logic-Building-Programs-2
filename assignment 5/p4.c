#include<stdio.h>
int count4(int ino)
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
if(idigit==4)
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
printf("enter no \n");
scanf("%d",&ival);
iret=count4(ival);
printf("count of 4 is %d",iret);
return 0;
}