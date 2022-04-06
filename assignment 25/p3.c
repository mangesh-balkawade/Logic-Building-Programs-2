#include<stdio.h>
void Strcpyupr(char *ptr,char *str)
{
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
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
Strcpyupr(c,d);
printf("%s",d);
return 0;
}
