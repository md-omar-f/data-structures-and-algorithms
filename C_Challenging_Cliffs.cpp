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
    vector<int>v(n);
    for(auto&i:v)cin>>i;
    sort(v.begin(),v.end());

    int min_diff=INT_MAX;

    int l_index,r_index;

    for(int i=0;i<n-1;++i){
        if(v[i+1]-v[i]<min_diff){
            min_diff=v[i+1]-v[i];
            l_index=i;
            r_index=i+1;
        }
    }
    cout<<v[l_index]<<" ";
    for(int i=r_index+1;i<n;++i){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<l_index;++i){
        cout<<v[i]<<" ";
    }
    cout<<v[r_index]<<endl;
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