#include <stdio.h> 
#include <math.h>
double f(double i){
    double fi=exp(i)+i;
    return fi;
}

int main(){
    double m=-1;
    double n=1;
    double t;
    double fm;
    double fn;
    double ft;
    while((n-m)>1e-8){
        t =(m+n)/2;
        fm =f(m);
        fn=f(n);
        ft=f(t);
        if(fm*ft<0){
            n=t;
        }else if(fn*ft<0){
            m=t;
        }
    }
    printf("x=%.6lf",(m+n)/2);
    return 0;
}