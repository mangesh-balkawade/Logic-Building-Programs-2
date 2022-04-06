#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkzero(int ino)
{
int idigit;
while(ino>0)
{
idigit=ino%10;
if(idigit==0)
{
return TRUE;
}
ino=ino/10;
}
}
int main()
{
int ival=0;
int iret=0;
printf("enter no");
scanf("%d",&ival);
iret=chkzero(ival);
if(iret==TRUE)
{
printf("no contain zero");
}
else
{
printf("no not contain zero");
}
}