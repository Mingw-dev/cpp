#include <bits/stdc++.h>
using namespace std;
int n, m, s;
vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int v : adj[u]) {
            if(!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void printPath(int t) {
    vector<int> path;
    while(t != -1) {
        path.push_back(t);
        t = parent[t];
    }
    reverse(path.begin(), path.end());

    for(int x : path) cout << x << " ";
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> m >> s;

        for(int i = 1; i <= n; i++) {
            adj[i].clear();
            visited[i] = false;
            parent[i] = -1;
        }

        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(s);

        for(int i = 1; i <= n; i++) {
            if(i == s) continue;

            if(!visited[i]) {
                cout << "No path\n";
            } else {
                printPath(i);
            }
        }
    }
}