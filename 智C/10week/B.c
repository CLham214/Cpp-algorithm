#include <stdio.h>
#include <math.h>
int palindrome(long n){
    long rev=0;
    long t =n;
    while(n>0){
        rev =rev*10+n%10;
        n /= 10;
    }
    if(t==rev) return 1;
    else return 0;
}
int main(){
    for(long i=1;i<=300;i++){
        if(palindrome(i)==1){
            if(palindrome(i*i)==1) printf("%d\n",i);
        }
    }
    return 0;
}