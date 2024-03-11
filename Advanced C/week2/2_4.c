#include<stdio.h>
void insert(int,int*);
void delete(int,int*);
int isfull(int*);
int isempty(int*);
void display(int*);
int x,y,n;
int main(){
    int i,s,a;
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    int q[n];
    for(i=0;i<n;i++){
        q[i]=-1;
    }
    x=0;
    y=n-1;
    while(1){
        printf("\n 1.insert \n 2.delete \n 3.Display");
        scanf("%d",&s);
        switch(s){
            case 1:
                printf(" Enter the data to be Inserted");
                scanf("%d",&a);
                insert(a,q);
                break;
            case 2:
                printf(" Enter the data to be deleted");
                scanf("%d",&a);
                delete(a,q);
                break;
            case 3:
                display(q);
                break;
            default:
                return 0;
            
        }
    }
}
void insert(int a,int q[]){
    if(!isfull(q)){
        q[x]=a;
        x++;
        printf("\t Size of q after insertion %d",x);
    }
    else{
        printf("Overflow");
    }
    
}
void delete(int a,int q[]){
    int i;
    if(isempty(q)){
        printf("underflow");
    }
    else{
        for(i=0;i<x-1;i++){
            q[i]=q[i+1];
        }
        x--;
        printf("\t Size of q after deletion %d",x);
    }

}
void display(int q[]){
    int i;
    for(i=0;i<x;i++){
        printf("%d",q[i]);
    }
}
int isempty(int q[]){
    if(q[0]!=-1){
        return 0;
    }
    else{
        return 1;
    }
}
int isfull(int q[]){
    if (x==n){
        return 1;
    }
    else{
        return 0;
    }
}
