#include<stdio.h>
void Strcpy(char *ptr,char *str)
{
while(*ptr!='\0')
{
*str=*ptr;
*ptr++;
*str++;
}
*str='\0';
}
int main()
{
char c[20];
printf("enter string\n");
scanf("%[^'\n']s",c);
char d[20];
Strcpy(c,d);
printf("%s",d);
return 0;
}
