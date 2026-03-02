#include <bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        // MẢNG PHẢI ĐƯỢC SẮP XẾP
        // nếu đề không đảm bảo, phải sort (nhưng sẽ thành O(N log N))
        // sort(a.begin(), a.end());

        auto lb = lower_bound(a.begin(), a.end(), 0);
        auto ub = upper_bound(a.begin(), a.end(), 0);

        cout << (ub - lb) << endl;  // số lượng số 0
    }
}

int main() {
    solve();
}
