#include<stdio.h>
int main(){
    int i,j,k,n,count=0;
    scanf("%d %d",&n,&k);
    int a[n],b[k];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d",&b[i]);
        for(j=0;j<n;j++){
            if(a[j]==b[i]){
                count=count+1;
            }
        }
    }
    if(count==k){printf("SUB ARRAY is present");}
    else{printf("Sub array is not present");}
    
}