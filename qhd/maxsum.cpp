#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        vector<int> dp(n);
        dp[0] = a[0];
        dp[1] = max(a[0] , a[1]);
        int res = INT_MIN;
        for(int i = 2 ; i < n ; i++) {
            dp[i] = max(dp[i - 1] , dp[i - 2] + a[i]);
            res = max(res , dp[i]);
        }
        cout << res << endl;

    }
}