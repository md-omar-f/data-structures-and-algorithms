#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void factors(int n){
	int cnt;
	for(int i=1;i*i<=n;++i){
		if(n%i==0){
			//cout<<i<<" ";
			(i==n/i)?(++cnt,cout<<i<<" "):(cnt+=2,cout<<i<<" "<<n/i<<" ");
		}
	}
	cout<<endl;
	cout<<"Number of factor: "<<cnt;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;cin>>n;
	cout<<"factors of "<<n<<":"<<endl;
	factors(n);

	return 0;
}