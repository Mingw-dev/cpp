#include<bits/stdc++.h>
using namespace std;
vector<int> a[100001];
bool vs[100001];

int dfs(int u) {
    vs[u] = true;
    int size = 1;
    for(int x : a[u]) {
        if(!vs[x])
        size += dfs(x);
    }

    return size;
}
int main() {
    int n , m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++) {
        int u , v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int base = dfs(1);
    int res = 0;
    for(int i = 1 ; i <= n ; i++) {
        if(!vs[i]) {
            int cur_size = dfs(i);
            if(cur_size > res) res = cur_size;
        }
    }

    cout << base + res << "\n";
}