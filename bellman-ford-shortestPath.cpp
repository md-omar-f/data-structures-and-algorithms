#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void bellmanFord(int graph[][3],int v,int e,int src){
	int dist[v];
	for(int i=0;i<v;++i){
		dist[i]=INT_MAX;
	}
	dist[src]=0;
	for(int i=0;i<v-1;++i){
		for(int j=0;j<e;++j){
			if(dist[graph[j][0]]+graph[j][2]<dist[graph[j][1]]){
				dist[graph[j][1]]=dist[graph[j][0]]+graph[j][2];
			}
		}
	}
	//Here we check negative cycle
	for(int i=0;i<e;++i){
		int x=graph[i][0];
		int y=graph[i][1];
		int weight=graph[i][2];
		if(dist[x]!=INT_MAX && dist[x]+weight<dist[y]){
			cout<<"There is a negative cycle!"<<endl;
		}
	}
	//Printing distances
	cout<<"Vertex distance from source:"<<endl;
	for(int i=0;i<v;++i){
		cout<<i<<"\t\t"<<dist[i]<<endl;
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int v=4;
	int e=6;
	int src=0;

	int graph[][3] = {{0,1,4},{0,2,2},{1,2,1},{2,1,1},{1,3,-3},{2,3,3}};
	bellmanFord(graph,v,e,src);

	
	return 0;
}