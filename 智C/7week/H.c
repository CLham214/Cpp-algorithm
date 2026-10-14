#include <stdio.h>
int dis(int t){
    int d;
    if(t<=10){
        d=t*100;
    }else if(t<=20){
        d =1000+150*(t-10);
    }else{
        d =2500+50*(t-20);
    }
    return d;
}
int main(){
    int h1,m1,h2,m2;
    scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
    int t1= h1*60+m1-450;
    int t2=h2*60+m2-450;
    printf("%d米",dis(t2)-dis(t1));
    return 0;
}