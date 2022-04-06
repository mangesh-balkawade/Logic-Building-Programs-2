#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int isize)
{
int icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
if(((Arr[icnt]%5==0)&&(Arr[icnt]%2==0)))
{
printf("%d ",Arr[icnt]);
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
	printf("unable malloc");
	return -1;
}
printf("enter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
Display(ptr,ilength);
free(ptr);
return 0;
}
