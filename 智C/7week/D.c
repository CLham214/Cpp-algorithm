#include <stdio.h>
int main(){
    float h,t,s;
    scanf("%f%f%f",&h,&t,&s);
    float g=h-t*s;
    printf("%.2f\n",g);
    if(g<0) printf("Yes");
    return 0;
}