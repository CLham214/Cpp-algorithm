#include <stdio.h>
#include <math.h>
int main(){
    for(int a=1;a<=9;a++){
        for(int b=0;b<=9;b++){
            for(int c=0;c<=9;c++){
                int num =a*100001+b*10010+c*1100;
                int x=(int)sqrt(num);
                if(x*x==num){
                    printf("%d",num);
                }
            }
        }
    }
    return 0;
}