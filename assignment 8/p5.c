#include<stdio.h>
void rangeinrev(int ino1,int ino2)
{
int icnt=0;
for(icnt=ino2;icnt>=ino1;icnt--)
{
printf("%d ",icnt);
}
}
int main()
{
int ival1=0,ival2=0;
printf("enter ival1\n");
scanf("%d",&ival1);
printf("enter ival2\n");
scanf("%d",&ival2);
rangeinrev(ival1,ival2);
return 0;
}