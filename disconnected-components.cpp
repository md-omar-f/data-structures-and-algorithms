#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>adj;
vector<int>color;
vector<int>time_in;
vector<int>time_out;
int dfs_timer=0;


void addEdge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u); //use for bidirectional graph
}

void dfs(int v){
    time_in[v]=dfs_timer++;
    color[v]=1;
    //cout<<v<<" ";
    for(int u:adj[v]){
        if(color[u]==0){
            dfs(u);
        }
    }
    color[v]=2;
    time_out[v]=dfs_timer++;
}

int32_t main(){
    
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n,e; // number of vertices and edges
    cin>>n>>e; // input the number of vertices and edges

    adj.assign(n,vector<int>());
    color.assign(n,0);
    time_in.assign(n,-1);
    time_out.assign(n,-1);

    for(int i=0;i<e;++i){
        int u,v;cin>>u>>v;
        addEdge(u,v);
    }
    int cmp_cnt = 0;
    for(int i=0;i<n;++i){
        if(color[i]==0){
            ++cmp_cnt;
            dfs(i);
        }
    }
    cout << cmp_cnt << endl;
    
    return 0;
}