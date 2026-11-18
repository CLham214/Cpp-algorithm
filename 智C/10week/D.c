#include <stdio.h>
#include <math.h>
int prime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void guest(int n){
    for(int i=3;i<=n/2;i++){
        if(prime(i)==1){
            if(prime(n-i)==1){
                printf("%d=%d+%d ",n,i,n-i);
            }
        }
    }
    printf("\n");
}

int main(){
    for(int i=6;i<=50;i+=2){
        guest(i);
    }
    return 0;
}