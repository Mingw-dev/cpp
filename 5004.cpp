#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    
    vector<int> dp(n , 1);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0 ; i < n ; i ++) {
        for(int j = 0 ; j < i ; j++) {
            if(a[j] < a[i]) dp[i] = max (dp[i], dp[j] + 1);
            ans = max(ans , dp[i]);
        }
    }
    
    cout << ans << endl;
    
}

int main() {
    solve();
}