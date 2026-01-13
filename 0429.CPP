#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < b; i++) {
        int x; cin >> x;
        a[x] = 1; 
    }

    int cnt = 0;
    for (int i = 1; i <= k; i++)
        if (a[i]) cnt++;

    int res = cnt;
    for (int i = k + 1; i <= n; i++) {
        if (a[i - k]) cnt--; 
        if (a[i]) cnt++; 
        res = min(res, cnt);
    }

    cout << res << "\n";
}
