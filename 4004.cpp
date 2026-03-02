#include<bits/stdc++.h>
using namespace std;
long long pw(int n) {
    if(n == 1) return 2;
    long long x = pw(n / 2);
    if(n % 2 == 0) return x * x;
    else return 2 * x * x;
}

char dq(int n , int k) {
    if(n == 1) return 'A';
    long long len = pw(n - 1);

    if(k == len) return 'A' + (n - 1);
    if(k < len) return dq(n - 1, k);
    else return dq(n - 1 , k - len);
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << dq(n , k) << endl;
    }
}

int main() {
    solve();
}