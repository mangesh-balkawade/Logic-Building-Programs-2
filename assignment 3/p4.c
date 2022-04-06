#include<stdio.h>
void display(char cvalue)
{
char c ='\0';
char d ='\0';
{
    for(int i=1,c='a',d='A';i<=26;i++,c++,d++)
    {
        {
            if(cvalue==c)
            {
                printf("%c",d);
            }
            else if(cvalue==d)
            {
                printf("%c",c);
            }
            
        }
    }

}
}

int main()
{
char cchar='\0';
printf("enter character\n");
scanf("%c",&cchar);
display(cchar);
return 0;
}