#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int common_data;
pthread_mutex_t lock;
void *threadfunc1(void *var);
void *threadfunc2(void *var);
int main(){
pthread_t thread1;
pthread_t thread2;
pthread_create(&thread1,NULL,threadfunc1,NULL);
pthread_create(&thread2,NULL,threadfunc2,NULL);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
exit(0);
}
void *threadfunc1(void *var){
pthread_mutex_lock(&lock);
for(int i=0;i<10;i++){
common_data ++;
printf("\n From thread1: %d",common_data);
}
pthread_mutex_unlock(&lock);
return NULL;
}
void *threadfunc2(void *var){
pthread_mutex_lock(&lock);
for(int i=0;i<10;i++){
common_data++;
printf("\n From thread2: %d",common_data);
}
pthread_mutex_unlock(&lock);
return NULL;
}