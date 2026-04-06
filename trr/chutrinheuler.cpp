#include <bits/stdc++.h>
using namespace std;

int n, m, t, u_start, deg[105];
set<int> adj[105];
bool vis[105];

void dfs(int u) {
    vis[u] = 1;
    for (int v : adj[u]) if (!vis[v]) dfs(v);
}

int main() {
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    
    if (!(cin >> t >> n >> m)) return 0;
    if (t == 2) cin >> u_start;

    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        adj[u].insert(v); adj[v].insert(u);
        deg[u]++; deg[v]++;
    }

    if (t == 1) {
        int odd = 0, start = -1;
        for (int i = 1; i <= n; i++) {
            if (deg[i] % 2) odd++;
            if (deg[i] > 0) start = i;
        }
        // Kiểm tra tính liên thông của các đỉnh có cạnh
        if (start != -1) dfs(start);
        for (int i = 1; i <= n; i++) 
            if (deg[i] > 0 && !vis[i]) { cout << 0; return 0; }
        
        if (odd == 0) cout << 1;
        else if (odd == 2) cout << 2;
        else cout << 0;
    } 
    else {
        stack<int> st; vector<int> res;
        st.push(u_start);
        while (!st.empty()) {
            int u = st.top();
            if (!adj[u].empty()) {
                int v = *adj[u].begin();
                st.push(v);
                adj[u].erase(v); adj[v].erase(u);
            } else {
                res.push_back(u); st.pop();
            }
        }
        reverse(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++) 
            cout << res[i] << (i == res.size() - 1 ? "" : " ");
    }
    return 0;
}