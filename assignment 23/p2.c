#include<stdio.h>
void DisplayCapital(char *ptr)
{
while(*ptr!='\0')
{
if(*ptr>='a'&&*ptr<='z')
{
*ptr=*ptr-32;
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
DisplayCapital(str);
return 0;
}