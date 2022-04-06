#include<stdio.h>
#include<string.h>
int ReverseString(char *);
int main()
{
char str[20];
int iret=0;
printf("enter string \n");
scanf("%[^'\n']s",str);
ReverseString(str);
//printf("%d",iret);
return 0;
}
int ReverseString(char *ptr)
{
	*ptr='\0';
	while(*ptr!='a')
	{
printf("%c",*ptr);
*ptr--;
	}
}