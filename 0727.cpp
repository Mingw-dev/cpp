#include <bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long prev2 = a[0];                 // dp[i-2]
        long long prev1 = max(a[0], a[1]);      // dp[i-1]

        for (int i = 2; i < n; i++) {
            long long cur = max(prev1, prev2 + a[i]);
            prev2 = prev1;
            prev1 = cur;
        }

        cout << prev1 << '\n';
    }
    return 0;
}
