#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<string.h>
#include<fcntl.h>
int main()
{
	int fd=0,icnt=0,i=0,iret=0;
	char fname[30];
	char buffer[10];
	char c='\0';
	printf("enter file name\n");
	scanf("%s",fname);
	printf("enter character\n");
	scanf("%c",&c);
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("file open succesfully\n");
	}
	while((iret=read(fd,buffer,sizeof(buffer)))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((buffer[i]==c))
			{
				icnt++;
			}
		}
	}
	printf("occurence  are %d",icnt);
	close(fd);
	return 0;
}
