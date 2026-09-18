#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,b;
    cin >> n >> b;
    vector<int> P;
    vector<int> S;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        P.push_back(x);
        S.push_back(y);
    }
    
    int ma=0;
    for(int i=0;i<n;i++){
        vector<int> cost;
        for(int j=0;j<n;j++){
            if(j==i){
                cost.push_back(P[j]/2 +S[j]);
            }else{
                cost.push_back(P[j]+S[j]);
            }

        }
        sort(cost.begin(),cost.end());
        long long sum=0;
        int tm =0;
        for(int k=0;k<n;k++){
            if(sum + cost[k] <= b){
                sum += cost[k];
                tm++;
            }else{
                break;
            }
        }
        ma =max(ma,tm);

    }
    cout << ma <<"\n";
    return 0;


}