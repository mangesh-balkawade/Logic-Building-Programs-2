#include<stdio.h>
int strleng(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
icnt++;
*ptr++;
}
return icnt;
}
void StrRevCpy(char *ptr,char *str)
{
int i=0,j=0;
int in =strleng(ptr);
for(i=in-1,j=0;i>=0;i--,j++)
{
str[j]=ptr[i];
}
str[j]='\0';
}

int main()
{
char c[20];
char d[20];
printf("enter string\n");
scanf("%[^'\n']s",c);
StrRevCpy(c,d);
printf("%s",d);
return 0;
}