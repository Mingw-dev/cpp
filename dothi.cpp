#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

vector<int> adj[MAXN];
int num[MAXN], low[MAXN];
bool visited[MAXN];
int timer;
vector<pair<int,int>> bridges;

void dfs(int u, int parent) {
    visited[u] = true;
    num[u] = low[u] = ++timer;

    for (int v : adj[u]) {
        if (v == parent) continue;

        if (!visited[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            if (low[v] > num[u]) {
                if (u < v)
                    bridges.push_back({u, v});
                else
                    bridges.push_back({v, u});
            }
        } else {
            low[u] = min(low[u], num[v]);
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int V, E;
        cin >> V >> E;

        // reset
        for (int i = 1; i <= V; i++) {
            adj[i].clear();
            visited[i] = false;
        }
        bridges.clear();
        timer = 0;

        // input
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // chạy DFS
        for (int i = 1; i <= V; i++) {
            if (!visited[i]) {
                dfs(i, -1);
            }
        }

        // sắp xếp theo từ điển
        sort(bridges.begin(), bridges.end());

        // output
        for (auto &p : bridges) {
            cout << p.first << " " << p.second << " ";
        }
        cout << endl;
    }

    return 0;
}