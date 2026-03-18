#include<bits/stdc++.h>
using namespace std;
void dfs(int dd , int dc , vector<int> adj[] , bool vs[]) {
    vs[dd] = true;
    if(vs[dc]) return;
    
    for(int x : adj[dd]) {
        if(!vs[x]) {
            dfs(x , dc , adj , vs);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int v , e;
        cin >> v >> e;
        vector<int> adj[v + 1];
        
        for(int i = 0 ; i < e ; i++) {
            int x , y;
            cin >> x >> y;
            
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int tc;
        cin >> tc;
        while(tc--) {
            bool vs[10001] = {false};
            int dd , dc;
            cin >> dd >> dc;
            dfs(dd , dc , adj , vs);
            if(!vs[dc]) cout << "NO\n";
            else cout << "YES\n";
        }

    }
}