#include "uhead.h"

int myqort(int * a,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;i++){
           if(a[j]>a[j+1]){
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
          }
       }
    }
}


int mytime(int * a,int n){
    struct timeval start;
    struct timeval end;
    unsigned long diff;
    int i,j,temp;
    gettimeofday(&start,NULL);
    for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;i++){
           if(a[j]>a[j+1]){
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
          }
       }
    }
    gettimeofday(&end,NULL);
    diff = 1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
    printf("the difference is %ld\n",diff);
    return 0;
    
}

int qtime(int * a,int n){
    struct timeval start;
    struct timeval end;
    unsigned long diff;
    gettimeofday(&start,NULL);
    qsort(a,sizeof(a)/sizeof(a[0]),sizeof(int),compare);
    gettimeofday(&end,NULL);
    diff = 1000000*(end.tv_sec-start.tv_sec)+end.tv_usec-start.tv_usec;
    printf("the difference is %ld\n",diff);
    return 0;
}

int compare(const void *arg1,const void *arg2){
    int a = *(int*)arg1;
    int b = *(int*)arg2;
    if(a>b){
      return 1;
    }
    else if(a<b){
       return -1;
    }
    else{
       return 0;
    }
}
