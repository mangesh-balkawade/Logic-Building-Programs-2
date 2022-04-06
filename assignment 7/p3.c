#include<stdio.h>
int cnvkmtom(int ino)
{
int im;
im=ino*1000;
return im;
}
int main()
{
int ival=0;
int iret=0;
printf("enter km\n");
scanf("%d",&ival);

iret=cnvkmtom(ival);
printf("kilometer to meter %d",iret);
return 0;
}