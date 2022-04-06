#include<stdio.h>
void StrCpyCap(char *ptr,char *str)
{
while(*ptr!='\0')
{

 if(*ptr>='A'&&*ptr<='Z')
{
*ptr=*ptr+32;
*str=*ptr;
}
else
{
	*str=*ptr;
}
*str++;
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
StrCpyCap(c,d);
printf("%s",d);
return 0;
}
