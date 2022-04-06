#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char c)
{
if((c>='a'&&c<='z'))
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
bret=ChkSmall(ch);
if(bret==true)
{
printf("character is small ");
}
else
{
printf("character not a small");
}
return 0;
}