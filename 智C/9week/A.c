#include <stdio.h>
const int N=1e5+10;
int main(){
    int num;
    int A[N];
    int i=0;
    int mx =-1;
    int count =0;
    while (num != -1)
    {
        scanf(" %d",&num);
        A[i]=num;

        if(A[i]>mx){
            mx =A[i];
            count =1;
        }else if(A[i]==mx){
            count ++;
        }
        i++;
    }
    printf("max=%d count=%d",mx,count);
    return 0;
    
}