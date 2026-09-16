#include <bits/stdc++.h>
using namespace std;

int give(){
    int len;
    cin >> len;
    string str;
    cin >> str;
    set<char> sss;
    int score = 0;
    for(int i=0;i<len;i++){
        score += 1;
        sss.insert(str[i]);
    }
    score += sss.size();
    cout << score << "\n";
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        give();
    }
    return 0;
}