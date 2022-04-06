#include<stdio.h>
void display(int ino)
{
int icnt=0;
for(icnt=1;icnt<=ino;icnt++)
{
printf("*");
}
}
int main()
{
int ival=0;
printf("enter no ");
scanf("%d",&ival);
display(ival);
}