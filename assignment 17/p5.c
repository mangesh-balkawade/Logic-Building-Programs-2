#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int isize,int ino)
{
int icnt=0,counter=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]==ino))
{
counter++;
}
}
return counter;
}
int main()
{
int icnt=0,iret=0,ilength=0,ival=0;
int *ptr=NULL;
printf("enter no that frequency have to be calculated ");
scanf("%d",&ival);
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
iret=Frequency(ptr,ilength,ival);
printf("frequency pf no is %d",iret);
free(ptr);
return 0;
}