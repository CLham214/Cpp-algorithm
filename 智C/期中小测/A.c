#include <stdio.h>
#include <math.h> 

int main(){
    double x;
    scanf("%lf",&x);
    double  sum =1-x*x/2;
    int i=2;
    double t= -x*x/2;
    while (fabs(t)>1e-7){
        i++;
        t=(-1)*t*(i-1)*x/((i)*(i-2));
        sum += t;
    }
    printf("%.6lf",sum);
    return 0;
}