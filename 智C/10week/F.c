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
    int sum=0;
    for(int i=1;i<n;i++){
        if(gcd(i,n)==1){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}