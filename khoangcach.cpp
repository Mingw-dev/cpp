#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    vector<int> a(n);

    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());

    long long ans = 0; // Dùng long long để an toàn tuyệt đối
    for(int i = 0 ; i < n ; i++) {
        // Tìm vị trí đầu tiên của phần tử >= a[i] + k
        auto it = lower_bound(a.begin() + i + 1, a.end(), a[i] + k);

       
        int cnt = it - a.begin();
        ans += (cnt - i - 1);
    }
    cout << ans << endl;
}

int main() {
    // Tối ưu I/O đặt ở đây là chuẩn nhất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}