#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long dp[10001][10001];
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        for(int i = 0 ; i <= n ; i++) {
            for(int j = 0 ; j <= i ; j++) {
                if(j == 0 || j == i) dp[i][j] = 1;

                else 
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod; 
            }
        }

        cout << dp[n][k] << endl;
    }
}