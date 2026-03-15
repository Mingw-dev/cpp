#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int op , n , m;
    cin >> op >> n >> m;
    vector<int> a(n + 1);
    vector<vector<int> > b(n + 1, vector<int>(n + 1 , 0));
    if(op == 1) {
        for(int i = 1 ; i <= m ; i++) {
            int u, v;
            cin >> u >> v;
            a[u]++;
            a[v]++;
        }
        for(int x = 1 ; x <= n ; x++) cout << a[x] << " ";
        cout << endl; 
    } else {
        for(int i = 1 ; i <= m ; i++) {
            int u, v;
            cin >> u >> v;
            b[u][v] = 1;
            b[v][u] = 1;
        }
        cout << n << "\n";
        for(int i = 1 ; i < n + 1 ; i++) {
            int cnt = 0;
            vector<int> res;
            for(int j = 1 ; j < n + 1 ; j++) {
                if(b[i][j] == 1) {
                    cnt++;
                    res.push_back(j);
                }
            }
            cout << cnt << " ";
            for(int x : res) cout << x << " ";
            cout << endl;
        }
    }

}