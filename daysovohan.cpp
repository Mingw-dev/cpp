


#include<bits/stdc++.h>
using namespace std;

struct matran{
    long long f[2][2];
};

int mod = 1e9 + 7;
matran operator * (matran a , matran b) {
    matran c;
    int i , j , k;
    for(int i = 0 ; i < 2 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            c.f[i][j] = 0;

            for(int k = 0 ; k < 2 ; k++) {
                c.f[i][j] += ( a.f[i][k] * b.f[k][j] % mod) % mod; 
            }
        }

    }
    return c;
}
matran pwm(matran a , int n) {
    if( n == 1 ) return a;
    matran x = pwm(a , n / 2);
    if(n % 2 == 0) return (x * x) ;
    else return x * x * a;
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if(n == 0) {
            cout << "0\n";
            continue;
        }
        matran a;
        a.f[0][0] = 1;a.f[0][1] = 1;
        a.f[1][0] = 1;a.f[1][1] = 0;

        matran res = pwm(a , n);

        cout << res.f[0][1] << endl;
    }
}

int main() {
    solve();
}