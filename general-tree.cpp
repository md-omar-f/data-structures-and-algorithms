#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

struct node{
    int key;
    vector<node *>child;
};

node *newNode(int key){
    node *temp=new node;
    temp->key=key;
    return temp;
}

void levelOrderTraversal(node *root){
    if(root==NULL)return;

    queue<node *>q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        while(n>0){
            node *p=q.front();
            q.pop();
            cout<<p->key<<" ";
            for(int i=0;i<(p->child).size();++i){
                q.push(p->child[i]);
            }
            --n;
        }
        cout<<endl;
    }
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    node *root = newNode(2);
    (root->child).push_back(newNode(5));
    (root->child).push_back(newNode(7));
    (root->child).push_back(newNode(11));
    (root->child[1]->child).push_back(newNode(3));
    (root->child[1]->child).push_back(newNode(6));

    // node *root = newNode(10);
    // (root->child).push_back(newNode(2));
    // (root->child).push_back(newNode(34));
    // (root->child).push_back(newNode(56));
    // (root->child).push_back(newNode(100));
    // (root->child[0]->child).push_back(newNode(77));
    // (root->child[0]->child).push_back(newNode(88));
    // (root->child[2]->child).push_back(newNode(1));
    // (root->child[3]->child).push_back(newNode(7));
    // (root->child[3]->child).push_back(newNode(8));
    // (root->child[3]->child).push_back(newNode(9));

    // int n=12;
    // vector<int>a{-1,1,2,3,-1,5,6,7,-1,9,10,11};
    // //node *root=newNode(a[0]);
    // for(int i=0;i<n;++i){
    //     node *temp = newNode(a[i]);
    //     //temp->key=a[i];
    //     (temp->child).push_back(newNode(i));

    // }
    cout<<"Level order traversal: "<<endl;
    levelOrderTraversal(root);

	

	return 0;
}