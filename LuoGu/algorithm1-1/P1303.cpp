#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    vector<int> num(a.size() + b.size(), 0);

    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            num[i + j] += (a[a.size()-1-i] - '0')
                        * (b[b.size()-1-j] - '0');
        }
    }
    for(int i = 0; i < num.size()-1; i++){
        num[i+1] += num[i] / 10;
        num[i] %= 10;
    }
    int ind =-1;
    for(int k=num.size()-1;k>=0;k--){
        if(num[k]!=0){
            ind =k;
            break;
        }
    }
    if(ind == -1){
        cout << 0;
        return 0;
    }
    for(int k=ind;k>=0;k--){
        cout<< num[k];
    }

    return 0;
}