#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1000000000 + 7;
ll binpower(ll a , ll b , ll mod){
    if( b == 0) return 1;
    ll res = binpower(a , b / 2 , mod);
    if(b % 2 == 0) return ((res % mod) * (res % mod)) % mod;
    else return ((res % mod) * (res % mod) * (a % mod)) % mod;
}
int main(){
    ll a , b;
    cin >> a >> b;
    cout << binpower(a , b);
}