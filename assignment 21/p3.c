#include<stdio.h>
void Display(char c)
{
if((c>='A'&&c<='Z'))
{
	for(c=c;c<='Z';c++)
	{
      printf("%c",c);
    }
}
else if(((c>='a'&&c<='z')))
{
	for(c=c;c>='a';c--)
	{
      printf("%c",c);
    }

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