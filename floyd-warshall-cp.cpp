#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

const int INF = 1e9+5;
const int N = 501;
int dist[N][N];

void show_distances(int n) {
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(dist[i][j] == INF) {
                cout << "I ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void floyd_warshall(int n) {
    for(int k = 1;  k <= n; ++k) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                if(dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
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
    for(int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if(i == j) {
                dist[i][j] = 0;
            } else {
                dist[i][j] = INF;
            }
        }
    }

    int n, m;
    //cout << "Enter the number of vertices and adges" << endl;
    cin >> n >> m;

    for(int i = 1; i <= m; ++i) {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }
    
    int t = 1;
    cin >> t;
    while(t--) {
        floyd_warshall(n);
    }
    
    show_distances(n);

    return 0;
}