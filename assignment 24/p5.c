#include<stdio.h>
int StrLen(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
icnt++;
*ptr++;
}
return icnt;
}
void Reverse(char *ptr)
{
int icnt=0;
int ilen=StrLen(ptr);
for(icnt=ilen-1;icnt>=0;icnt--)
{
printf("%c",ptr[icnt]);
}
}
int main()
{
char c[20];
printf("enter string\n");
scanf("%[^'\n']s",&c);
Reverse(c);
return 0;
}