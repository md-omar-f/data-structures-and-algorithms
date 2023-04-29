#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int
int i,x, a[1440];

void solve(){
    cin>>x;
    int i=lower_bound(a,a+1440,x)-a;
    if(x+1^a[i])cout<<i<<endl;
    else{
        cout<<i+1<<endl;
    }

}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    for(;i++<1440;)a[i]=i*(i+1)/2;

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}