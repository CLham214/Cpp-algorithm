#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int A[105][105]={};
    for(int i=1;i<=n;i++){
        string tem;
        cin>>tem;
        for(int j=1;j<=m;j++){
            if(tem[j-1]=='*') A[j][i]=1;


        }
    }

    int B[105][105]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[j+1][i+1]==1) B[j][i]=-1;
            else{
                B[j][i]=A[j][i]+A[j+1][i]+A[j+2][i]+A[j][i+1]+A[j+2][i+1]+A[j][i+2]+A[j+1][i+2]+A[j+2][i+2];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(B[j][i]==-1)putchar('*');
            else{
                cout<<B[j][i];
            }
        }
        putchar('\n');
    }
    return 0;

}