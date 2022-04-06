#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char c)
{
if((c>='0'&&c<='9'))
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
bret=ChkDigit(ch);
if(bret==true)
{
printf("character is digit ");
}
else
{
printf("character not a digit");
}
return 0;
}