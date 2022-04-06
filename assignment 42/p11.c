  #include<stdio.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include<fcntl.h>
  #include<io.h>
  int main()
  {
    int fd=0;
    char fname[20];
    char buffer[10];
    int iret=0;
    int icnt=0;
    int i=0;
    printf("enter file name\n");
    scanf("%s",fname);
    fd=open(fname,O_RDWR);
    if(fd==-1)
    {
      printf("unable to open file");
    }
   while((iret=read(fd,buffer,sizeof(buffer)))!=0)
   {
    for(i=0;i<iret;i++)
    {
      if(buffer[i]>='A'&&buffer[i]<='Z')
      {
        icnt++;
      }
    }
   }
  printf("%d\n",icnt);
    close(fd);
    return 0;
  }