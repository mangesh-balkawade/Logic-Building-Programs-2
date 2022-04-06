#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int isize)
{
int icnt=0,counter=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]==11))
{
counter++;
}
}
return counter;
}
int main()
{
int icnt=0,iret=0,ilength=0;
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
iret=Frequency(ptr,ilength);
printf("frequency pf 11 is %d",iret);
free(ptr);
return 0;
}