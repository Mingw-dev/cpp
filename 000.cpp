#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int v , e;
        cin >> v >> e;

        vector<int> a[v + 1];
        for(int i = 0 ; i < e ; i++) {
            int u , x;
            cin >> u >> x;
            a[u].push_back(x);
            a[x].push_back(u);
        }

        for(int i = 1 ; i <= v; i++) {
            sort(a[i].begin() , a[i].end());
        }


        for(int i = 1 ; i <= v ; i++) {
            cout << i << ": ";
            for(int x : a[i]) cout << x << " ";
            cout << endl;
        }
    }
}