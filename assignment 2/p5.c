#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int check(int ino)
{
if(ino%2==0)
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
int ival=0;
BOOL bret=FALSE;
printf("enter no ");
scanf("%d",&ival);
bret=check(ival);
if(bret==TRUE)
{
printf("no is even");
}
else
{
printf("no is odd");
}
return 0;
}