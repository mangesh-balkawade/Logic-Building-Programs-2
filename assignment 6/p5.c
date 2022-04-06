#include<stdio.h>
int cntdiffevenodd(int ino)
{
int idiff=0,isume=0,isumo=0,idigit=0;
if(ino<0)
{
ino=-ino;
}
while(ino>0)
{
idigit=ino%10;
if(idigit%2==0)
{
isume=isume+idigit;
}
else
{
isumo=isumo+idigit;
}
ino=ino/10;
}
idiff=isume-isumo;
return idiff;
}
int main()
{
int ival=0,iret=0;
printf("enter no \n");
scanf("%d",&ival);
iret=cntdiffevenodd(ival);
printf("diffrence between even and odd digits is %d",iret);
return 0;
}
