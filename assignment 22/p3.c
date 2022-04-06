#include<stdio.h>
int Diffrence(char *ptr)
{
int iscnt=0,iccnt=0,idiff=0;
while(*ptr!='\0')
{
if(*ptr>='a'&&*ptr<='z')
{
iscnt++;
}
else if(*ptr>='A'&&*ptr<='Z')
{
iccnt++;
}
*ptr++;
}
idiff=iccnt-iscnt;
if(idiff<0)
{
idiff=-idiff;
return idiff;
}
else 
{
return idiff;
}
}
int main()
{
char str[20];
int iret=0;
printf("enter string \n");
scanf("%[^'\n']s",str);
iret=Diffrence(str);
printf("diffrence between small and capital letters in a string is\n %d",iret);
return 0;
}