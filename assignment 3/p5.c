#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int chkvovel(char c)
{
	
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
return TRUE;
}
else
{
return FALSE;
}
}

int main()
{
BOOL bret=0;
char c='\0';
printf("enter character");
scanf("%c",&c);
bret=chkvovel(c);
if(bret==1)
{
printf("character is vovel");
}
else
{
printf("character is not vovel");
}
}
