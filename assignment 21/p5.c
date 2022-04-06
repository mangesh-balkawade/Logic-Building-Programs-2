#include<stdio.h>
void Display(char c)
{
printf("%d\n",c);
printf("%o\n",c);
printf("%x\n",c);
}
int main()
{
char ch='\0';
printf("enter character\n");
scanf("%c",&ch);
Display(ch);
return 0;
}