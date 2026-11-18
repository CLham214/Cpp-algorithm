#include <stdio.h> 
#include <math.h>

void trans(int a,int cod){
    int t =a%cod;
    if(a>cod-1) trans(a/cod,cod);
    if(t==10) printf("A");
    else if(t==11) printf("B");
    else if(t==12) printf("C");
    else if(t==13) printf("D");
    else if(t==14) printf("E");
    else if(t==15) printf("F");
    else printf("%d",t);
}

int main(){
    int num,cod;
    scanf("%d %d",&num,&cod);
    trans(num,cod);
    return 0;
}