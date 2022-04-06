#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<string.h>
#include<fcntl.h>
int main()
{
	int fd=0,ino=0;
	char fname[30];
	char arr[1000];
	printf("enter file name\n");
	scanf("%s",fname);
	printf("enter no\n");
	scanf("%d",&ino);
	fd=open(fname,O_RDWR);
	read(fd,arr,ino);
	write(1,arr,ino);
	close(fd);
	return 0;
}
