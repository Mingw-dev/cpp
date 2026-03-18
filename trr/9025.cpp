#include<bits/stdc++.h>
using namespace std;

int v , e , d , c;
bool vs[10001];
int dad[10001];
vector<int> adj[10001];
void dfs(int u) {
    vs[u] = true;
    if(vs[c]) return;

    for(int x : adj[u]) {
        if(!vs[x]) {
            dad[x] = u;
            dfs(x);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> v >> e >> d >> c;
        for(int i = 1 ; i <= v ; i++) {
            adj[i].clear();
            vs[i] = false;
            dad[i] = 0;
        }

        for(int i = 1 ; i <= e; i++) {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        dfs(d);
        if(!vs[c]) {
            cout << "-1\n";
            continue;
        } else {
            vector<int> path;
            int cur = c;
            while(cur != 0) {
                path.push_back(cur);
                cur = dad[cur];
            }

            for(int i = path.size() - 1 ; i >= 0 ; i--) {
                cout << path[i] << " " ;
            }
            cout << endl;

        }
    }
}