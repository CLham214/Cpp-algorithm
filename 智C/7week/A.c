#include <stdio.h>

int main(){
    char a,b;
    float a1,a2,a3,b1,b2,b3;
    scanf("%c %f %f %f",&a,&a1,&a2,&a3);
    scanf(" %c %f %f %f",&b,&b1,&b2,&b3);
    float sum1=a1+a2+a3;
    float sum2=b1+b2+b3;
    float ave1=sum1/3;
    float ave2=sum2/3;

    printf("*********************************************************\n");
    printf("    NAME    MATH    PHYSICS   CHEMISTRY    SUM    AVERAGE\n");
    printf("%8c%8.1f%11.1f%12.1f%7.1f%11.1f\n",a,a1,a2,a3,sum1,ave1);
    printf("%8c%8.1f%11.1f%12.1f%7.1f%11.1f\n",b,b1,b2,b3,sum2,ave2);
    printf("*********************************************************\n");
    return 0;
}