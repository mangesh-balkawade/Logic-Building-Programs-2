#include <stdio.h>
void pattern(int ino)
{
	
	int icnt;
	for(icnt=0;icnt<ino;icnt++)
	{
		
		printf("%c",'A'+icnt);
		
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