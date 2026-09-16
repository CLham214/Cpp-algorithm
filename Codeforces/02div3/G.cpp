#include <iostream> 
#include <queue> 
#include <vector> 

using namespace std;

const int N=2e5+10;
vector<int> edges[N];
bool del[N];
int x=-1;

int bfs(int a,int dist[]){
    queue<int> q;
    q.push(a);
    dist[a]=0;

    while(q.size()){
        int u=q.front();
        q.pop();
        for(auto &v:edges[u]){
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                q.push(v);
            }
            if(del[v]==false){
                x = v;
                return dist[v];
            }

        }
    }
    return 0;
}

int bfs2(int a,int dist[],int x){
    queue<int> q;
    q.push(a);
    dist[a]=0;

    while(q.size()){
        int u=q.front();
        q.pop();
        for(auto &v:edges[u]){
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                q.push(v);
            }
            if(v == x){
                return dist[v];
            }

        }
    }
    return 0;
}

int city(){
    x=-1;
    int n,ca,ru;
    cin >> n>>ca>>ru;
    int dist[n+1];
    int dist2[n+1];
    for(int i=1;i<=n;i++){
        edges[i].clear();
        del[i]=false;
    }
    for(int i=1;i<=n;i++){
        int a,b;cin >> a>> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
        dist[i]=-1;
        dist2[i]=-1;
    }
    int degree[n+1];
    queue<int> dele;
    for(int i=1;i<=n;i++){
        degree[i] =edges[i].size();
        if(degree[i]==1){
            dele.push(i);
            del[i]=true;
        }
    }
    while(dele.size()){
        int u =dele.front();
        dele.pop();
        for(auto &i:edges[u]){
            if(!del[i]) {
                degree[i]--;
                if(degree[i]==1){dele.push(i);del[i]=true;}
            }
        }
    }
    if(ca==ru){
        cout<<"NO"<<"\n";
        return 0;
    }
    if(!del[ru]){
        cout<<"YES"<<"\n";
        return 0;
    }
    if(bfs(ru,dist)<bfs2(ca,dist2,x)) cout <<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    


    return 0;


}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        city();
    }
    return 0;
}