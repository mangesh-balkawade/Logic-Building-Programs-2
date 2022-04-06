#include<stdio.h>
#include<stdlib.h>
void Digit(int Arr[],int isize)
{
int icnt=0,counter=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]>=100&&Arr[icnt]<=999))
{
printf("%d ",Arr[icnt]);
}
else
{
	if((Arr[icnt]<=-100&&Arr[icnt]>=-999))
{
printf("%d ",Arr[icnt]);
}
}
}
}
int main()
{
int icnt=0,ilength=0;
int *ptr=NULL;
printf("how many elements you want");
scanf("%d",&ilength);
ptr=(int*)malloc(sizeof(int)*ilength);
if(ptr==NULL)
{
printf("malloc fails ");
return -1;
}
printf("enter elements\n");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
Digit(ptr,ilength);
free(ptr);
return 0;
}