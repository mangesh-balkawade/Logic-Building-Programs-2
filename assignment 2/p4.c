#include<stdio.h>
void display(int ino1,int ino2)
{
int icnt;
for(icnt=1;icnt<=ino2;icnt++)
{
printf("%d",ino1);
}
}
int main()
{
int ival=0,ival2=0;
printf("enter number \n ");
scanf("%d",&ival);
printf("enter number \n ");
scanf("%d",&ival2);
display(ival,ival2);
}