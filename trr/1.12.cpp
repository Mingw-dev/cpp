#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t, n;
    cin >> t >> n;
    vector<vector<int>> a(n + 1 , vector<int>(n + 1));

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) 
            cin >> a[i][j];
    }

    vector<pair<int, int>> vp;
    vector<pair<int ,int>> bb;
    
    for(int i = 1 ; i <= n ; i++) {
        int in = 0 , out = 0;
        for(int j = 1 ; j <= n ; j++) {
            // a[i][j]
            out += a[i][j];
            in += a[j][i];
            if(a[i][j] == 1) vp.push_back({i , j});
        }
        bb.push_back({out , in});

    }

    if(t == 1) {
        for(auto x : bb) {
            cout << x.second << " " << x.first << "\n";
        }
    } else {
        cout << n << " " << vp.size() << "\n";
        for(auto x : vp) {
            cout << x.first << " " << x.second << "\n";
        }
    }

}