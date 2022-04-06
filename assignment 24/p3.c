#include<stdio.h>
int FirstIndex(char *ptr ,char c)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr!=c)
{
icnt++;
}
else if(*ptr==c)
{
	break;
}
*ptr++;
}
if(*ptr!=c)
{
	return -1;
}
else
{
return icnt;
}
}
int main()
{
char c[20];char ch='\0';int iret=0;
printf("enter string\n");
scanf("%[^'\n']s",c);
printf("enter character\n");
scanf(" %c",&ch);
iret=FirstIndex(c,ch);
printf("first index of character %d\n",iret);
return 0;
}
