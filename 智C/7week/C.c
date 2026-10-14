#include <stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int t1 =max(a,b);
    t1 =max(t1,c);
    int t3=min(a,b);
    t3=min(t3,c);
    int t2=a+b+c-t1-t3;
    printf("%d<%d<%d",t3,t2,t1);
    return 0;
}