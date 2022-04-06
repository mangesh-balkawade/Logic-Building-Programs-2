#include<stdio.h>
void display(int row , int col)
{
int i=0;
int j=0;
int r=1,c=1;
for(i=1;i<=row;i++,r=r+col)
{
for(j=1,c=r;j<=col;j++,c++)
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
printf("enetr row");
scanf("%d",&ivalue1);
printf("enetr column");
scanf("%d",&ivalue2);
display(ivalue1,ivalue2);
return 0;
}