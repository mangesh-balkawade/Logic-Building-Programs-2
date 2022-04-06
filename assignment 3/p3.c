#include<stdio.h>
int printeven(int ino)
{
int icnt=0;
if(ino<=0)
{
	ino=-ino;
}
for(icnt=1;icnt<=ino;icnt++)
{
if((ino%icnt==0)&&(icnt%2==0))
printf("%d\t",icnt);
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