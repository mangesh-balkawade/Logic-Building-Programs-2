#include<stdio.h>
int nonfactadd(int ino)
{
int icnt=0,ifact=0,inonfact=0;
for(icnt=1;icnt<ino;icnt++)
{
if((ino%icnt==0))
{
ifact=ifact+icnt;
}
else
{
inonfact=inonfact+icnt;
}
}
return (ifact-inonfact);
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