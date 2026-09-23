#include <stdio.h>
int main(){
    int m,t1,t0;
    scanf("%d %d %d",&m,&t0,&t1);
    float q=m*(t1-t0)*4184;
    printf("%f",q);
    return 0;
}