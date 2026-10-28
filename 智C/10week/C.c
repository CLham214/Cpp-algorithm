#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int m,n;
    int t=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n-2;i++){
        if(prime(i)==1){
            if(prime(i+2)==1){
                printf("(%d,%d)\n",i,i+2);
                t+=1;
            }
        }
    }
    if(t!=0){
        printf("t=%d\n",t);
    }else{
        printf("该区间内无孪生素数\n");
    }
    return 0;
}