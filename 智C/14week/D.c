#include <stdio.h>

int main(){
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf(" %d",&mat[i][j]);
        }
    }

    int sum[5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum[i]+=mat[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(sum[j]>sum[j+1]){
                int t=sum[j];
                sum[j] =sum[j+1];
                sum[j+1]=t;

            }
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j==4)
                printf("%d ",sum[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}