#include<stdio.h>
int Factrev(int ino)
{
int icnt=0;
int ic =ino-1;
for(icnt=ic;icnt>=1;icnt--)
{
if((ino%icnt==0))
printf("%d\t",icnt);
}
}
int main()
{
int ival=0;
printf("enter value");
scanf("%d",&ival);
Factrev(ival);
return 0;
}