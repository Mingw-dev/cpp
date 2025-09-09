#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc(ll a , ll b){
    while( b != 0 ){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
ll lcm_ll (ll a , ll b ){
    return a / uc(a, b) * b;
}
int main(){
    int t ;
    cin >> t;
    while( t --){
        ll n , m;
        cin >> n >> m;
        
        cout << lcm_ll(n , m) << " " << uc(n , m) << endl;
    }

}