#include <stdio.h> 
#include <math.h>
int check(int n){
    if(n<1000){
        int t=n;
        int a=n%10;
        t/=10;
        int b=t%10;
        t/=10;
        int c=t%10;
        if(a*b*c!=0&&a!=b&&b!=c&&a!=c){
            return 1;
        }
        
    }
    return 0;
}
int main(){
    for(int i=100;i<500;i++){
        if(check(i)==1&&check(2*i)==1){
            printf("%d %d\n",i,2*i);
        }
    }
    return 0;
}