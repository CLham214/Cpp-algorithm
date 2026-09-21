#include <vector>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n>> m;
    vector<int> locat(n+1);
    vector<string> saber(n+1);

    for(int i=1;i<=n;i++){
        cin>>locat[i]>>saber[i];
    }
    vector<int> crea;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        if(a==0) crea.push_back(-b);
        else crea.push_back(b);
    }
    int mai =1;
    for(int i=0;i<m;i++){
        if(locat[mai]==1) crea[i] *= -1;
        mai += crea[i];
        mai = (mai - 1  + n) % n + 1;
    }
    cout << saber[mai];
    return 0;
}