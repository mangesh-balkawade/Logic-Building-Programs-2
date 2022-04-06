#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char c)
{
if((c>='A'&&c<='Z'))
{
return true;
}
else
{
return false;
}
}
int main()
{
char ch='\0';
bool bret=false;
printf("enter character\n");
scanf("%c",&ch);
bret=ChkCapital(ch);
if(bret==true)
{
printf("character is capital ");
}
else
{
printf("character not a capital");
}
return 0;
}