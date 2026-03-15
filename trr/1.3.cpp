#include<bits/stdc++.h>
using namespace std;

int main() {

    freopen("DT.IN" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int op , n;
    cin >> op >> n;
    vector< vector<int> > a(n + 1 , vector<int> (n + 1));
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++)
            cin >> a[i][j];
    }
    if(op == 1) {
        for(int i = 1 ; i <= n ; i++) {
            int cnt = 0;
            for(int j = 1 ; j <= n ; j++){
                if(a[i][j] == 1) cnt++;
            } 

            cout << cnt << " ";
        }
        cout << endl;
    }

    else {
        vector<pair<int, int>> v;

        for(int i = 1 ; i <= n ; i++) {
            for(int j = i + 1 ; j <= n ; j++) {
                if(a[i][j] == 1) v.push_back({i , j});
            }
        }

        cout << n << " " << v.size() << "\n";
        int m = v.size();
        vector<vector<int>> b(n + 1, vector<int>(m + 1 , 0));
        for(int k = 0 ; k < m ; k++) {
            int g = v[k].first;
            int e = v[k].second;

            b[g][k + 1] = 1;
            b[e][k + 1] = 1;
        }

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++)
                cout << b[i][j] << " ";
            cout << endl;
        }
    }
}