#include <stdio.h> 
#include <math.h>

int fun(long n,long *hw){
    int i=0;
    long t=n;
    while(i<=10000){
        n=t;
        long rev=0;
        while(n>0){
            rev =rev*10+n%10;
            n /= 10;
        }
        if(rev==t){ *hw=t ;return(i);}
        else {
            t=rev+t;
            i++;
        }
    }
    return -1;
}

int main(){
    long a;
    long b;
    long c;
    scanf("%ld",&a);
    c =fun(a,&b);
    if(c==-1) printf("error");
    else{
        printf("%ld,%ld",b,c);}
    return 0;

}