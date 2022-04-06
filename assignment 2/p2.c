#include<stdio.h>
void display(int ino)
{
int icnt=0;
while(ino>icnt)
{
printf("*");
ino--;
}
}
int main()
{
int ival=0;
printf("enter no ");
scanf("%d",&ival);
display(ival);
}