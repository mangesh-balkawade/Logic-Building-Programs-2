#include<stdio.h>
void Strncpy(char *ptr,char *str,int ino)
{
while((*ptr!='\0')&&(ino!=0))
{
*str=*ptr;
*ptr++;
*str++;
ino--;
}
*str='\0';
}
int main()
{
char c[20];int ival1=0;
printf("enter string\n");
scanf("%[^'\n']s",c);
printf("enter no");
scanf("%d",&ival1);
char d[20];
Strncpy(c,d,ival1);
printf("%s",d);
return 0;
}
