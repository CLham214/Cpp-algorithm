#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
    int q=b/a;
    int r=b%a;
    if(r==0){
        return a;
    }
    return gcd(r,a);
}

int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int sum =0;
    while(i*i<=n){
        if(n%i==0){
            if(gcd(i,n/i)==1){
                printf("%d=%d*%d\n",n,i,n/i);
                sum ++;
            }
        }
        i++;
    }
    printf("共有%d对",sum);
    return 0;
}