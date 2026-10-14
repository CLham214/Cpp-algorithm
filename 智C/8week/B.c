#include <stdio.h>
int main(){
    int num ;
    scanf("%d",&num);
    int A[3];

    printf("%d",num);
    while(num!=495){
        int max =-1;
        int min =10;
        A[0] = num /100;
        A[1] =(num-A[0]*100)/10;
        A[2] =num%10;
        for(int i=0;i<3;i++){
            if(A[i]>max) max =A[i];
            if(A[i]<min) min=A[i];
        }

        num=max*99-min*99;
        printf("-%d",num);
    }
    return 0;
}