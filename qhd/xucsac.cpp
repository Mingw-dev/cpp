#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
long long f[1000001];

int main() {
    int n;
    cin >> n;

    f[0] = 1;

    for(int s = 1; s <= n; s++) {
        for(int j = 1; j <= 6; j++) {
            if(s - j >= 0) {
                f[s] = (f[s] + f[s - j]) % MOD;
            }
        }
    }

    cout << f[n];
}