#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);

    int n, s, t;
    cin >> n >> s >> t;

    int c[101][101];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }

    int d[101], trace[101];
    bool visited[101] = {false};

    for(int i = 1; i <= n; i++) {
        d[i] = INF;
        trace[i] = -1;
    }

    d[s] = 0;

    // Dijkstra
    for(int i = 1; i <= n; i++) {
        int u = -1, min_d = INF;

        for(int j = 1; j <= n; j++) {
            if(!visited[j] && d[j] < min_d) {
                min_d = d[j];
                u = j;
            }
        }

        if(u == -1) break;

        visited[u] = true;

        for(int v = 1; v <= n; v++) {
            if(!visited[v] && c[u][v] != 10000 && u != v) {
                if(d[v] > d[u] + c[u][v]) {
                    d[v] = d[u] + c[u][v];
                    trace[v] = u;
                }
            }
        }
    }

    // Không có đường
    if(d[t] == INF) {
        cout << 0;
        return 0;
    }

    // In kết quả
    cout << d[t] << "\n";

    vector<int> path;
    int cur = t;
    while(cur != -1) {
        path.push_back(cur);
        cur = trace[cur];
    }

    reverse(path.begin(), path.end());

    for(int x : path) cout << x << " ";
}