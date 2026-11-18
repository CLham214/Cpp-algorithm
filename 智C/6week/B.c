#include <stdio.h>
#include <math.h>

int main(){
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("sin(x):%lf\n",sin(x));
    printf("cos(x):%lf\n",cos(x));
    printf("|x|:%lf\n",fabs(x));
    printf("e的x次方:%lf\n",exp(x));
    printf("x的y次方:%lf\n",pow(x,y));
    return 0;
}