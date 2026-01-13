#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll pow1 (ll a , ll b , ll p){
    if(b == 0) return 1;
    ll x = pow1( a , b / 2 , p);
    if(b % 2 == 1) return ((x * x) % p * a) % p;
    else return (x * x) % p;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a , b , p;
        cin >> a >> b >> p;
        cout << pow1 (a , b , p) << "\n";
    }
}