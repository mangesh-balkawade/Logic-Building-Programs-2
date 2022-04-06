#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iret=0;
	char fname[30];
	printf("enter file name\n");
	scanf("%s",fname);
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("file open succesfully\n");
	}
	iret=lseek(fd,0,2);
	printf("file size is\n%d",iret);
	close(fd);
	return 0;
}
