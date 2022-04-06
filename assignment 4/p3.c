#include<stdio.h>
int nonfact(int ino)
{
int icnt=0;
for(icnt=1;icnt<ino;icnt++)
{
if((ino%icnt!=0))
{
printf("%d\t",icnt);
}
}
}
int main()
{
int ival=0;
printf("enter value");
scanf("%d",&ival);
nonfact(ival);
return 0;
}