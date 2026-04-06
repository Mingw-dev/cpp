#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t , n;
    cin >> t >> n;
    
    vector<tuple<int, int , int>> vp;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            cin >> a[i][j];
            if(a[i][j] != 10000 && a[i][j] != 0) vp.push_back({i , j , a[i][j]});
        }
    }

    if(t == 1) {
        for(int i = 1 ; i <= n ; i++) {
            int in = 0, out = 0;
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] != 10000 && a[i][j] != 0) out ++;
                if(a[j][i] != 10000 && a[j][i] != 0) in ++;
            }
            cout << in << " " << out << "\n";
        }
    } else {
        cout << n << " " << vp.size() << "\n";
        for(auto x : vp) {
            int u , v , w;
            tie(u , v , w) = x;
            cout << u << " " << v << " " << w << "\n";
        }
    }
}