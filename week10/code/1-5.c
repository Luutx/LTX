#include "my.h"

int g=10;
int main()
{
	int s=20;
	static int k=30;
	pid_t pid;
	pid=fork();
	if(pid<0)
	{
		perror("fork failed!\n");
		return -1;
    }else if(pid==0)
	{
		printf("child pid=%d: \n&g=%16p\n&k=%16p\n&s=%16p\n",getpid(),&g,&k,&s);
		g=100;
		s=200;
		k=300;
		sleep(2);
    	printf("child after g=%d\n k=%d\n s=%d\n",g,k,s);
		_exit(0);
    }else{
		printf("parent pid=%d: \n&g=%16p\n&k=%16p\n&s=%16p\n",getpid(),&g,&k,&s);
	    printf("parent after g=%d\n k=%d\n s=%d\n",g,k,s);
		return 0;
	}
}

