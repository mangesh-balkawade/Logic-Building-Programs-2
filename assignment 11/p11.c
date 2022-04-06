#include<stdio.h>
void display(int row , int col)
{
int i=0;
int j=0;
char c = '\0';
for(i=1;i<=row;i++)
{
for(j=1,c='A';j<=col;j++,c++)
{
printf("%c",c);
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
