#include<stdio.h>
#include<stdbool.h>
bool ChkVovel(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
{
icnt++;
}
*ptr++;
}
if(icnt>0)
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
char ch[20];
bool bret=false;
printf("enter string\n");
scanf("%c",ch);
bret=ChkVovel(ch);
if(bret==true)
{
printf("string contains vovel ");
}
else
{
printf("string not contains vovel");
}
return 0;
}