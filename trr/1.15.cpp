#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t, n, m;
    cin >> t >> n >> m;

    int in[101] = {0};     // deg-
    int out[101] = {0};    
    vector<pair<int , int>> p;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        out[v]++;
        in[u]++;
        p.push_back({u , v});
    }

    if(t == 1) {
        for(int i = 1; i <= n; i++) {
            cout << out[i] << " " << in[i] << "\n";
        }
    } else {
        cout << n << " " << m << "\n";
        vector<vector<int> > a(n + 1 , vector<int>(m + 1 , 0));

        for(int i = 0 ; i < m ; i++) {
            int u = p[i].first;
            int v = p[i].second;
            a[u][i + 1] = 1;
            a[v][i + 1] = -1;
        }

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++) {
                cout << a[i] [j] << " ";
            }
            cout << endl;
        }
        
    }
}