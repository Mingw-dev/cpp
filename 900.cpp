#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int v , e;
        cin >> v >> e;

        vector<int> a[v + 1];
        for(int i = 0 ; i < e ; i++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
            a[v].push_back(u);
        }

        for(int i = 1 ; i <= v ; i++) {
            sort(a[i].begin() , a[i].end());
        }

        for(int i = 1 ; i <= v ; i++){
            cout << i << ": ";
            for(auto x : a[i]) cout << x << " ";
            cout << endl;
        }

    }
}