#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

void simpleSieve(int limit, vector<int>& prime){

	vector<bool>mark(limit+1,true);

	for(int i = 2; i * i < limit; ++i){
		if(mark[i]){
			for(int j = i * i; j < limit; j+=i){
				mark[j]=false;
			}
		}
	}

	for(int i=2;i<limit;++i){
		if(mark[i]){
            prime.push_back(i);
			cout<<i<<" ";
		}
	}
}

void segmentedSieve(int limit, vector<int>& prime, int n){
    int low = limit;
    int high = 2 * limit;

    while(low < n){
        if(high > n){
            high = n;
        }

        bool mark[limit+1];
        memset(mark,true,sizeof(mark));

        for(int i=0;i<prime.size();++i){
            int lowLim = floor(low/prime[i])*prime[i];
            if(lowLim < low){
                lowLim+=prime[i];
            }
            for(int j=lowLim; j<high; j+=prime[i]){
                mark[j-low]=false;
            }
        }

        for(int i=low;i<high;++i){
            if(mark[i-low])cout<<i<<" ";
        }

        low = low + limit;
        high = high + limit;
    }
}

int32_t main()
{
	IOS;

	int n;cin>>n;
	int limit = sqrt(n)+1;
	vector<int>prime;
	prime.reserve(limit);
	cout<<"prime numbers till: "<<n<<endl;
	simpleSieve(limit, prime);
	segmentedSieve(limit, prime, n);

	return 0;
}
