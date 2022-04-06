#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[],int isize,int ino)
{
int icnt=0;int ians=0;
for(icnt=0;icnt<isize;icnt++)
{
if(Arr[icnt]==ino)
{
ians=icnt;
break;
}
}
if(icnt==isize)
{
return -1;
}
else
{	
return ians;
}
}
int main()
{
int *ptr=NULL;
int icnt=0,iret=0,ilength=0,ival=0;
printf("enter elements you want");
scanf("%d",&ilength);
printf("enter no have to chk");
scanf("%d",&ival);
ptr=(int*)malloc(sizeof(int)*ilength);
printf("emter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=FirstOcc(ptr,ilength,ival);
if(iret==-1)
{
printf("not present");
}
else
	printf("index of no is %d",iret);
free(ptr);
return 0;
}
