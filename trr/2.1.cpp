#include <bits/stdc++.h>
using namespace std;

int n, u, v, t;
int a[105][105];
bool vs[105];
int pth[105];
bool found = false;

// DFS tìm đường đi từ u -> v
void dfs(int s) {
    vs[s] = true;
    if(s == v) {
        found = true;
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(a[s][i] && !vs[i]) {
            pth[i] = s;
            dfs(i);
            if(found) return; // dừng sớm khi tìm thấy
        }
    }
}

int main() {
    // freopen("TK.INP", "r", stdin);
    // freopen("TK.OUT", "w", stdout);

    cin >> t;
    cin >> n >> u >> v;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    // ===== TH1: đếm đường đi độ dài 2 =====
    if(t == 1) {
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(a[u][i] && a[i][v]) cnt++;
        }
        cout << cnt;
    }

    // ===== TH2: tìm đường đi DFS =====
    else {
        memset(vs, false, sizeof(vs));
        memset(pth, -1, sizeof(pth));

        dfs(u);

        if(!found) {
            cout << 0;
        } else {
            vector<int> path;
            int cur = v;
            while(cur != -1) {
                path.push_back(cur);
                cur = pth[cur];
            }
            reverse(path.begin(), path.end());

            for(int x : path) cout << x << " ";
        }
    }

    return 0;
}