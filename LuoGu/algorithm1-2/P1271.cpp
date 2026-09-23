#include <bits/stdc++.h>
using namespace  std;

int main(){
    int n,m;
    cin >> n>> m;
    vector<int> a(n+1);
    for(int i=0;i<m;i++){
        int x;cin >>x;
        a[x]++;
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<a[i];j++){
            cout << i<<" ";
        }
    }
    return 0;
}
