#include   <stdio.h>
#include <math.h>

double f(double x){
    double f =exp(3*x)+pow(x,7);
    return f;
}
int main(){
    double sum=0;
    double h =0.00002;
    for(int i=1;i<=99999;i++){
        sum += f(1+i*h);
    }
    double ans =((f(1)+f(3))/2+sum)*h;
    printf("%.3lf",ans);
    return 0;
}