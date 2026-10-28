#include <stdio.h>
#include <math.h>

int main(){
    int A[21];
    A[1]=2;
    A[2]=3;
    for(int i=3;i<=20;i++){
        if(i%2==0){
            A[i]=A[i-2]-A[i-1];
        }else{
            A[i]=A[i-2]+A[i-1];
        }
    }
    for(int i=1;i<=20;i++){
        printf("%d ",A[i]);

    }
    return 0;

}