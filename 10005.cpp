#include<bits/stdc++.h>
using namespace std;

vector<int> a[1001];
int vao[1001];
int ra[1001];
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n , m;
        cin >> n >> m;

        for(int i = 0 ; i < 1001 ; i++) {
            a[i].clear();
            vao[i] = 0;
            ra[i] = 0;
        }
        for(int i = 0 ; i < m ; i++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
            ra[u]++;
            vao[v]++;
        }

        bool check = true;
        for(int i = 1 ; i <= n ; i++) {
            if(vao[i] != ra[i]) {
                check = false;
                break;
            }
        }

        if(check) cout << "1\n";
        else cout << "0\n";
    }
}