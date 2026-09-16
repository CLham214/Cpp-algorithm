#include <iostream>
#include <vector>
using namespace std;

int seek(){
    int n;
    cin >> n;
    long long num[n];
    num[0]=0;
    vector<long long> minus;
    for(int i=1;i<n;i++){
        int a;cin>>num[i];
        minus.push_back(num[i]-num[i-1]);
    }
    vector<long long> used(n+1);
    vector<long long> missing;
    long long extra=-1;
    for(auto &i:minus){
        if(i<=n&&i>=1&&used[i]==0){
            used[i]=1;
        }else{
            extra=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(used[i]==0){
            missing.push_back(i);
        }
    }

    if(missing.size()==1){
        cout<<"YES"<<"\n";
    }else if(missing.size()==2){
        int sum=missing[0]+missing[1];
        if(sum==extra) {
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;

}

int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        seek();
    }
    return 0;
}