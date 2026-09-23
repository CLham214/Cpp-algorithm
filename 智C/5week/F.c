#include <stdio.h>
int main(){
    double m;
    scanf("%lf",&m);
    double n1 = m*1000 /7 ;
    double cola = 350 * 0.001;
    double n2 = n1/cola;
    int n3=(int)n2;
    printf("%d",n3);
    return 0;
}