#include<stdio.h>
void display(int ino)
{
int idigit=0;
if(ino<0)
{
ino=-ino;
}
while(ino>0)
{
idigit=ino%10;
printf("%d\n",idigit);
ino=ino/10;
}
}
int main()
{
int ival=0;
printf("enter value");
scanf("%d",&ival);
display(ival);
return 0;
}
