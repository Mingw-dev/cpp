#include<bits/stdc++.h>
using namespace std;
int n , u , v;

int a[1001][1001];
bool vs[1001];
int bo[1001];
bool check = false;

void dfs(int x) {
    vs[x] = true;

    if(x == v) {
        check = true;
        return;
    }

    for(int i = 1 ; i <= n ; i++) {
        if(a[x][i] && !vs[i]) {
            bo[i] = x;
            dfs(i);

            if(check) return;
        }
    }
}
int main() {
    int t;
    cin >> t;
    cin >> n >> u >> v;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    if(t == 1) {
        int cnt = 0;

        for(int i = 1 ; i <= n ; i++) {
            if(a[u][i] && a[i][v]) cnt++;
        }

        cout << cnt << endl;
    } else {
        memset(vs , false , sizeof(vs));
        memset(bo , -1 , sizeof(bo));

        
    }
}