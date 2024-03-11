//1. Write a C program to determine the given number is odd or even using Bitwise operators. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    (n&1)? printf("odd"):printf("Even");
