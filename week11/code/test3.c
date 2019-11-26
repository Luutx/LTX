#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pid,s;
	if(pid=fork()<0)
		{
			perror("fail to fork!\n");
			return -1;
		}
	else if(pid=0)
		{
			printf("%d:child is running now!\n",getpid());
			getchar();
			printf("%d:child is exit now!\n",getpid());
			exit(0);
		}
	else
		{
			printf("%d:parent is waiting zombie now!\n",getpid());
			while((pid=wait(&s))!=-1)
				{
					if(WIFEXITED(s))
					printf("%d:child is exiting noemally.exit code=%d!\n",getpid(),	WEXITSTATUS(s));
					else if(WIFSIGNALED(s))
					printf("child %d exit by signal.signal no=%d\n",pid,WTERMSIG(s));
					else
						printf("not kown!\n");
				}
			printf("%d:parent is exiting now!\n",getpid());
        }
	exit(0);
}
