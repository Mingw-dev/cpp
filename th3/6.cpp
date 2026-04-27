#include<bits/stdc++.h>
using namespace std;
vector<int> a[100005];
bool vs[100005];
bool check;

void dfs(int u , int p) {
    vs[u] = true;

    for(int v : a[u]) {
        if(!vs[v]) {
            dfs(v , u);
            if(check) return;

        }

        else if(v != p) {
            check = true;
            return;
        }
    }
}
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n , m ;
        cin >> n >> m;

        for(int i = 1 ; i <= n ; i++) {
            a[i].clear();
            vs[i] = false;
        }
        check = false;

        for(int i = 0 ; i < m ; i ++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
            a[v].push_back(u);

        }

        for(int i = 1 ; i <= n ; i++) {
            if(!vs[i]) {
                dfs(i , -1);
                if(check) break;
            }

        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}