#include<bits/stdc++.h>
using namespace std;
bool vs[1001];
vector<int> a[1001];
int bo[1001];

void bfs(int u) {
    vs[u] = true;

    queue<int> q;
    q.push(u);
    while(!q.empty()) {
        int n = q.front();
        q.pop();

        for(int x : a[n]) {
            if(!vs[x]) {
                vs[x] = true;
                bo[x] = n;
                q.push(x);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n , m , d , c;
        cin >> n >> m >> d >> c;

        for(int i = 0 ; i < 1001 ; i++) {
            vs[i] = false;
            a[i].clear();
            bo[i] = 0;
        }

        for(int i = 0 ; i < m ; i++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
            a[v].push_back(u);
        }

        bfs(d);

        vector<int> path;
        int cur = c;
        while(cur != 0) {
            path.push_back(cur);
            if(cur == d) break;
            cur = bo[cur];
        }

        for(int i = path.size() - 1 ; i >= 0 ; i--) {
            cout << path[i] << " ";
        }
        cout << endl;
    }
}