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

        vector<int> dp(n , 1);
        int res = 0;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < i ; j++) {
                if(a[i] > a[j]) dp[i] = max(dp[i] , dp[j] + 1);
            }
            res = max(res , dp[i]);
        }

        cout << n - res << endl;
    }
}