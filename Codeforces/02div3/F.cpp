#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

const int N=2e5+10;
bool st[N];
vector<int> edges[N];
int du1 =0;
int liantong =0;

void dfs(int u){
    st[u]=true;
    for(auto &i:edges[u]){
        if(!st[i]){
            dfs(i);
        }
    }
    if(edges[u].size()==1) du1 ++;
}

int dance(){
    du1 = 0;
    liantong =0;

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        st[i]=false;
        edges[i].clear();

    }
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        edges[i].push_back(a);
        edges[a].push_back(i);
    }
    for(int i=1;i<=n;i++){
        sort(edges[i].begin(),edges[i].end());
        edges[i].erase(unique(edges[i].begin(),edges[i].end()),edges[i].end());

    }

    for(int i=1;i<=n;i++){
        if(!st[i]){
            dfs(i);
            liantong ++;
        }
    }
    int lian = du1/2;
    int huan = liantong -lian;

    if(lian==0) cout << huan <<" "<< huan<<"\n";
    else cout << huan+1 << " "<<huan +lian<<"\n";
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        dance();
    }
    return 0;
}