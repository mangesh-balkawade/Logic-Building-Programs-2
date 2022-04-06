#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<string.h>
#include<fcntl.h>
int main()
{
	int fd=0,iret=0;
	char fname[30];
	char str[30];
	printf("enter string\n");
	scanf("%[^\n]s",str);
	printf("enter file name\n");
	scanf("%s",fname);
	fd=open(fname,O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("file open succesfully\n");
	}
	//iret=lseek(fd,0,2);
	write(fd,str,strlen(str));
	close(fd);
	return 0;
}
