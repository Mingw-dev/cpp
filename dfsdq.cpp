#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vs[1001];
void dfs(int u) {
    vs[u] = true;
    cout << u << " ";

    for(int x : adj[u]) {
        if(!vs[x]) dfs(x);
    }
}