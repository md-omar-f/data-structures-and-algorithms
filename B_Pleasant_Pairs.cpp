#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;cin>>n;
    vector<lli>v(n+1,0);
    for(lli i=1;i<=n;++i)cin>>v[i];
    lli ans=0;
    for(lli i=1;i<=n;++i){
        for(lli j=v[i]-i;j<=n;j+=v[i]){
            if(j>=0){
                if(v[i]*v[j]==i+j&&i<j){
                    ++ans;
                }
            }
        }
    }
    cout<<ans<<endl;
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