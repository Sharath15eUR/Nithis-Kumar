#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *threadfunc1(void *var);
void *threadfunc2(void *var);
int main(){
pthread_t thread1;
pthread_t thread2;
printf("\nBefore thread");
pthread_create(&thread1,NULL,threadfunc1,NULL);
pthread_create(&thread2,NULL,threadfunc2,NULL);
m6pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
printf("\nAfter thread");
exit(0);
}
void *threadfunc1(void *var){
printf("\nHello ");
return NULL;
}
void *threadfunc2(void *var){
printf(" World");
return NULL;
}