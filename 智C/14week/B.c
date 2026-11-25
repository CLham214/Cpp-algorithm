#include <stdio.h>


int findsub(int a[],int n,int b[]){
    int k=0;
    for(int i=0;i<n-2;){
        while(i<n-2 &&a[i+1]>a[i]){
            if(a[i+2]>a[i+1]){
                i++;
            }else{
                b[k]=i+1;
                k++;
                i++;
            }
        }
        while(i<n-2 &&a[i+1]<a[i]){
            if(a[i+2]<a[i+1]){
                i++;
            }else{
                b[k]=i+1;
                k++;
                i++;
            }
        }
    }
    return k+1;
}
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        scanf(" %d",&num[i]);
    }
    int b[10];
    int k=findsub(num,10,b)-1;
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    for(int i=0;i<k;i++){
        printf("%d ",b[i]);
    }
    printf("\n%d",k+1);
    return 0;

}