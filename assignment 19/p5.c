#include<stdio.h>
#include<stdlib.h>
void Digitsum(int Arr[],int isize)
{
int icnt=0,idigit=0,isum=0;
for(icnt=0;icnt<isize;icnt++)
{
while(Arr[icnt]!=0)
{
idigit=Arr[icnt]%10;
isum=isum+idigit;
Arr[icnt]=Arr[icnt]/10;
}
printf("%d ",isum);
isum=isum-isum;
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
Digitsum(ptr,ilength);
free(ptr);
return 0;
}