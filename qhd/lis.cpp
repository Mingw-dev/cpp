#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &x :a) cin >> x;

    vector<int> dp(n , 1);
    int res = INT_MIN;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i ; j++) {
            if(a[i] > a[j]) {   
                dp[i] = max(dp[i] , dp[j] + 1);
            }
        }
        res = max(dp[i] , res);
    }

    cout << res << endl;
}