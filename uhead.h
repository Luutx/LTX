#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

#define UNUMBER 100

struct arg{
   float ave;
   int sum;
};

void show(int *,int);
void urand(int *,int);
struct arg operater(int *,int);
int mytime(int *,int);
int myqort(int *,int);
int compare(const void *,const void *);
int qtime(int *,int);
