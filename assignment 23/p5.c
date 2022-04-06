#include<stdio.h>
int CountSpace(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr==' ')
{
icnt++;
}
*ptr++;
}
return icnt;
}
int main()
{
char str[20];
int iret=0;
printf("enter string \n");
scanf("%[^'\n']s",str);
iret=CountSpace(str);
printf("count of space in a string is\n %d",iret);
return 0;
}