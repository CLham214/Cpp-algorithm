#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("%d=",num);
    int m=num;
    for(int i=2;i*i<=m;i++){
        while(num%i==0){
            printf("%d",i);
            num /= i;
            if(num==1) return 0;;
            printf("*");
        }
    }
    printf("%d",num);
    return 0;
}