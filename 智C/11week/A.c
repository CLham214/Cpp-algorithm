#include <stdio.h>
#include <math.h>

int CanBeDivided(int dividend,int divisor){
    if(divisor==1) return 1;
    if(dividend%divisor==0) return 0;
    return CanBeDivided(dividend,divisor-1);
}
int IsPrime(int a){
    if(a<=1) return 0;
    return CanBeDivided(a,a-1);

}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",IsPrime(n));
    return 0;
}