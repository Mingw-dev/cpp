#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pos(n + 1);
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        pos[x] = i;

    }
    int ans = 0;
    int res = 1;
    for(int i = 2 ; i <= n ; i++) {
        if(pos[i] > pos[i - 1]) res++;
        else res = 1;
        ans = max(ans , res);
    }
    cout << n - ans << endl;
}


int main() {
    solve();
}