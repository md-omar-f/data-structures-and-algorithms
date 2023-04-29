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
    string prev_s;
    cin>>prev_s;
    cout<<prev_s;
    bool ok=false;
    for(int i=1;i<n-2;++i){
        string s;cin>>s;
        if(prev_s[1]==s[0]){
            cout<<s[1];
        }else{
            cout<<s;
            ok=true;
        }
        prev_s=s;
    }
    if(!ok){
        cout<<'a';
    }
    cout<<endl;

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