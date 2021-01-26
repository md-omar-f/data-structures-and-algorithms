#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

struct Edge{
	int source,dest;
};

struct Graph{
	int V,E;
	struct Edge* edges;
};

struct subset{
	int parent;
	int rank;
};

struct Graph* createGraph(int V,int E){
	struct Graph* graph =(struct Graph*)malloc(sizeof(struct Graph));
	graph->V=V;
	graph->E=E;
	graph->edges=(struct Edge*)malloc(graph->E*sizeof(struct Edge));
	return graph;
}

int find(struct subset subsets[], int i){
	if (subsets[i].parent!=i){
	 subsets[i].parent= find(subsets, subsets[i].parent);
	}
	return subsets[i].parent;
}

void Union(struct subset subsets[], int xroot, int yroot){
	if (subsets[xroot].rank<subsets[yroot].rank){
	 subsets[xroot].parent = yroot;
	}else if (subsets[xroot].rank>subsets[yroot].rank){
	 subsets[yroot].parent = xroot;
	}else{
	 subsets[yroot].parent=xroot;
		+ subsets[xroot].rank;
	}
}

int isCycle(struct Graph* graph){
	int V=graph->V;
	int E=graph->E;

	struct subset* subsets=(struct subset*)malloc(V * sizeof(struct subset));

	for(int v=0;v<V;++v){
	 	subsets[v].parent=v;
	 	subsets[v].rank=0;
	}

	for(int e=0;e<E;++e){
		int x=find(subsets, graph->edges[e].source);
		int y=find(subsets, graph->edges[e].dest);

		if(x==y){
			return 1;
		}

		Union(subsets, x, y);
	}
	return 0;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int V=3, E=3;
	struct Graph* graph = createGraph(V,E);
	graph->edges[0].source=0;
	graph->edges[0].dest=1;

	graph->edges[1].source=1;
	graph->edges[1].dest=2;

	graph->edges[2].source=2;
	graph->edges[2].dest=0;

	if(isCycle(graph)){
		cout<<"There is a cycle.";
	}else{
		cout<<"No cycle";
	}

	return 0;
}