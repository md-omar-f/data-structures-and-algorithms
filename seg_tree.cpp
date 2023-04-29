#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int

int a[100005], seg[4 * 100005];

void build_seg(int ind, int low, int high) {
    if(low == high) {
        seg[ind] = a[low];
        return;
    }
    int mid = low + (high - low) / 2;
    build_seg(2 * ind + 1, low, mid);
    build_seg(2 * ind + 2, mid + 1, high);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}

int query(int ind, int low, int high, int l, int r) {
    if(low >= l && high <= r) {
        return seg[ind];
    }
    if(low > r || high < l) {
        return INT_MIN;
    }
    int mid = low + (high - low) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return max(left, right);
}

int32_t main() {
    IOS;
    
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    build_seg(0, 0, n - 1);

    int q; cin >> q;

    while(q--) {
        int l, r; cin >> l >> r;
        cout << query(0, 0, n - 1, l, r);
    }
    
    return 0;
}