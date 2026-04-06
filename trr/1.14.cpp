#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t , n;
    cin >> t >> n;
    vector<vector<int>> vp(n + 1, vector<int>(n + 1));
    vector<pair<int, int>> canh;
    vector<pair<int, int>> bb;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) 
            cin >> vp[i][j];
    }

    for(int i = 1 ; i <= n ; i++) {
        int out = 0, in = 0;
        for(int j = 1 ; j <= n ; j++) {
            out += vp[i][j];
            in += vp[j][i];

            if(vp[i][j] == 1) canh.push_back({i , j}); 
        }

        bb.push_back({out , in});
    }
    if(t == 1) {
        for(auto x : bb) {
            cout << x.second << " " << x.first << "\n";
        }
    }
    else {
        int m = canh.size();
        cout << n << " " << m << "\n"; 
        vector<vector<int>> lt(n + 1 , vector<int>(m + 1 , 0));

        for(int i = 0 ; i < m ; i++) {
            int d1 = canh[i].first;
            int d2 = canh[i].second;

            lt[d1][i + 1] = 1;
            lt[d2][i + 1] = -1;
        }
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++) {
                cout << lt[i][j] << " ";
            }
            cout << endl;
        }
    }
}