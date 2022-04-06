#include<stdio.h>
#include<stdbool.h>
bool ChkSpecialAscii(char c)
{
if((c>=33&&c<=42))
{
return true;
}
else
{
return false;
}
}
bool ChkSpecial(char c)
{
if((c=='!'||c=='@'||c=='#'||c=='$'||c=='%'||c=='&'||c=='^'||c=='*'))
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
bret=ChkSpecialAscii(ch);
if(bret==true)
{
printf("character is special symbol\n ");
}
else
{
printf("character not a special symbol\n");
}
bret=ChkSpecial(ch);
if(bret==true)
{
printf("character is special symbol ");
}
else
{
printf("character not a special symbol");
}
return 0;
}