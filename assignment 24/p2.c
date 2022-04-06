#include<stdio.h>
int CountChar(char *ptr ,char c)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr==c)
{
icnt++;
}
*ptr++;
}
return icnt;
}
int main()
{
char c[20];char ch='\0';int iret=0;
printf("enter string\n");
scanf("%[^'\n']s",c);
printf("enter character\n");
scanf(" %c",&ch);
iret=CountChar(c,ch);
printf("frequency of charactre is %d\n",iret);
return 0;
}
