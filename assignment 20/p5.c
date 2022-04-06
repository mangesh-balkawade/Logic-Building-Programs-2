#include<stdio.h>
void Display(char chDiv)
{
if(chDiv=='A'||chDiv=='a')
{
printf("exam at 7 am");
}
else if(chDiv=='B'||chDiv=='b')
{
printf("exam at 8.30 am");
}
else if(chDiv=='C'||chDiv=='c')
{
printf("exam at 9.20 am");
}
else if(chDiv=='D'||chDiv=='d')
{
printf("exam at 10.30 am");
}
else
{
printf("you are full");
}
}
int main()
{
char div='\0';
printf("enter div");
scanf("%c",&div);
Display(div);
return 0;
}