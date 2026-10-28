#include <stdio.h>
#include <math.h>
const int N=1e5+10;

int main(){
    double x;
    scanf("%lf",&x);
    double A[N];
    A[0]=0;
    int i=1;
    A[i]=x;
    while(fabs(A[i])>=1e-8){
        i++;
        A[i]=-A[i-1]*((x*x)/((2*i-2)*(2*i-1)));
    }
    double sum=0;
    for(int j=0;j<i;j++){
        sum +=A[j];
    }

    printf("%.1lf",sum);
    return 0;
}