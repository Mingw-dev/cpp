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

        vector<int> dp(n , 0);
        int cnt = 0;
        dp[0] = a[0];
        dp[1] = max(a[0] , a[1]);
        for(int i = 2 ; i < n ; i++) {
            dp[i] = max(dp[i - 1] , dp[i - 2] + a[i]);
            cnt = max(cnt , dp[i]);
        }

        cout << cnt << endl;
    }
}