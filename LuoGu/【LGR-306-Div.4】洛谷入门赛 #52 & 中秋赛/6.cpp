#include <bits/stdc++.h>
using namespace  std;

const int N =2e5+10;
bool st[N];
int degree[N];
long long d[N];

void bfs(int n,vector<pair<int,long long>> g[N]){
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(degree[i]==1){
            q.push(i);
        }
    }

    long long ans =0;
    int cnt =0;

    while(!q.empty()){
        int u=q.front();
        q.pop();

        if(st[u]) continue;
        if(cnt == n-1) break;
        int v=-1;
        long long c=0;
        for(auto i:g[u]){
            if(!st[i.first]){
                v = i.first;
                c =i.second;
                break;

            }

        }
        ans +=(llabs(d[u])+c-1) /c;
        d[v] +=d[u];
        st[u]=true;
        cnt++;
        degree[v]--;
        if(degree[v]==1) q.push(v);
    }

    cout << ans<<"\n";
}

int main(){
    int n;
    cin >> n;
    int s[N];
    int t[N];
    for(int i=1;i<=n;i++){
        cin >> s[i];
    }for(int i=1;i<=n;i++){ 
        cin>>t[i];
        d[i]=s[i]-t[i];}
    vector<pair<int,long long>> g[N];
    for(int i=1;i<n;i++){
        int a,b,c;cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});

        degree[a]++;
        degree[b]++;
    }

    bfs(n,g);
    return 0;
}

