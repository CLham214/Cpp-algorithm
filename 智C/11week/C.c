#include <stdio.h>
#include <math.h>

int ugly(int n){
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    while(n%5==0) n/=5;
    if(n==1) return 1;
    return 0;
}

int main(){
    int num=1;
    int i=0;
    while(i<101){
        i+=ugly(num);
        num++;
    }
    printf("%d",num-1);
    return 0;
}