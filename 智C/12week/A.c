#include <stdio.h>
#include <math.h>
double x,y;
void fun(char op,double a,double b,double c,double d){
    if(op=='+'){
        x=a+c;y=b+d;
    }else if(op=='-'){
        x=a-c;y=b-d;
    }else{
        x=a*c-b*d;y=b*c+a*d;
    }
}
int main(){
    char op;
    double a,b,c,d;
    scanf("(%lf+%lfi)%c(%lf+%lfi)",&a,&b,&op,&c,&d);
    fun(op,a,b,c,d);
    printf("(%.6lf+%.6lfi)%c(%.6lf+%.6lfi)=(%.6lf)+(%.6lf)i",a,b,op,c,d,x,y);
    return 0;
}