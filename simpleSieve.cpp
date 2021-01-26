#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void simpleSieve(int n){
	bool mark[n];
	memset(mark,true,sizeof(mark));

	for(int p=2;p*p<n;++p){
		if(mark[p]==true){
			for(int i=p*p;i<n;i+=p){
				mark[i]=false;
			}
		}
	}

	for(int i=2;i<n;++i){
		if(mark[i]){
			cout<<i<<" ";
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

	int n;cin>>n;
	cout<<"prime numbers till: "<<n<<endl;
	simpleSieve(n);

	return 0;
}