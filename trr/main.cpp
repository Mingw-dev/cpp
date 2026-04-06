#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t, n , k;
    cin >> t >> n >> k;
    int vao[105] = {0};
    int ra[105] = {0};
    vector<pair<int , int>> c;
    for(int i = 0 ; i < k ; i++) {
        int u , v;
        cin >> u >> v;
        c.push_back({u , v});
        vao[u]++;
        ra[v]++;
    }

    if(t == 1) {
        for(int i = 1 ; i <= n ; i++) {
            cout << ra[i] << " " << vao[i] << "\n";
        }
    } else {
        cout << n << " " << c.size() << "\n";
        vector<vector<int>> lt(n + 1 , vector<int> (k + 1));
        for(int i = 0 ; i < c.size() ; i++) {
            int in = c[i].first;
            int out = c[i].second;
            lt[in][i+1] = 1;
            lt[out][i+1] = -1;
        }

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= k ; j++) {
                cout << lt[i][j] << " ";
            }
            cout << endl;
        }
    }
}