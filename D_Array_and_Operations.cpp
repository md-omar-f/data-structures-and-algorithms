#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(auto&i:v)cin>>i;
    sort(v.begin(),v.end());
    int score=0;
    for(int i=0;i<k;++i){
        score+=v[n-1-k-i]/v[n-1-i];//n-1-2*k
    }
    //score+=accumulate(v.begin(),v.end()-(n-1-2*k),0);
    for(int i=0;i<(n-2*k);++i){
        score+=v[i];
    }
    cout<<score<<endl;
}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}