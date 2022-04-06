#include<stdio.h>
int printeven(int ino)
{
int icnt=0;
for(icnt=1;icnt<=ino;icnt++)
{
printf("%d\t",2*icnt);
}
}
int main()
{
int ival=0;
printf("enter value");
scanf("%d",&ival);
printeven(ival);
return 0;
}