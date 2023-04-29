#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>adj;
vector<bool>used;

vector<int>depth, parent;
queue<int>q;

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); //for bidirectional graph
}

void bfs(int s){
    used[s]=true;
    q.push(s);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        for(int u: adj[v]){
            if(!used[u]){
                used[u]=true;
                q.push(u);
                depth[u]=depth[v]+1;
                parent[u]=v;
            }
        }
    }
}

int32_t main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n,e;cin>>n>>e;

    adj.assign(n,vector<int>());
    used.assign(n,false);
    depth.assign(n,0);
    parent.assign(n,-1);

    for(int i=0;i<e;++i){
        int u,v;cin>>u>>v;
        addEdge(u,v);
    }

    for(int i=0;i<n;++i){
        if(!used[i]){
            bfs(i);
        }
    }
    
    return 0;
}