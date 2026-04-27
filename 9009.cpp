#include<bits/stdc++.h>
using namespace std;
bool vs[1001];
vector<int> a[1001];
void bfs(int u) {
    vs[u] = true;

    queue<int> q;
    q.push(u);
    
    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(int x : a[v]) {
            if(!vs[x]) {
                vs[x] = true;
                q.push(x);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(vs , false , sizeof(vs));
        
        int dh, ch;
        cin >> dh >> ch;
        for(int i = 0 ; i <= dh ; i++) {
            a[i].clear();
        }
        for(int i = 1 ; i <= ch; i++) {
            int db , cc;
            cin >> db >> cc;
            a[db].push_back(cc);
            a[cc].push_back(db);
        }


        int cnt = 0;

        for(int i = 1 ; i <= dh ; i++) {
            if(!vs[i]) {
                cnt++;
                bfs(i);
            }
        }
        cout << cnt << "\n";
    }
}