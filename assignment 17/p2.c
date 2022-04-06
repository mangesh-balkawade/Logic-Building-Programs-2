#include<stdio.h>
#include<stdlib.h>
int DiffFrequency(int Arr[],int isize)
{
int icnt=0,ieven=0,iodd=0,idiff=0;
for(icnt=0;icnt<isize;icnt++)
{
if((Arr[icnt]%2==0))
{
ieven++;
}
else
{
iodd++;
}
}
idiff=ieven-iodd;
	if(idiff<0)
	{
		idiff=-idiff;
	}
return idiff; 
}
int main()
{
int *ptr=NULL;
int icnt=0,ilength=0,iret=0;
printf("enter elements you want\n");
scanf("%d",&ilength);
ptr=(int*)malloc(sizeof(int)*ilength);
if(ptr==NULL)
{
printf("malloc false");
return -1;
}
printf("enter elements");
for(icnt=0;icnt<ilength;icnt++)
{
scanf("%d",&ptr[icnt]);
}
iret=DiffFrequency(ptr, ilength);
printf("diffrence between frequenci is %d",iret);
free(ptr);
return 0;
}