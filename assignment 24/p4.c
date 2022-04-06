#include<stdio.h>
int strlen(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
icnt++;
*ptr++;
}
return icnt;
}
int LastIndex(char *ptr,char c)
{
int in=strlen(ptr);
int i=0;int icnt=-1;
for(i=0;i<in;i++)
{
if(ptr[i]==c)
{
icnt=i;
}
}
return icnt;
}
int main()
{
char c[20];char ch='\0';int iret=0;
printf("enter string\n");
scanf("%[^'\n']s",c);
printf("enter character\n");
scanf(" %c",&ch);
iret=LastIndex(c,ch);
printf("last index of character %d\n",iret);
return 0;
}
