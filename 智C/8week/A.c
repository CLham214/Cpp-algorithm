#include <stdio.h>
int main(){
    int A[10];
    for(int i=0;i<10;i++){
        scanf("%d",&A[i]);
    }
    int max=0;
    int min=101;
    int sum =0;
    for(int i=0;i<10;i++){
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
        sum += A[i];
    }
    float score = (sum-max-min)/8.00;
    printf("%.2f",score);
    return 0;
}