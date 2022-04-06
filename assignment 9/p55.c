#include <stdio.h>
void pattern(int ino)
{
	
	int icnt;
	ch='\0';
	for(icnt=1,ch=='a';icnt<=ino;icnt++,ch++)
	{
		
		printf("%c\t",ch);
		
	}
}
int main()
{
    int ivalue=0;
    printf("enter \n");
    scanf("%d",&ivalue);
    pattern(ivalue);
    return 0;

}