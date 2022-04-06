#include<stdio.h>
int display(int row , int col)
{
int i=0;
int j=0;
for(i=1;i<=row;i++)
{
for(j=1;j<=col;j++)
{
if(i<j)
{	
printf("*\t");
}
else if(i==j)
{
printf("$\t");
}
else
{
printf("#\t");
}
}
printf("\n");
}
return 0;
}
int main()
{
int ival1=0;
int ival2=0;
printf("enter row");
scanf("%d",&ival1);
printf("enter col");
scanf("%d",&ival2);
display(ival1,ival2);
return 0;
}

