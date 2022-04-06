#include<stdio.h>
int multdigit(ino)
{
int idigit=0,imul=1;
if(ino<0)
{
	ino=-ino;
}
while(ino>0)
{
idigit=ino%10;
{
if(idigit==0)
{
}
else
{
imul=imul*idigit;
}
}
ino=ino/10;
}
return imul;
}
int main()
{
int ival=0,iret=0;
printf("enter no\n");
scanf("%d",&ival);
iret=multdigit(ival);
printf("mult of digit is is%d",iret);
return 0;
}
