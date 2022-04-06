#include<stdio.h>
double circlearea(float fred)
{
double darea;
darea=(3.14*fred*fred);
return darea;
}
int main()
{
float fvalue=0;
double dret=0;
printf("enter radius");
scanf("%f",&fvalue);
dret=circlearea(fvalue);
printf("area is %f",dret);
return 0;
}