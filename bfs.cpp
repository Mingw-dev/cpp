#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int v , e , x;
        cin >> v >> e >> x;

        vector<int> a[v + 1];
        vector<bool> vs(v + 1 , false);

        for(int i = 0 ; i < e ; i++) {
            int m , n;
            cin >> m >> n;
            a[m].push_back(n);
            a[n].push_back(m);
        }

        for(int i = 1 ; i <= v ; i++) sort(a[i].begin() , a[i].end());
        queue<int> q;
        q.push(x);

        while(!q.empty()) {
            int re = q.front();
            q.pop();

            if(!vs[re]) {
                cout << re << " ";
                vs[re] = true;
                for(int i : a[re]) {
                    if(!vs[i]) q.push(i);
                }
            }
        }
        cout << endl;
    }
}