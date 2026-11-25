#include <stdio.h>

int pu(int a[5],int b[5],int n){
    int k=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=4;j++){
            if(a[i]==b[j]){
                a[k]=b[j];
                k++;
                break;
            }
        }
    }
    return k;
}

int fun(int a[5][5],int row,int n){
    if(row==5)
        return n;

    n=pu(a[0],a[row],n);

    return fun(a,row+1,n);
}
int main(){
    int a[5][5];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    int n=fun(a,1,5);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[0][j]>a[0][j+1]){
                int t=a[0][j];
                a[0][j]=a[0][j+1];
                a[0][j+1]=t;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i>0 && a[0][i]==a[0][i-1])
            continue;
        printf("%d ",a[0][i]);
    }

    return 0;
}