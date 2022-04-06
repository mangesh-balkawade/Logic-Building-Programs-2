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
	printf("enter file name\n");
	scanf("%s",fname);
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("file open succesfully\n");
	}
	while((iret=read(fd,buffer,sizeof(buffer)))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((buffer[i]>='A')&&(buffer[i]<='Z'))
			{
				icnt++;
			}
		}
	}
	printf("capital letters are %d",icnt);
	close(fd);
	return 0;
}
