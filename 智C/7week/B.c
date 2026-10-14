#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float delta =b*b-4*a*c;
    if(delta<0){
        printf("方程没有实根！");

    }else{
        float x1 =(-b+sqrt(delta))/(2*a);
        float x2 =(-b-sqrt(delta))/(2*a);
        printf("方程的实根为%.2f %.2f",x1,x2);
    }
    return 0;
}