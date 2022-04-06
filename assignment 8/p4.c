#include<stdio.h>
int rangesumeven(int ino1,int ino2)
{
int icnt=0,isum=0;
if(((ino1<0)||(ino2<0)))
{
	printf(" invalid range");
}
else
{	
for(icnt=ino1;icnt<=ino2;icnt++)
{
if(icnt%2==0)
{
isum=isum+icnt;
}
}
printf("%d sum of even no between range",isum);
}
}
int main()
{
int ival1=0,ival2=0;
printf("enter ival1\n");
scanf("%d",&ival1);
printf("enter ival2\n");
scanf("%d",&ival2);
rangesumeven(ival1,ival2);
return 0;
}