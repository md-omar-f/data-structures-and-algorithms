#include<bits/stdc++.h>
using namespace std;

struct graph{
	int V,E,W;
};

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int zzz=100010;
	printf("address of zzz is : %d\n",&zzz);

	graph t;
	t.V=10;
	t.E=5;
	t.W=50;

	graph *g = &t;

	printf("number of vertices: %d\n",g->V);
	printf("number of edges : %d\n",g->E);
	printf("weight of the edge : %d\n",g->W);

	int aaa=105;
	printf("adress of aaa: %d\n",&aaa);



	return 0;
}