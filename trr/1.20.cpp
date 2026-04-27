#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t , n;
    cin >> t >> n;
    int vao[101] = {0}, ra[101] = {0};
    if(t == 1) {
        for(int i = 1 ; i <= n ; i++) {
            int k;
            cin >> k;
            ra[i] = k;
            for(int j = 0 ; j < k ; j++) {
                int ke;
                cin >> ke;
                vao[ke]++;
            }
        }

        for(int i = 1 ; i <= n ; i++) cout << vao[i] << " " << ra[i] << "\n";
    } else {

        vector<pair<int, int>> v;

        for(int i = 1 ; i <= n ; i++) {
            int cnt;
            cin >> cnt;

            while(cnt--) {
                int u;
                cin >> u;
                v.push_back({i , u});
            }
        }
        int m = v.size();
        vector<vector<int>> a(n + 1 , vector<int>(m + 1 , 0));

        for(int i = 0 ; i < m ; i++) {
            int re1 = v[i].first;
            int re2 = v[i].second;
            a[re1][i+1] = 1;
            a[re2][i+1] = -1;
        }

        cout << n << " " << m << "\n";
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}