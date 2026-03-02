#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct matran{
    ll f[2][2];
};

int mod = 1e9 + 7;

matran operator * (matran a , matran b) {
    matran c;

    for(int i = 0 ; i < 2 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            c.f[i][j] = 0;
            for(int k = 0 ; k < 2 ; k++)    
                c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[k][j]) % mod) % mod;
        }
    }

    return c;

}
matran pwm (matran a , int n) {
    if(n == 1) return a;
    matran x = pwm(a , n / 2);
    if(n % 2 == 0) return x * x;
    else return x * x * a;
}
int main() {
    
}