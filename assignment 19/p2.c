#include<stdio.h>
#include<stdlib.h>
int Small(int Arr[],int isize)
{
int ismall=Arr[0],icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
if(ismall>Arr[icnt])
{
ismall=Arr[icnt];
}
}
return ismall;
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
iret=Small(ptr,ilength);
printf("%d",iret);
free(ptr);
return 0;
}