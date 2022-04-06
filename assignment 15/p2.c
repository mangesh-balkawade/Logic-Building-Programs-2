#include<stdio.h>
void display(int row , int col)
{
int i=0;
int j=0;
int c=col;
for(i=1;i<=row;i++,c--)
{
for(j=1;j<=col;j++)
{
if(j<c)
{
printf("*");
}
else if(j==c)
{
printf("#");
}
else
{
	printf("@");
}
}
printf("\n");
}
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