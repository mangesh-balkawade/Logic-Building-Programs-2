#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include<unistd.h>
#include<io.h>
int main()
{
	int fd=0;
	char fname[20];
	printf("enter file name\n");
	scanf("%s",fname);
	fd=creat(c,0777);
	if(fd==-1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file create succesfully %d",fd);
	}
   close(fd);
}