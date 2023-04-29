#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int d, sumTime;cin>>d>>sumTime;
    vector<pair<int,int>>v(d);
    
    int min_sum=0;
    int max_sum=0;
    for(int i=0;i<d;++i){
        cin>>v[i].first;
        cin>>v[i].second;
        min_sum+=v[i].first;
        max_sum+=v[i].second;
    }
    if(max_sum<sumTime || min_sum>sumTime){
        cout<<"NO";
        return;
    }
    vector<int>ans(d,0);
    for(int i=0;i<d;++i){
        ans[i]+=v[i].first;
        sumTime-=v[i].first;
    }
    int i=0;
    while(sumTime>0){
        if(sumTime<=v[i].second-ans[i]){
            int tmp=ans[i];
            ans[i]+=sumTime;
            sumTime-=(v[i].second-tmp);
        }else{
            int tmp=ans[i];
            ans[i]+=(v[i].second-ans[i]);
            sumTime-=(v[i].second-tmp);
        }
        ++i;
    }
    cout<<"YES"<<endl;
    for(auto i:ans)cout<<i<<" ";
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