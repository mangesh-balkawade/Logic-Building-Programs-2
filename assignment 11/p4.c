#include<stdio.h>
void display(int row , int col)
{
int i=0;
int j=0;
int r=row;
for(i=1;i<=row;i++,r--)
{
for(j=1;j<=col;j++)
{
printf("%d  ",r);
}
printf("\n");
}
}
int main()
{
int ivalue1=0;
int ivalue2=0;
printf("enetr row");
scanf("%d",&ivalue1);
printf("enetr column");
scanf("%d",&ivalue2);
display(ivalue1,ivalue2);
return 0;
}