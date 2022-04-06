#include<stdio.h>
void DisplayDigit(char *ptr)
{
while(*ptr!='\0')
{
if(*ptr>='0'&&*ptr<='9')
{
printf("%c",*ptr);
}
*ptr++;
}
}
int main()
{
char str[20];
printf("enter string \n");
scanf("%[^'\n']s",str);
DisplayDigit(str);
return 0;
}