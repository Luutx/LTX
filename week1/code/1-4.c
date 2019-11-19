#include "my.h"
static void callback1()
{
	printf("---------callback1----------\n");
}
static void callback2()
{
	printf("---------callback2----------\n");
}
static void __attribute__ ((constructor)) before_main()
{
	printf("---------constructor----------\n");
}
static void __attribute__ ((destructor)) after_main()
{
	printf("---------destructor----------\n");
}
int main()
{
	atexit(callback1);
	atexit(callback1);
    FILE *fp;
	char buf[]={"test data!"};
	if((fp=fopen("test.bat","w+"))==NULL)
		{
			perror("failed to fopen\n");
			return -1;
		}
		if(fputs(buf,fp)==EOF)
		{
			perror("failed to fputs\n");
			return -1;
		}
		printf("printf:data from line buffer");
		exit(0);
		//_exit(0）;
		//return 0;
}
