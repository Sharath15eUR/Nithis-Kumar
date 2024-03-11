#include<stdio.h>
void swap(int *a,int *b){
    *a= *a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a,b;
    printf("Enter the numbers to be swapped :");
    scanf("%d %d",&a,&b);
    void (*swap_ptr)(int*,int*)=swap;
    (*swap_ptr)(&a,&b);
    
    printf("After swapping %d %d",a,b);
}
