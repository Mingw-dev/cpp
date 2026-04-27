#include<bits/stdc++.h>
using namespace std;
bool vs[1001];

vector<int> ad[1001];

void dfs(int u) {
    vs[u] = true;

    for(int x : ad[u]) {
        if(!vs[x]) dfs(x);
    }
   
}
int main() {
    int t;
    cin >> t;

    while(t--) {
        int dh, ch;
        cin >> dh >> ch;
        for(int i = 1 ; i <= 1001 ; i++) {
            vs[i] = false;
            ad[i].clear();
        }
        for(int i = 0 ; i < ch ; i++) {
            int u , v;
            cin >> u >> v;

            ad[u].push_back(v);
            ad[v].push_back(u);
        }

        int cnt = 0;

        for(int i = 1 ; i <= dh ; i++) {
            if(!vs[i]) {
                dfs(i);
                cnt++;
            }
        }

        cout << cnt << "\n";
    }
}