#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N =1e5 +10;

int snow(){
    vector<int> edges[N];
    int vertex,edge;cin>>vertex>>edge;

    for(int i=0;i<edge;i++){
        int a,b;cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);

    }
    map<int,int> mp;
    for(int i=1;i<=vertex;i++){
        mp[edges[i].size()] +=1;
    }
    if(mp.size()==2){
        for(auto i:mp){
            if(i.first==1)continue;
            cout << i.first<<" " << i.first -1<<"\n";
        }
    }
    if(mp.size()==3){
        int x =-1;
        int y=-1;
        for(auto i:mp){
            if(i.first==1)continue;
            if(i.second==1) x=i.first;
            else y = i.first-1;

        }
        cout << x<<" "<<y<<"\n";
    }
    return 0;

}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        snow();

    }
    return 0;
}