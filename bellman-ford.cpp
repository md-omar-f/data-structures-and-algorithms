#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int

const int INF = 1000000000;

struct edge {
    int a, b, w;
};

vector<edge> e;

void bellman_ford(int n, int m, int v) {
    vector<int> d(n, INF);
    d[0] = 0;
    vector<int> p(n, -1);

    for(int i = 0; i < n - 1; ++i) {
        bool any = false;
        for(int j = 0; j < m; ++j) {
            if(d[e[j].a] < INF) {
                if(d[e[j].a] + e[j].w < d[e[j].b]) {
                    d[e[j].b] = d[e[j].a] + e[j].w;
                    p[e[j].b] = e[j].a;
                    any = true;
                }
            }
        }
        if(!any) {
            break;
        }
    }

    cout << "distances" <<endl;
    for(int i = 0; i < n; ++i) {
        cout << d[i] << " ";
    }

    cout << endl;

    vet(p);
    
    cout << endl;

    // Finding the path from the source to destination t, for example, from 0 to 2 here

    vector<int>path;

    for(int parent = 2; parent != -1; parent = p[parent]) {
        path.push_back(parent);
    }
    
    reverse(path.begin(), path.end());
    for(auto &i : path) {
        cout << i << " ";
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
    
    int n, m, v;

    cin >> n >> m >> v;

    for(int i = 0; i < m; ++i) {
        int a, b, w;
        cin >> a >> b >> w;
        edge ed;
        ed.a = a;
        ed.b = b;
        ed.w = w;
        e.push_back(ed);
    }

    //cout << e[0].a <<" " << e[0].b << " " << e[0].w << endl;

    //cout << n << " " << m << " " << v;
    
    int t = 1;
    //cin >> t;
    while(t--) {
        bellman_ford(n, m, v);
    }
    
    return 0;
}