#include<stdio.h>
void Strcat(char *ptr,char *str)
{
while(*ptr!='\0')
{
*ptr++;
}
while(*str!='\0')
{
*ptr=*str;
*ptr++;
*str++;
}
*ptr='\0';
}
int main()
{
char c[50];
printf("enter string 1\n");
scanf("%[^'\n']s",c);
char d[50];
printf("enter string 2\n");
scanf(" %[^'\n']s",d);
Strcat(c,d);
printf("%s",c);
return 0;
}
