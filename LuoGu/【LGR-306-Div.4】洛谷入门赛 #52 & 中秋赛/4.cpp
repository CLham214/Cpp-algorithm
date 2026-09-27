#include <bits/stdc++.h> 
using namespace std;

int Prime(int n){
    if(n < 2) return 0;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return n;
}
int main(){
    string s;
    cin >> s;
    int len =s.size();
    int sum =0;
    for(int i=0;i<len-1;i++){
        int num = (s[i] - '0') * 10 + (s[i+1] - '0');
        sum += Prime(num);
    }
    cout << sum<< "\n";
    return 0;
}