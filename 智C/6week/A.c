#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a;
    scanf("%lf",&a);
    char sign =0;
    if(a>0) sign ='+';
    if(a<0) sign ='-';
    printf("sign:%c\n",sign);
    int inte =(int) a;
    printf("integral part:%d\n",abs(inte));
    double mini =fabs(a-inte);
    printf("decimal fraction part:%lf",mini);
    return 0;
}