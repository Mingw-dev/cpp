#include<bits/stdc++.h>
using namespace std;
long long f[100];

char dq(int n , long long k) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= f[n - 2]) return dq(n - 2 , k);
    else return dq(n - 1, k - f[n - 2]);
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    f[1] = f[2] = 1;
    for(int i = 3 ; i < 93 ; i++) f[i] = f[i - 2] + f[i - 1];
    while(t--) {
        int n; long long k;
        cin >> n >> k;
        cout << dq(n , k) << endl;
    }
}

int main() {
    solve();
}