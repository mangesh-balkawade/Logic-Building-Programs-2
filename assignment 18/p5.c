#include<stdio.h>
#include<stdlib.h>
int OddProduct(int Arr[],int size)
{
int icnt,ipro=1;
for(icnt=0;icnt<size;icnt++)
{
if(Arr[icnt]%2!=0)
{
ipro=ipro*Arr[icnt];
}
}
return ipro;
}
int main()
{
int icnt=0,iret=0,ilengtgh=0;
int *ptr=NULL;
printf("enter elments you want");
scanf("%d",&ilengtgh);
ptr=(int*)malloc(sizeof(int)*ilengtgh);
if(ptr==NULL)
{
printf("malloc failse");
return -1;
}
printf("enter elements");
for(icnt=0;icnt<ilengtgh;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=OddProduct(ptr,ilengtgh);
printf("product of odd no is %d",iret);
free(ptr);
return 0;
}