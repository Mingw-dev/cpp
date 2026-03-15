#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("DT.INP" , "r" , stdin);
    freopen("DT.out" , "w" , stdout);
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
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] == 1) cnt++;
            }

            cout << cnt << " ";
        }
        cout << "\n";
    }

    else {
        cout << n << "\n";
        for(int i = 1 ; i <= n ; i++) {
            int dem = 0;
            vector<int> v;
            for(int j = 1 ; j <= n ; j++) {
                if(a[i][j] == 1) {
                    dem++;
                    v.push_back(j);
                }
            }
            cout << dem << " ";
            for(auto x : v) cout << x << " ";
            cout << endl;
        }
    }
}