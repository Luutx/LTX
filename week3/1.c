#include <sys/types.h>
#include <sys/stat.h>
#include <funtl.h>
#include "ourhdr.h"

char buf1[] = "abcdefghij";
char buf[2] = "ABCDEFGHIJ";

int
main(void)
{
     int fd;
     if((fd = create("file.hole",FILE_MODE))<0)
         err_sys("creat error");
     if(write(fd,buf1,10)!=10)
         err_sys("buf1 write error");
     if(lseek(fd,40,SEEK_SET)==-1)
         err_sys("lseek error");
     if(write(fd,buf2,10)!=10)
         err_sys("buf write errors");
     exit(0);
}
