#include<stdio.h>
int CountCapital(char *);
int main()
{
char str[20];
int iret=0;
printf("enter string \n");
scanf("%[^'\n']s",str);
iret=CountCapital(str);
printf("count of capitalletters in a string is\n %d",iret);
return 0;
}
int CountCapital(char *ptr)
{
int icnt=0;
while(*ptr!='\0')
{
if(*ptr>='A'&&*ptr<='Z')
{
icnt++;
}
*ptr++;
}
return icnt;
}