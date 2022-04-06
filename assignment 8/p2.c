#include<stdio.h>
void rangedisplayeven(int ino1,int ino2)
{
int icnt=0;
for(icnt=ino1;icnt<=ino2;icnt++)
{
if(icnt%2==0)
{
printf("%d  ",icnt);
}
}
}
int main()
{
int ival1=0,ival2=0;
printf("enter ival1\n");
scanf("%d",&ival1);
printf("enter ival2\n");
scanf("%d",&ival2);
rangedisplayeven(ival1,ival2);
return 0;
}