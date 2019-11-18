#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("tset:pid=%d,ppid=%d\n",getpid(),getppid());
}
