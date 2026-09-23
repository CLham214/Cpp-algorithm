#include <stdio.h>

int main(){
    int p;
    scanf("%d",&p);
    int sum =0;
    for(int i=0;i<3;i++){
        sum += p%10;
        p /=10;
    }
    sum +=p;
    printf("%d",sum);
    return 0;
}