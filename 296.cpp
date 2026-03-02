#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;

    vector<ll> dp(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++) {
        int x;
        cin >> x;

        if(x > 0) {
            dp[i] = dp[i - 1] + x;
        }
        else dp[i] = dp[i - 1];
    }

    while(q--) {
        int l , r;
        cin >> l >> r;

        cout << dp[r] - dp[l - 1] << endl;
    }

}

int main() {
    solve();
}