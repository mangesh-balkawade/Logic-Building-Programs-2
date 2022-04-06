#include<stdio.h>
void Display(char c)
{
if((c>='A'&&c<='Z'))
{
	c=c+32;
printf("%c",c);
}
else if(((c>='a'&&c<='z')))
{
	c=c-32;
printf("%c",c);
}
else
{
printf("%c",c);
}
}
int main()
{
char ch='\0';
printf("enter character\n");
scanf("%c",&ch);
Display(ch);
return 0;
}