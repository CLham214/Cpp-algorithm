#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin >> n>>r;
    int a =(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((a-i)*(a-i) + (a-j)*(a-j) <= r*r){
                cout<<"#";
            }else{
                cout <<".";
            }
        }
        cout <<"\n";
    }
    return 0;
}