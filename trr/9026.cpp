#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int v , e , dd , dc;
        cin >> v >> e >> dd >> dc;

        vector<int> adj[v + 1];
        bool vs[10001] = {false};
        int dad[10001] = {0};
        for(int i = 0 ; i < e ; i++) {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        queue<int> q;
        q.push(dd);
        vs[dd] = true;
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            if(vs[dc]) break;
            for(int x : adj[u]) {
                if(!vs[x]) {
                    vs[x] = true;
                    dad[x] = u;
                    q.push(x);
                }
            }
        }

        if(!vs[dc]) {
            cout << "-1\n";
            continue;
        } else {
            vector<int> path;
            int cur = dc;
            while(cur != 0) {
                path.push_back(cur);
                cur = dad[cur];
            }

            for(int i = path.size() - 1 ; i >= 0 ; i--) {
                cout << path[i] << " ";
            }
        }

        cout << endl;
    }
}