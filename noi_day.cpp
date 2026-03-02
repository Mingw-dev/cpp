#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            pq.push(x);
        }

        long long ans = 0;

        while(pq.size() > 1) {
            long long x1 = pq.top(); pq.pop();
            long long x2 = pq.top(); pq.pop();
            long long sum = x1 + x2 % mod;
            ans = (ans + sum) % mod;

            pq.push(sum);
        }

        cout << ans << "\n";
    }

    return 0;
}