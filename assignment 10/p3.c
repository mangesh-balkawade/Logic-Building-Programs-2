#include<stdio.h>
void display(int row, int col)
{
int i=0;
int j=0;
int c=col;
for(i=1;i<=row;i++)
{
for(j=1,c=5;j<=col;j++,c--)
{
printf("%d",c);


}
printf("\n");
}
}
int main()
{
int ivalue1=0;
int ivalue2=0;
printf("enter row");
scanf("%d",&ivalue1);
printf("enter column");
scanf("%d",&ivalue2);
display(ivalue1,ivalue2);
return 0;
}
