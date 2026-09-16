#include <iostream>
#include <vector>
using namespace std;

const int N=2e5+10;
int block(){
    int n;
    cin >> n;
    
    vector<int> num;
    vector<int> dp(N);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        num.push_back(a);

    }
    for(int i=n-1;i>=0;i--){
        if(num[i]+i>=n){
            dp[i] =dp[i+1]+1;
        }else{
            dp[i]=min(dp[i+1]+1,dp[i+num[i]+1]);
        }
    }
    cout << dp[0]<<"\n";
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        block();
    }
    return 0;
}