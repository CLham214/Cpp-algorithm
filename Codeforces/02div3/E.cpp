#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


long long least(vector<long long>& price,
                vector<vector<int>>& mix,
                vector<bool>& done,
                int p) {
    if (done[p]) {
        return price[p];
    }

    if (price[p] == 0 || mix[p].empty()) {
        done[p] = true;
        return price[p];
    }

    long long sum = 0;

    for (int ingredient : mix[p]) {
        sum += least(price, mix, done, ingredient - 1);
    }

    price[p] = min(price[p], sum);
    done[p] = true;

    return price[p];
}

int potion(){
    int n,k;
    cin >> n>> k;
    vector<long long> price(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<k;i++){
        int a;cin>> a;
        price[a-1]=0;
    }
    vector<vector<int>> mix(n);
    for(int j=0;j<n;j++){  
        int m;
        cin>>m;
        
        for(int i=0;i<m;i++){
            int a;
            cin >> a;
            mix[j].push_back(a);
        }
    }
    vector<bool> done(n,false);
    for(int i=0;i<n;i++){
        least(price,mix,done,i);
        cout << price[i]<<" ";
    }
    cout << '\n';

    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        potion();
    }
    return 0;
}