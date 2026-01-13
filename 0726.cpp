#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll a, ll b, ll c) {
    if (b == 0) return 0;
    // b LẺ → CỘNG a
    if (b % 2 == 1) {
        return (a % c + solve((a * 2) % c, b / 2, c)) % c;
    }
    // b CHẴN → KHÔNG CỘNG
    return solve((a * 2) % c, b / 2, c);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << '\n';
    }
}
