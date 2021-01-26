#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n=101;
	for(int i=1;i<n;++i){
		if(i==2){
			cout<<i<<endl;
			continue;
		}
		for(int j=2;j<i;++j){
			if(i%j==0)break;
			if(i==j+1)cout<<i<<endl;
		}
	}

	return 0;
}