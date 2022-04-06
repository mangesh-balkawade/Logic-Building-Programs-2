#include<stdio.h>
#include<stdbool.h>
bool ChkAlph(char c)
{
if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
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
bret=ChkAlph(ch);
if(bret==true)
{
printf("character is alphabet ");
}
else
{
printf("character not a alphbet");
}
return 0;
}