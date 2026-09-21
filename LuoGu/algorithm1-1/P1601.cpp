#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    vector<int> num;

    while(i >= 0 || j >= 0){
        int n = carry;

        if(i >= 0){
            n += a[i]- '0';
            i--;
        }

        if(j >= 0){
            n += b[j]- '0';
            j--;
        }

        num.push_back(n%10);
        carry =n/10;

    }
    if(carry != 0)
    num.push_back(carry);
    for(int k=num.size()-1;k>=0;k--){
        cout<<num[k];
    }

    return 0;
}