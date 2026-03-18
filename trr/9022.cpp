#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int v , e , n;
        cin >> v >> e >> n;

        bool vs[v + 1] = {false};
        vector<int> adj[v + 1];
        for(int i = 1 ; i <= e ; i++) {
            int dd , dc;
            cin >> dd >> dc;
            adj[dd].push_back(dc);
            //adj[dc].push_back(dd);
        }

        queue<int> q;
        q.push(n);
        vs[n] = true;
        while(!q.empty()) {
            int x = q.front();
            q.pop();
            
            cout << x << " ";
            
            for(auto i : adj[x]) {
                if(!vs[i]) {
                    vs[i] = true;
                    q.push(i);
                }
            }

        }
        cout << endl;   
    } 
}