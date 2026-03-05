#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int v , e , x;

        cin >> v >> e >> x;

        vector<int> adj[v + 1];
        vector<bool> check(v + 1 , false);
        for(int i = 0 ; i < e ; i++) {
            int u , k;
            cin >> u >> k;

            adj[u].push_back(k);
            adj[k].push_back(u);
        }

        for(int i = 1 ; i <= v ; i++) {
            sort(adj[i].begin() , adj[i].end());
        }

        stack<int> st;
        st.push(x);

        while(!st.empty()) {
            int top = st.top();
            st.pop();
            
            if(!check[top]) {
                cout << top << " ";
                check[top] = true;

                for(int i = adj[top].size() - 1 ; i >= 0 ; i--) {
                    if(!check[adj[top][i]]) st.push(adj[top][i]);
                }
            }

        }
        cout << endl;
    }
}