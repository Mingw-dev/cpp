#include<bits/stdc++.h>
using namespace std;
void dfs(bool vs[] , vector<int> a[], int u) {
    cout << u << " ";
    vs[u] = true;

    for(auto x : a[u]) {
        if(!vs[x]) {
            dfs(vs , a , x);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) 
    {   
        int v , e , u;
        cin >> v >> e >> u;
        bool vs[v + 1] = {false};
        vector<int> a[v + 1];
        for(int i = 0 ; i < e ; i++) {
            int x , y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(vs , a , u);
        cout << "\n";
    }
}