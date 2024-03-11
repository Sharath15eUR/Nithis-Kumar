#include<stdio.h>
int main(){
    long int n,k,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    k = sizeof(n);
    for(i=0;i<k;i++){
        if (n&1) count=count+1;
        n = n >> 1;
    }
    printf("count of set bits %ld",count);
}
