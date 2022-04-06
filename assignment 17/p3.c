#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int isize)
{
int icnt=0,ino=11;bool bans=false;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]==11))
{
	bans=true;
}
}
return bans;
}
int main()
{
int icnt=0,iret=0,ilength=0;
int *ptr=NULL;
printf("enter elements you want");
scanf("%d",&ilength);
ptr=(int*)malloc(sizeof(int)*ilength);
if(ptr==NULL)
{
printf("malloc fails");
return -1;
}
printf("enter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=Check(ptr,ilength);
if(iret==true)
{
printf("11 is present");
}
else
{
printf("11 is absent");
}
free(ptr);
return 0;
}
