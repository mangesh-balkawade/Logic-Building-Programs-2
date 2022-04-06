#include<stdio.h>
void Strcpylwr(char *ptr,char *str)
{
while(*ptr!='\0')
{
if(*ptr>='a'&&*ptr<='z')
{
*str=*ptr;
*str++;
}
*ptr++;
}
*str='\0';
}
int main()
{
char c[20];
printf("enter string\n");
scanf("%[^'\n']s",c);
char d[20];
Strcpylwr(c,d);
printf("%s",d);
return 0;
}
