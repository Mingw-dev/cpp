#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // n đỉnh, m cạnh

    vector<int> adj[n + 1];
    vector<bool> visited(n + 1, false);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // nếu là đồ thị vô hướng
    }

    stack<int> st;
    st.push(1);  // bắt đầu từ đỉnh 1

    while(!st.empty()) {
        int u = st.top();
        st.pop();

        if(!visited[u]) {
            cout << u << " ";
            visited[u] = true;

            // đẩy các đỉnh kề vào stack
            for(int v : adj[u]) {
                if(!visited[v]) {
                    st.push(v);
                }
            }
        }
    }
}