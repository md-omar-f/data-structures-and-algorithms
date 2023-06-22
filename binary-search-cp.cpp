#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int

int bin_search(vector<int>& v, int to_find) {
    int lo = 0;
    int hi = v.size() - 1;
    while(hi - lo > 1) {
        int mid = (hi + lo) / 2; // or mid = low + (high - low) / 2;
        if(v[mid] < to_find) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if(v[lo] == to_find) {
        return lo;
    } else if(v[hi] == to_find) {
        return hi;
    } else {
        return -1;
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
    
    
    vector<int>v {-3, -2, -1, 0, 0, 0, 0, 1, 2};

    //cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << endl;
    //cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << endl;

    cout << bin_search(v, 0) << endl;

    
    return 0;
}