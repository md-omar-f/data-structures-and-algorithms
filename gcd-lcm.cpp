#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

unsigned ll gcd(ll a, ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

unsigned ll lcm(ll a, ll b){
	return (a*b/gcd(a,b));
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b;
	a=15;
	b=20;
	cout<<"gcd is: "<<gcd(a,b)<<endl;
	cout<<"lcm is: "<<lcm(a,b);

	return 0;
}