#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(string &a , ll m){
    ll mod = 0;
    for(char c : a) {
        mod = (mod * 10 + (c - '0')) % m;
    }
    return mod;
}
ll binpower( ll a , ll b , ll m){
    if( b == 0 ) return 1;
    ll res = binpower(a , b / 2 , m);
    if( b % 2 == 0) return ((res % m) * (res % m)) % m;
    else return ((res % m) * (res % m) * (a % m)) % m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a ;
        ll b , m;
        cin >> a >> b >> m;
        ll mod = solve(a , m);
        ll kq = binpower(mod , b , m);
        cout << kq << endl;
    }
}