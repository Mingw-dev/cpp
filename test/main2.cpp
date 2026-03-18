#include<bits/stdc++.h>
using namespace std;
int n , k;
int mod = 1e9 + 7;
struct matr {
    long long f[15][15];
};

matr operator * (matr a , matr b) {
    matr c;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            c.f[i][j] = 0;
            for(int k = 0 ; k < n ; k++) {
                c.f[i][j] = (c.f[i][j] + ( a.f[i][k] * b.f[k][j]) % mod) % mod;
            }
        }
    }

    return c;
}

matr pwm(matr a , int n) {
    if(n == 1) return a;
    matr x = pwm(a , n/2);
    
    if(n % 2 == 0) return x * x;
    else return x * x * a;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        matr a;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                cin >> a.f[i][j];
            }
        }

        matr c = pwm(a , k);
        long long sum = 0;
        for(int i = 0 ; i < n ; i++) {
            sum = (sum + c.f[i][n - i - 1] % mod) % mod ;
        }
        cout << sum << endl;
    }
}