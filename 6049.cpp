#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Bước 1: Sắp xếp - O(N log N)
    sort(a.begin(), a.end());

    ll ans = 0;
    int r = 0;

    // Bước 2: Hai con trỏ - O(N)
    for (int l = 0; l < n; l++) {
        // Đẩy r đi xa nhất có thể
        while (r < n && a[r] - a[l] < k) {
            r++;
        }
        
        // Các cặp thỏa mãn là (l, l+1), (l, l+2), ..., (l, r-1)
        // Số lượng là: (r - 1) - l
        if (r > l) {
            ans += (r - l - 1);
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}