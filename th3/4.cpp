#include<bits/stdc++.h>
using namespace std;
const int MAX = 100005;
bool vs[MAX];
int idx[MAX],low[MAX];
vector<int> a[MAX];
stack<int> st;

int tmr = 0 , cnt = 0;
void dfs(int u) {
    idx[u] = low[u] = ++ tmr;

    st.push(u);
    vs[u] = true;

    for(int v : a[u]) {
        if(idx[v] == 0) {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else if(vs[v]) {
            low[u] = min(low[u] , idx[v]);
        }
    }

    if(idx[u] == low[u]) {
        while(!st.empty()) {
            int node = st.top();
            st.pop();

            vs[node] = false;
            if(node == u) break;
        }
        cnt++;
    }
}
int main() {
    int n , m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++) {
        int u , v;
        cin >> u >> v;

        a[u].push_back(v);
       
    }

    for(int i = 1 ; i <= n ; i++) {
        if(idx[i] == 0) {
            dfs(i);
        }
    }

    cout << cnt << endl;
}