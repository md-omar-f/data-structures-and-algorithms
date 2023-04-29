#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
	int r,c;cin>>r>>c;
	char a[r+2][c+2];
	for(int i=1;i<r+1;++i){
		for(int j=1;j<c+1;++j){
			cin>>a[i][j];
		}
	}

	int ans=0;
	for(int i=1;i<r+1;++i){
		for(int j=1;j<c+1;++j){
			if(a[i][j]=='.' && a[i][j+1]=='.' && a[i][j-1]=='.' && a[i-1][j]=='.' && a[i+1][j]=='.'){
				ans++;
			}
		}
	}
	cout<<ans;
}

int32_t main(){
	IOS;
	
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	
	
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}