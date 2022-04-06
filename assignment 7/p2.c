#include<stdio.h>
double rectanglearea(float lenth,float breadth)
{
double darea;
darea=lenth*breadth;
return darea;
}
int main()
{
float fvalue1=0,fvalue2=0;
double dret=0;
printf("enter lenth");
scanf("%f",&fvalue1);
printf("enter breadth");
scanf("%f",&fvalue2);
dret=rectanglearea(fvalue1,fvalue2);
printf("area of rectangle is %f",dret);
return 0;
}