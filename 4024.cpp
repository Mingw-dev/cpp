#include<bits/stdc++.h>
using namespace std;
int n , m;
int mod = 1e9 + 7;
struct matran{
    long long f[15][15];
};

matran operator * (matran a , matran b) {
    matran c;
    for(int i = 0 ; i < n ; i ++) {
        for(int j = 0 ; j < n ; j++) {
            c.f[i][j] = 0;
            for(int k = 0 ; k < n ; k++) {
                c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[k][j]) % mod) % mod;
            }
        }
    }
    return c;
}

matran pwm(matran a , int n) {
    if(n == 1) return a;

    matran x = pwm(a , n / 2);

    if(n % 2 == 0) return x * x;
    else return a * x * x;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        matran a;
        for(int i = 0 ; i < n ; i ++) {
            for(int j = 0 ; j < n ; j ++) cin >> a.f[i][j];
        }

        matran c;
        c = pwm(a , m);

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j ++) {
                cout << c.f[i][j] << " ";
            }
            cout << endl;
        }

    }
}
int main() {
    solve();
}