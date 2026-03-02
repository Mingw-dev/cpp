#include<bits/stdc++.h>
using namespace std;
int Mod = 1e9 + 7;
using ll = long long;
ll pw(ll a , ll n) {
   
    if(n == 0) return 1;
    ll x = pw(a , n / 2);
    if(n % 2 == 0) return ( x * x ) % Mod;
    else return ( ( (x * x) % Mod ) * a ) % Mod;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a , n;
    bool check = true;
    while(check) {
        cin >> a >> n;
        if(a == 0 &&n == 0) check = false;
        else {
            cout << pw(a , n) << endl;
        }
    }
}

int main() {
    solve();
}