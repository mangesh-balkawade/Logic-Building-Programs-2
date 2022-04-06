#include<stdio.h>
#include<stdlib.h>
int Large(int Arr[],int isize)
{
int imax=Arr[0]; 
icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
	imax=Arr[0];
if(imax<Arr[icnt])
{
imax=Arr[icnt];
}
}
return imax;
}
int main()
{
int *ptr=NULL;
int icnt=0,iret=0,ilength=0;
printf("enter elements you want");
scanf("%d",&ilength);
ptr=(int*)malloc(sizeof(int)*ilength);
printf("emter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=Large(ptr,ilength);
printf("%d max no",iret);
free(ptr);
return 0;
}