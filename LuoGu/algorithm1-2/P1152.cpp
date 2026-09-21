#include <bits/stdc++.h>
using namespace std;

string due(){
    vector<int> num;
    int x;
    string s;

    getline(cin, s);
    stringstream ss(s);

    // 第一个数是 n
    int n;
    ss >> n;

    // 后面 n 个才是数组
    while(ss >> x)
        num.push_back(x);

    vector<int> cha;

    // 计算相邻元素差的绝对值
    for(int i = num.size() - 1; i > 0; i--){
        cha.push_back(abs(num[i] - num[i-1]));
    }

    // 这里应该排序 cha，不是 num
    sort(cha.begin(), cha.end());

    int k = 1;
    for(auto &i : cha){
        if(i != k)
            return "Not jolly";
        k++;
    }

    return "Jolly";
}

int main(){
    cout << due();
    return 0;
}