#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
vector<int> adj[MAXN];

int num[MAXN], low[MAXN], timer;
bool inStack[MAXN];
stack<int> st;
int scc;
//low[u]: đỉnh nhỏ nhất mà u có thể quay về

//num[u]: thứ tự thăm đỉnh u
void tarjan(int u) {
    num[u] = low[u] = ++timer;
    st.push(u);
    inStack[u] = true;

    for (int v : adj[u]) {
        if (!num[v]) {
            tarjan(v);
            low[u] = min(low[u], low[v]); // từ u qua v, nếu v quay về được thì u cũng về được
        }
        else if (inStack[v]) {
            low[u] = min(low[u], num[v]); // u có đường quay trực tiếp vể v
        }
    }

    if (low[u] == num[u]) {
        scc++;
        while (true) {
            int v = st.top(); st.pop();
            inStack[v] = false;
            if (v == u) break;
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        // reset
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            num[i] = low[i] = 0;
            inStack[i] = false;
        }
        while (!st.empty()) st.pop();

        timer = 0;
        scc = 0;

        // nhập cạnh
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        // chạy Tarjan
        for (int i = 1; i <= n; i++) {
            if (!num[i]) tarjan(i);
        }

        if (scc == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}