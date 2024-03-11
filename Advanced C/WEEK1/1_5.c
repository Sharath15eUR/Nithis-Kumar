#include<stdio.h>
int main(){
    int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    printf("Enter the element of mat1\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of mat2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                *(*(c+i)+j)+= (*(*(a+i)+k))*(*(*(b+k)+j));
            }
        }
    }
    printf("multipliction of the mat1 and mat 2 is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",*(*(c+i)+j));
        }
        printf("\n");
    }
