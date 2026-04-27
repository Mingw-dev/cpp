#include<bits/stdc++.h>
using namespace std;
int n , m;
vector<int> a[1001];
bool check[1001];
int id[1001] , low[1001];
int cnt;
stack<int> st;
int scc;// số thành phần liên thông

void tar(int u) {
    id[u] = low[u] = cnt++;

    st.push(u);
    check[u] = true;

    for(int v : a[u]) {
        if(!id[v]) {
            tar(v);
            low[u] = min(low[u] , low[v]);
        } else if(check[v]) {
            low[u] = min(low[u] , id[v]);
        }
    }

    if(id[u] == low[u]) {
        scc++;
        while(true) {
            int top = st.top(); st.pop();
            check[top] = false;
            if(top == u) break;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> m;

        for(int i = 0 ; i < 1001 ; i++) {
            a[i].clear();
            id[i] = 0;
            low[i] = 0;
            check[i] = false;
        }

        cnt = scc = 0;
        while(!st.empty()) st.pop();

        for(int i = 1 ; i <= m ; i++) {
            int u , v;
            cin >> u >> v;

            a[u].push_back(v);
        }

        for(int i = 1 ; i <= n ; i++) {
            if(!id[i]) {
                tar(i);
            }
        }
        if(scc == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}