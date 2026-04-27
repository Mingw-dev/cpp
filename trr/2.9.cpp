#include<bits/stdc++.h>
using namespace std;

int n;
int a[101][101];
bool vs[101];
vector<int> lth;
void dfs(int x) {
    vs[x] = true;
    lth.push_back(x);

    for(int i = 1 ; i <= n ; i++) {
        if(a[x][i] && !vs[i]) {
            dfs(i);
        }
    }
}

int main() {
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) cin >> a[i][j];
    }

    vector<vector<int>> pth;
    for(int i = 1 ; i <= n ; i++) {
        if(!vs[i]) {
            lth.clear();
            dfs(i);
            sort(lth.begin() , lth.end());
            pth.push_back(lth);
        }
    }

    cout << pth.size() << "\n";
    for(int i = 0 ; i < pth.size() ; i++) {
        for(int x : pth[i]) cout << x << " ";
        cout << endl;
    }
}