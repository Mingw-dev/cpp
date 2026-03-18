#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        sum += a[i];
    }
    vector<vector<int>> dp(n , vector<int>(n , 0));
    for(int i = 0 ; i < n ; i++) {
        dp[i][i] = a[i];
    }
    for(int len = 2 ; len <= n ; len ++) {
        for(int i = 0 ; i <= n - len ; i++) {
            int j = i + len - 1;
            int l = a[i] + min((i + 2 <= j) ? dp[i + 2][j] : 0 , (i + 1 <= j - 1) ? dp[i + 1][j - 1] : 0);
            
            int r = a[j] + min((i + 1 <= j - 1) ? dp[i + 1][j - 1] : 0 , (i <= j - 2) ? dp[i][j - 2] : 0);

            dp[i][j] = max(l , r);
        }
        int ti = dp[0][n-1];

        int teo = sum - ti;

        cout << ti << " " << teo << endl;
    }

}