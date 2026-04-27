#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int main() {

    int n , m , q;
    cin >> n >> m >> q;

    vector<vector<int>> d(n + 1 , vector<int> (n + 1 , INF));

    for(int i = 1 ; i <= n ; i++) {
        d[i][i] = 0;
    }

    for(int i = 0 ; i < m ; i++) {
        int u , v , w;
        cin >> u >> v >> w;

        d[u][v] = min(d[u][v] , w);
    }

    for(int k = 1 ; k <= n ; k++) {
        for(int i = 1 ; i <= n; i++) {
            for(int j = 1 ; j <= n ; j++) {
                if(d[i][k] != INF && d[k][j] != INF) {
                    d[i][j] = min(d[i][j] , max(d[i][k] , d[k][j]));
                }
            }
        }
    }

    while(q--) {
        int s , t;
        cin >> s >> t;

        if(d[s][t] ==INF) {
            cout << -1 << "\n";
        } else {
            cout << d[s][t] << "\n";
        }
    }
}