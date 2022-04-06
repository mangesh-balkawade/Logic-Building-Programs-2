#include<stdio.h>
void DisplaySmall(char *ptr)
{
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
{
*ptr=*ptr+32;
printf("%c",*ptr);
}
else
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
DisplaySmall(str);
return 0;
}