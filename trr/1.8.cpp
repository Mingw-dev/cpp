#include<bits/stdc++.h>
using namespace std;
int main() {
    // freopen("DT.INP" , "r" , stdin);
    // freopen("DT.OUT" , "w" , stdout);
    int op , n;
    cin >> op >> n;
    vector<int> deg(n + 1);
    vector<pair<int , int>> pa;
    for(int i = 1 ; i <= n ; i++) {
        int x;
        cin >> x;
        deg[i] = x;
        
        for(int j = 0 ; j < x ; j++) {
            int y;
            cin >> y;
            if(i < y) pa.push_back({i , y});
        }
    }
    
    
    if(op == 1) {
        for(int i = 1 ; i <= n ; i++) cout << deg[i] << " ";
        cout << endl;
    } else {
        cout << n << " " << pa.size() << "\n";
        int m = pa.size();
        vector<vector<int>> ve(n + 1 , vector<int>(m + 1 , 0));
        
        for(int i = 0 ; i < m ; i++) {
            int fn = pa[i].first;
            int mw = pa[i].second;

            ve[fn][i + 1] = 1;
            ve[mw][i + 1] = 1;
        }

        for(int i = 1; i <= n ; i++) {
            for(int j = 1 ; j <= m ; j++) {
                cout << ve[i][j] << " ";
            }
            cout << endl;
        }
    }

}