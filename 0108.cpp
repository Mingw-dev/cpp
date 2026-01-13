#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n , k; cin >> n >> k;
        ll s1 = (n / k) * (k - 1) * k / 2;
        ll mod = n % k;
        ll s2 = mod * (mod + 1) / 2;
        ll s = s1 + s2;
        if(s == k) cout << "1\n";
        else cout << "0\n";
    }
}