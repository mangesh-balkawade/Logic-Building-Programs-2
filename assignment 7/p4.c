#include<stdio.h>
double ftc(float ftemp)
{
double btemp;
btemp=((ftemp-32)*5/9);
return btemp;
}
int main()
{
float fvalue1=0;
double dret=0;
printf("enter temprature in fahrehnite");
scanf("%f",&fvalue1);
dret=ftc(fvalue1);
printf("temprature in celsius is  %f",dret);
return 0;
}