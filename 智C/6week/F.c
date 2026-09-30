#include <stdio.h>
int main(){
    int hei,wei,age;
    char fm;
    scanf("%d %d %d %c",&hei,&wei,&age,&fm);
    double BMR;
    if(fm =='M') BMR=66+(wei*6.3*2.2)+(12.9*hei*0.39)-(6.8*age);
    if(fm =='F') BMR=655+(wei*4.3*2.2)+(4.7*hei*0.39)-(4.7*age);
    printf("消耗%.2lf块巧克力",BMR/230);
    return 0;
}