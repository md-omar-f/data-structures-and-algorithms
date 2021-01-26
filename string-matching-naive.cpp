#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void search(char* pat, char*txt){
	int m=strlen(pat);
	int n=strlen(txt);

	for(int i=0;i<=n-m;++i){
		int j;
		for(j=0;j<m;++j){
			if(txt[i+j]!=pat[j]){
				break;
			}
		}
		if(j==m){
			cout<<"Pattern found at index: "<<i<<endl;
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

	char txt[]="AABAACAADAABAABA";
	char pat[]="AABA";
	search(pat,txt);

	return 0;
}