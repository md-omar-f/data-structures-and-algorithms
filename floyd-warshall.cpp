#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

#define v 4
#define inf 99999

void printSolution(int dist[][v]){
	cout<<"following are the distances between the nodes\n";
	for(int i=0;i<v;++i){
		for(int j=0;j<v;++j){
			if(dist[i][j]==inf)cout<<"inf\t";
			else cout<<dist[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void floydWarshall(int graph[][v]){
	int dist[v][v],i,j,k;
	for(i=0;i<v;++i){
		for(j=0;j<v;++j){
			dist[i][j]=graph[i][j];
		}
	}
	for(k=0;k<v;++k){
		for(i=0;i<v;++i){
			for(j=0;j<v;++j){
				if(dist[i][k]+dist[k][j]<dist[i][j]){
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
	printSolution(dist);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int graph[v][v]={
		{0,5,inf,10},
		{inf,0,3,inf},
		{inf,inf,0,1},
		{inf,inf,inf,0}
	};
	floydWarshall(graph);

	return 0;
}