#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("call:pid=%d,ppid=%d\n",getpid(),getppid());
	system("/home/lutongxin/文档/week9/test");
	printf("after calling");
}
