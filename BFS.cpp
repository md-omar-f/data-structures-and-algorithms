#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

class Graph{
	int V;
	list<int>*adj;
	void BFSUtil(int s,bool visited[]);//we will implement it later, for disconnected graph its needed
public:
	Graph(int V);
	void addEdge(int u,int v);
	void BFS(int s);
};

Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int u,int v){
	adj[u].push_back(v);
}

void Graph::BFS(int s){
	bool *visited=new bool[V];
	for(int i=0;i<V;++i){
		visited[i]=false;
	}

	list<int>queue;
	visited[s]=true;
	queue.push_back(s);
	
	list<int>::iterator i;

	while(!queue.empty()){
		
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for(i=adj[s].begin();i!=adj[s].end();++i){
			if(!visited[*i]){
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    Graph g(5);
    g.addEdge(0, 2);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(4, 3);

	cout<<"BFS from node 0"<<endl;
	g.BFS(0);
	
	return 0;
}