#include<stdio.h>
void Display()
{
int i=0;
for(i=0;i<=255;i++)
{
printf("%d\t%o\t%x\t%c \n",i,i,i,i);
}
}
int main()
{
Display();
return 0;
}