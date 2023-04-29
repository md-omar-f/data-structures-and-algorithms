#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int

void solve() {
    vector<int> v{5, 2, 10, 11, 7, 9, 1};
    sort(v.begin(), v.end(), greater<int>());
    for(auto&i : v) cout << i << " ";
    cout << endl;
    if(binary_search(v.begin(), v.end(), 3)) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }
}

int32_t main() {
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}