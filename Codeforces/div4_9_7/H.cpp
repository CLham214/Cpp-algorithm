#include <bits/stdc++.h>
using namespace std;

int distinct(){
    int len;
    cin >> len;

    set<int> group;
    int a;
    for(int i=0;i<len;i++){
        cin >> a;
        group.insert(a);
    }
    if((len-group.size())%2==0){
        cout << group.size() << "\n";
    }else{
        cout << group.size()-1 << "\n";
    }
    return 0;

}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        distinct();

    }
    return 0;
}