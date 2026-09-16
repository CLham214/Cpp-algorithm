#include <iostream>
#include <vector>
using namespace std;

const int N = 2e5 +10;
vector<int> edges[N];
bool st[N];
long long leaf[N];

void dfs(int u){
    st[u]=true;

    for(auto &i:edges[u]){
        if(!st[i]) {
            dfs(i);
            leaf[u]+=leaf[i];
        }

    }
    if(leaf[u]==0) leaf[u]=1;
}


int load(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        edges[i].clear();
        st[i] = false;
        leaf[i] = 0;
    }
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    dfs(1);

    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int a,b;cin>>a>>b;
        cout<<leaf[a]*leaf[b]<<"\n";
    }
    return 0;
}

int main(){
    int c;
    cin >> c;
    for(int i=0;i<c;i++){

        load();
    }
    return 0;
}