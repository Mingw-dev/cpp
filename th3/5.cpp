#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool vs[1001];
int n , m;
void dfs(int u , int xoa) {
    vs[u] = true;
    for(int x : a[u]) {
        if(!vs[x] && x != xoa) {
            dfs(x , xoa);
        }
    }
}

int demlt(int xoa) {
    int cnt = 0;
    for(int i = 0 ; i < 1001 ; i++) {
            vs[i] = false;
    }
    for(int i = 1 ; i <=n ; i++) {
        if(!vs[i] && i != xoa) {
            cnt++;
            dfs(i , xoa);
        }
    }

    return cnt;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 0 ; i < 1001 ; i++) {
            a[i].clear();
        }
        
        for(int i = 0 ; i < m ; i++) {
            int u , v;
            cin >> u >> v;
            
            a[u].push_back(v);
            a[v].push_back(u);
        }
        
        int base = demlt(-1);

        int res = -1;

        int node = 0;

        for(int i = 1 ; i <= n ; i++) {
            int cur = demlt(i);
            if(cur > res) {
                res = cur;
                node = i;
            }
        }

        if(res > base) {
            cout << node << "\n";
        } else cout << "0\n";
    }
}