#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int isize)
{
int icnt=0,i=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]%2==0))
{
i++;
}
}
return i;
}
int main()
{
int *ptr=NULL;
int icnt=0,ilength=0,iret=0;
printf("enter elements you want");
scanf("%d",&ilength);
ptr=(int*)malloc(sizeof(int)*ilength);
if(ptr==NULL)
{
printf("malloc false");
return -1;
}
printf("enter no");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=CountEven(ptr,ilength);
printf("count of even no is %d \n",iret);
free(ptr);
return 0;
}
