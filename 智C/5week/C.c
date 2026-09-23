#include <stdio.h>
int main(){
    long long m;
    scanf("%lld",&m);

    long long d =0;
    long long y =0;

    d = m /1440;
    if(m%1440 != 0) d+=1;
    y = d/365;
    d = d%365;
    printf("%lld年%lld天",y,d);
    return 0;
}