#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 123456789;
ll pw(ll a , ll n) {
    if( n == 0) return 1;
    ll x = pw(a , n / 2);
    if( n % 2 == 0 ) return (x * x) % mod;
    return ( (x * x) % mod * a) % mod;
}
ll dao(ll a) {
    ll d = 0;
    while(a > 0) 
    {
        d = d * 10 + a % 10;
        a /= 10;
    }
    return d;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        ll a;
        cin >> a;
        cout << pw(2 , a - 1) << endl;
    }
}

int main() {
    solve();
}