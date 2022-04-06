#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int isize)
{
int icnt=0,isume=0,isumo=0,idiff=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]%2==0))
{
isume=isume+Arr[icnt];
}
else
{
isumo=isumo+Arr[icnt];
}
}
idiff=isume-isumo;
return idiff;
}
int main()
{
int *ptr=NULL;
int icnt=0,iret=0,ilenth=0;
printf("how many elements you want");
scanf("%d",&ilenth);
ptr=(int*)malloc(sizeof(int)*ilenth);
if(ptr==NULL)
{
	printf("unable malloc");
	return -1;
}
printf("enter elements");
for(icnt=0;icnt<ilenth;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=Diffrence(ptr,ilenth);
printf("diffrence between sum and even is %d",iret);
free(ptr);
return 0;
}