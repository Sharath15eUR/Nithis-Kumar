#include<stdio.h>
int x=0;
int main(){
    int n,i;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++){
        push(a,n);
    }
    reverse(a);
}
void push(char a[],int n){
    char b;
    if(!isfull(n)){
        scanf("%s",&b);
        a[x]=b;
        x++;
    }
    else{
        printf("Stack overflows");
    }
}
void reverse(char a[]){
    char c[x];
    int h=0;
    while (!isempty()){
        c[h]=a[x-1];
        x--;
        h++;
    }
    for(x=0;x<h;x++){
        printf("\t%c",c[x]);
    }
}
int isempty(){
    if(x==0){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(int n){
    if(x==n){
        return 1;
    }
    else{
        return 0;
    }
}
