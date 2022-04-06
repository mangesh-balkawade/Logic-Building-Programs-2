#include<stdio.h>
int CountSmall(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr>='a'&&*ptr<='z')
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
iret=CountSmall(str);
printf("count of smalletters in a string is\n %d",iret);
return 0;
}