#include<bits/stdc++.h>
using namespace std;

int main() {

    freopen("DT.INP" , "r" , stdin);
    freopen("DT.OUT" , "w" , stdout);
    int t, n;
    cin >> t >> n;

    vector<vector<int>> a(n + 1 , vector<int>(n + 1));
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            cin >> a[i][j];
        }
    }

    if(t == 1) {
        for(int i = 1 ; i <= n ; i++) {
            int vao = 0 , ra = 0;
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] == 1) ra++;
                if(a[j][i] == 1) vao++;
            }

            cout << vao << " " << ra << "\n";
        }
    } else {
        cout << n << "\n";
        for(int i = 1 ; i <= n ; i++) {
            int cnt = 0;
            vector<int> ke;
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] == 1) {
                    cnt++;
                    ke.push_back(j);
                }
            }
            cout << cnt << " ";
            for(auto x : ke) cout << x << " ";
            cout << endl;
        }
        
    }
}