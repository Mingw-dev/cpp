#include<bits/stdc++.h>
using namespace std;
bool vs[1001];
vector<int> a[1001];
int pa[1001];

void bfs(int u) {
    vs[u] = true;

    queue<int> q;
    q.push(u);
    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(int i : a[x]) {
            if(!vs[i]) {
                vs[i] = true;
                pa[i] = x;
                q.push(i);
            }
        } 
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , m , d ,c;
        cin >> n >> m >> d >>c;

        for(int i = 0 ; i < 1001 ; i++) {
            a[i].clear();
            vs[i] = false;
            pa[i] = 0;
        }
        for(int i = 0 ; i < m ; i++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
        
        }
        bfs(d);
        if(!vs[c]) {
            cout << "-1\n";
            continue;
        }
        else {
            int cur = c;
            vector<int> path;
            while(true) {
                path.push_back(cur);
                if(cur == d) break;
                cur = pa[cur];
            }

            for(int i = path.size() - 1 ; i >= 0 ; i--) cout << path[i] << " ";
            cout << endl;
        }
    }
}