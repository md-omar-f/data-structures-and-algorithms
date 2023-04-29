#include<bits/stdc++.h>

using namespace std;

int elements[100000][2];
int elem[100000];
int parent[100000]={-1};
int rnk[100000];


void make_set(int a){
    parent[a]=a;
    rnk[a]=0;
}

int find_set(int a){
    if(a==parent[a]){
        return a;
    }
    return parent[a]=find_set(parent[a]);
}

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(rnk[a]<rnk[b]){
            swap(a,b);
        }
        parent[b]=a;
        if(rnk[a]==rnk[b]){
            ++rnk[a];
        }
    }
}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    for(int i=0;i<10;++i){
        cin>>elem[i];
        make_set(elem[i]);
    }
    for(int i=1;i<3;++i){
        union_sets(0,elem[i]);
    }
    union_sets(elem[3],elem[4]);
    for(int i=6;i<8;++i){
        union_sets(5,elem[i]);
    }

    cout<<rnk[7];

    return 0;
}