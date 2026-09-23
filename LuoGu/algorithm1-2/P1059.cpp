#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());

    cout<<a.size()<<"\n";
    for(int i=0;i<a.size();i++){
        cout << a[i]<< " ";
    }
    return 0;
}