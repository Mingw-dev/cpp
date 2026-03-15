#include<bits/stdc++.h>
using namespace std;

int main() {
    //freopen("DT.INP" , "r" , stdin);
    //freopen("DT.OUT" , "w" , stdout);
    int op , n;
    cin >> op >> n;
    int a[n + 1][n + 1];

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) 
        cin >> a[i][j];
    }
    vector<int> de;
    vector<pair<int , int>> p;
    if(op == 1) {
        for(int i = 1 ; i <= n ; i++) {
            int cnt = 0;
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] != 0 && a[i][j] != 10000) {
                    cnt++;
                }
            }
            de.push_back(cnt);
        }

        for(int x : de) cout << x << " ";
        cout << endl;
    } else {
        for(int i = 1 ; i <= n ; i++) {
            for(int j = i + 1 ; j <= n ; j++) {
                if(a[i][j] != 0 && a[i][j] != 10000) {
                    p.push_back({i , j});
                }
            }
        }

        cout << n << " " << p.size() << "\n";
        for(auto x : p) {
            cout << x.first << " " << x.second << " " << a[x.first][x.second] << "\n";  
        }
    }
}