#include<bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        priority_queue<long long , vector<long long> , greater<long long>> a;

        for(int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            a.push(x);
        }

        long long res = 0;
        while(a.size() > 1) {
            long long fi = a.top(); a.pop();
            long long se = a.top(); a.pop();

            long long sum = fi + se;
            res += (fi + se);

            a.push(sum);

        }
        cout << res << "\n";
    }
}
int main() {
    solve();
}