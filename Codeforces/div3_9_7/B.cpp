#include<iostream>
#include <map>
using namespace std;


int divide(){
    map<int,int> mp;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        for(int i=2;i*i<=x;i++){
            while(x%i==0){
                mp[i] +=1;
                x /= i;
            }
        }
        if(x>1) mp[x]+=1;
    }

    for(auto i:mp){
        if(i.second %n !=0) return -1;
    }

    return 1;
}

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t ;i++){
        if(divide()==1) {
            cout<<"YES"<<"\n";}else{cout<<"NO"<<"\n";}
    }
    return 0;
}