#include "my.h"
int main()
{
	int i;
	pid_t p1,p2,p3;
	int pipefd1[2];
	int pipefd2[2];
	char buf[4097];
	for (int i = 0; i < sizeof(buf); ++i)

    {

        buf[i] = 0x7f;

    }
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0)
	{
		perror("pipe failed.\n");
		return -1;
	}
	p1=fork();
	if (p1<0)
	{
		perror("fork1 failed.\n");
		return -1;
	}
	else if(p1==0)
	{
		
	}
	else
	{
		p2=fork();
		if (p2<0)
		{
			perror("fork2 failed.\n");
			return -1;
		}
		else if(p2==0)
		{
		
		}
		else
		{
			p3=fork();
			if (p3<0)
			{
				perror("fork3 failed.\n");
				return -1;
			}
			else if(p3==0)
			{
		
			}
		}
	}
	
}
