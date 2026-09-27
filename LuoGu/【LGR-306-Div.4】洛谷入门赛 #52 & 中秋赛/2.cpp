#include <bits/stdc++.h>
using namespace std;
const int N= 2e5+10;
int main(){
    int mn,mx;
    cin >> mn>>mx;
    int a[mx-mn+1];
    int j=0;
    for(int i=mn;i<=mx;i++){
        a[j]=i;
        j++;
    }
    int z;
    cin >> z;
    long long sum =0;
    for(auto i:a){
        sum +=i/z;

    }
    cout << sum<<"\n";
    return 0;
}