#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int isize,int ino1,int ino2)
{
int icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
	if(ino1<ino2)
	{
if((Arr[icnt]>ino1)&&(Arr[icnt]<ino2))
{
printf("%d ",Arr[icnt]);
}
}
else
{
	if((Arr[icnt]<ino1)&&(Arr[icnt]>ino2))
{
printf("%d ",Arr[icnt]);
}
}
}
}
int main()
{
int *ptr=NULL;
int icnt=0,iret=0,ilength=0,ival1=0,ival2=0;
printf("enter elements you want");
scanf("%d",&ilength);
printf("enter start element");
scanf("%d",&ival1);
printf("enter last element");
scanf("%d",&ival2);
ptr=(int*)malloc(sizeof(int)*ilength);
printf("emter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
Range(ptr,ilength,ival1,ival2);
free(ptr);
return 0;
}