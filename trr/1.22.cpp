#include<bits/stdc++.h>
using namespace std;

int vao[1001] = {0}, ra[1001] = {0};
int a[1001][1001];
int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t;
    int n , m;

    cin >> t >> n >> m;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) a[i][j] = 10000;
    }
    for(int i = 0 ; i < m ; i++) {
        int u , v , pt;
        cin >> u >> v >> pt;
        vao[v]++;
        ra[u]++;
        a[u][v] = pt;
    }

    if(t == 1) {
        for(int i = 1 ; i <= n ; i++) {
            cout << vao[i] << " " << ra[i] << "\n";
        }
    } else {
        cout << n << "\n";

        
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= n ; j++) {
                if(i == j) a[i][j] = 0;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}