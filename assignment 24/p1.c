#include<stdio.h>
#include<stdbool.h>
bool CheckChar(char *ptr,char ch)
{
while(*ptr!='\0')
{
if(*ptr==ch)
{
return true;
}
*ptr++;
}
return false;
}
int main()
{
char c[20];bool bret=false;
char cn='\0';
printf("enter string \n");
scanf("%[^'\n']s",&c);
printf("enter charactar that has to find \n");
scanf(" %c",&cn);
bret=CheckChar(c,cn);
if(bret==true)
{
printf("character found");
}
else
{
printf("character not found");
}
return 0;
}