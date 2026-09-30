#include <stdio.h>

int main(){
    long long num;
    scanf("%lld",&num);
    int a=num%1000;
    num /=1000;
    int b=num%1000;
    num /=1000;
    printf("%d\n%d\n%lld",a,b,num);
    return 0;

}