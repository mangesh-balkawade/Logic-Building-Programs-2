#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	char fname[30];
	char buffer[1024];
	int iret=0;
	printf("enter file name\n");
	scanf("%s",fname);
    fd=open(fname,O_RDWR);
    while((iret=read(fd,buffer,sizeof(buffer)))!=0)
    {
    	write(1,buffer,iret);
    }
    close(fd);
}