#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD = 1000000007;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n , x;
        cin >> n >> x;
        ll res = 0, lt = 1;
        int a[2001];
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = n - 1; i >= 0 ; i--){
            res += a[i] * lt;
            res %= MOD;
            lt *= x;
            lt %= MOD;
        } 
        cout << res << endl;
    }
}