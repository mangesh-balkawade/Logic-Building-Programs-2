#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool chk(int Arr[],int isize,int ino)
{
int icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
if(Arr[icnt]==ino)
{
break;
}
}
if(icnt==isize)
{
return false;
}
else
{
return true;
}
}
int main()
{
int icnt=0;bool bret=false;
int ilength=0,ival=0;
int *ptr=NULL;
printf("enter how many elements you want");
scanf("%d",&ilength);
printf("enter no that have to chk");
scanf("%d",&ival);
ptr=(int*)malloc(sizeof(int)*ilength);
printf("enter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
bret=chk(ptr,ilength,ival);
if(bret==true)
{
printf("no is present");
}
else
{
printf("no is not present");
}
free(ptr);
return 0;
}
