#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;cin>>n;
    
    vector<int>v(n,0);
    for(auto&i:v)cin>>i;

    bool ok = false;

    for(int i=0;i<(1<<n)-1;++i){
        int sum = 0;
        for(int j=0;j<n;++j){
            if(i&(1<<j)){
                sum+=v[j];
                sum%=360;
            }else{
                sum-=v[j];
                sum%=360;
            }
        }
        if(sum==0){
            ok=true;
            break;
        }
    }
    cout<<(ok?"YES":"NO");
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
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}