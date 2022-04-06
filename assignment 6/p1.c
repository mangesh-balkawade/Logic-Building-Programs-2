#include<stdio.h>
int counteven(ino)
{
int idigit=0,icnt=0;
while(ino>0)
{
idigit=ino%10;
if((idigit%2)==0)
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
iret=counteven(ival);
printf("no of even no  is%d",iret);
return 0;
}
