#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int


int32_t main() {
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    vector<int>v{2, 5, 3, 2, 4};
    vet(v);
    cout << endl;
    v.erase(find(v.begin(), v.end(), 2));
    vet(v);

    cout << endl;

    vector<pair<pair<int, int>, string>> vpps;
    vpps.push_back({{5, 3}, "tuhin"});
    vpps.push_back({{2, 3}, "shohel"});
    vpps.push_back({{2, 3}, "sabbir"});
    vpps.push_back({{2, 2}, "Tushar"});
    vpps.push_back({{5, 2}, "ujjwal"});

    sort(vpps.begin(), vpps.end());

    for(auto &i : vpps) {
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }
    
    return 0;
}