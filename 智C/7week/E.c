#include <stdio.h>
int main(){
    float A[5];
    scanf("%f%f%f%f%f",&A[0],&A[1],&A[2],&A[3],&A[4]);
    for(int i=0;i<=3;i++){
        if(A[i]>A[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}