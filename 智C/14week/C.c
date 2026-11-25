#include <stdio.h>
int prime(int p){
    if(p==1||p==0) return 0;
    for(int i=2;i*i<=p;i++){
        if(p%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int mat[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf(" %d",&mat[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>=j){
                if(prime(mat[i][j])==1){
                    mat[i][j]++;
                    count++;
                    while(prime(mat[i][j])!=1){
                        mat[i][j]++;
                    }
                }else{
                    mat[i][j]=0;
                }
            }

            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("count=%d",count);
    return 0;

    
}