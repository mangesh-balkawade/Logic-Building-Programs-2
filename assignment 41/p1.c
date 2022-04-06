#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include <fcntl.h>
int main()
{
	int fd=0;
	char fname[20];
	printf("enter file name\n");
	scanf("%s",fname);
	fd=creat(c,0777);
	fd=open(c,O_RDWR);
	if(fd==-1)
	{
		printf("fail to open file");
	}	
	else
	{
		printf("file open succesfully %d",fd);
	}
	return 0;
	close(fd);
}