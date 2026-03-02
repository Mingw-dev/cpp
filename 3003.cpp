#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);

        for(int &x : a) cin >> x;

        sort(a.begin() , a.end());

        ll Max = 0;
        for(int i = 0 ; i < n ; i ++) {
            Max += a[i] * i;
            Max %= MOD;
        }

        cout << Max << "\n";

    }
}
int main() {
    solve();
}