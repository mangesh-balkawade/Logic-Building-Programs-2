#include<stdio.h>
void DisplayToggle(char *ptr)
{
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
{
*ptr=*ptr+32;
printf("%c",*ptr);
}
else if(*ptr>='a'&&*ptr<='z')
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
DisplayToggle(str);
return 0;
}