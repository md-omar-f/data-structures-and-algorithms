//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void primeFactors(int n){
    while(n%2 == 0){
        cout << 2 << " ";
        n /= 2;
    }
    for(int i=3;i*i<n;i+=2){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2){
        cout<<n;
    }
}

int32_t main()
{
	// IOS;
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

    int n=315;
    cout<<"The prime factor of the number are: "<<endl;
    primeFactors(n);

	return 0;
}