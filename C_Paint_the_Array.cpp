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
    vector<lli>v(n);
    for(auto&i:v)cin>>i;
    lli gcd_even = v[0];
    lli gcd_odd = v[1];
    for(lli i=2;i<n;++i){
        //lli x;cin>>x;
        if(i%2==0){
            gcd_even=__gcd(gcd_even,v[i]);
        }else{
            gcd_odd=__gcd(gcd_odd,v[i]);
        }
    }
    //cout<<gcd_even<<" "<<gcd_odd<<endl;
    bool even_ok=true;
    bool odd_ok=true;
    lli ans=0;
    for(lli i=0;i<n;++i){
        if(i%2==0){
            if(v[i]%gcd_odd==0){
                even_ok=false;
            }
        }else{
            if(v[i]%gcd_even==0){
                odd_ok=false;
            }
        }
    }
    if(even_ok){
        ans=gcd_odd;
    }else if(odd_ok){
        ans=gcd_even;
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