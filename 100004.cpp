#include<bits/stdc++.h>
using namespace std;
int deg[10001];
int main() {
    int t;
    cin >> t;
    while(t--) {
        int dh , ch;
        cin >> dh >> ch;

        for(int i = 0 ; i < 10001; i++) {
            deg[i] = 0;
        }
        for(int i = 0 ; i < ch ; i++) {
            int u , v;
            cin >> u >> v;

            deg[u]++;
            deg[v]++;
        }

        int cnt = 0;
        for(int i = 1 ; i <= dh ; i++) {
            if(deg[i] % 2 != 0) cnt++; 
        }

        if(cnt == 0) {
            cout << "2\n";
        } else if(cnt == 2) {
            cout << "1\n";
        } else cout << "0\n";
    }
}