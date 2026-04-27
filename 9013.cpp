#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a[1001];
int id[1001], low[1001];
bool visited[1001];
int timer;

vector<pair<int,int>> bridges;

void dfs(int u, int parent) {
    visited[u] = true;
    id[u] = low[u] = ++timer;

    for(int v : a[u]) {
        if(v == parent) continue;
        
        if(!visited[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            //kiểm tra cạnh cầu
            if(low[v] > id[u]) {
                bridges.push_back({u, v});
            }
        }
        else {
            low[u] = min(low[u], id[v]);
        }
    }
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u); // vô hướng
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            dfs(i, -1);
        }
    }

    for(auto x : bridges) {
        cout << x.first << " " << x.second << endl;
    }
}