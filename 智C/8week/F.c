#include <stdio.h>
#include <math.h>

int main(){
    int n=0;
    int p=2;
    while(n<5){
        int pisprime =1;
        int misprime =1;
        for(int i=2;i*i<=p;i++){
            if(p%i==0){
                pisprime =0;
                break;
            }
        }
        int m = (int)pow(2, p) - 1;
        for(int i=2;i*i<=m;i++){
            if(m%i==0){
                misprime =0;
                break;
            }
        }
        if(pisprime==1&&misprime==1){
            printf("%d\n",m);
            n ++;
        }
        p++;
    }
    return 0;
}