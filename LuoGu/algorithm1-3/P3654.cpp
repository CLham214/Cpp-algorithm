#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c,k;
    cin >> r>>c>>k;
    int A[r][c];
    for(int i=0;i<r;i++){
        string di;
        cin >> di;
        for(int j=0;j<c;j++){
            if(di[j]=='#'){
                A[i][j]=0;
            }else{
                A[i][j]=1;
            }
        }
    }

    int sum =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<=c-k;j++){
            if(A[i][j]==1){
                int t=0;
                for(int x=0;x<k;x++){
                    if(A[i][j+x]==1) t++;
                }
                if(t==k) sum++;
            }
        }
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<=r-k;i++){
            if(A[i][j]==1){
                int t=0;
                for(int x=0;x<k;x++){
                    if(A[i+x][j]==1) t++;
                }
                if(t==k) sum++;
            }
        }
    }
    if(k==1) sum/=2;
    
    cout << sum;
    return 0;
}