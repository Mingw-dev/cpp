#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int op , n , m;
    cin >> op >> n >> m;
    vector<int> a(n + 1);
    vector<vector<int>> v( n + 1 , vector<int> (m + 1 , 0));
    vector<pair<int , int> > pa;
    for(int i = 0 ; i < m ; i++) {
        int u , v;
        cin >> u >> v;
        a[u]++;
        a[v]++;

        pa.push_back({u , v});
    }

    if(op == 1) {
        for(int i = 1; i <= n ; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        cout << n << " " << m << "\n";
        for(int i = 0 ; i < m ; i++) {
            int g = pa[i].first;
            int e = pa[i].second;

            v[g][i + 1] = 1;
            v[e][i + 1] = 1;
        }

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
    }
}