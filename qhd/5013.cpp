//đặt dp[i] là số cách để lên bậc thang với dp[0] = 1;

#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> dp(n + 1);
        
        dp[0] = 1;
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= 3 ; j++) {
                if(i - j >= 0) {
                    dp[i] = (dp[i] + dp[i - j]);
                }
            }
        }

        cout << dp[n] << endl;
    }
}