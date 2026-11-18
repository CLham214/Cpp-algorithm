#include <stdio.h>
#include <math.h>
int f(int n){
    if(n>=1000){
        int a=n/1000;
        int b=n/100-10*a;
        int c=n%100;
        if(a*a+b*b==c*c&&b!=0) return 1;
    }
    else{
        int a=n/100;
        int b=n/10-10*a;
        int c=n%10;
        if(a*a+b*b==c*c&&b!=0) return 1;
    }
    return 0;
}
int main(){
    int m=0;
    int n=0;
    while(m>=n){
        scanf("%d %d",&m,&n);
    }
    for(int i=m;i<=n;i++){
        if(f(i)==1){
            if(i>1000){
                printf("%d:%d*%d+%d*%d=%d*%d\n",i,i/1000,i/1000,i/100-10*(i/1000),i/100-10*(i/1000),i%100,i%100);
        
            }else{
                printf("%d:%d*%d+%d*%d=%d*%d\n",i,i/100,i/100,i/10-10*(i/100),i/10-10*(i/100),i%10,i%10);
            }
        }
    }
    return 0;
}