#include<stdio.h>
int nonfactadd(int ino)
{
int icnt=0,idigit=0;
for(icnt=1;icnt<ino;icnt++)
{
if((ino%icnt!=0))
{
idigit=idigit+icnt;
}
}
return idigit;
}
int main()
{
int ival=0,iret=0;
printf("enter value");
scanf("%d",&ival);
iret=nonfactadd(ival);
printf("%d",iret);
return 0;
}