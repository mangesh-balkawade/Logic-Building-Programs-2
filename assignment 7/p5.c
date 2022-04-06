#include<stdio.h>
double squaremeter(double ino)
{
double dsm;
dsm=ino*0.0929;
return dsm;
}
int main()
{
float ival=0;
double dret=0;
printf("enter area in square feet\n");
scanf("%f",&ival);

dret=squaremeter(ival);
printf("kilometer to meter %f",dret);
return 0;
}