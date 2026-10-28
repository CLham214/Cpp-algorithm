#include <stdio.h>
#include <math.h>
double f(double i){
    double fi=cos(i)-i;
    return fi;
}
double f1(double i){
    double f1i=-sin(i)-1;
    return f1i;
}
int main(){
    double x=1;
    while(fabs(f(x)/f1(x))>=1e-6){
        x -= f(x)/f1(x);
    }
    double fx=fabs(f(x));
    printf("x=%.6lf\nf(x)=%.6lf",x,fx);
    return 0;
}