#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector <ll> a(n);
        for(int i = 0 ; i < n ; i ++) cin >> a[i];
        vector<ll> b, c;
        ll cnt = 0;
        for( auto x : a ) {
            if(x == 0) b.push_back(x);
            else c.push_back(x);
        }
        //sort( c.begin() , c.end());
        for(auto x : c) cout << x << " ";
        for(auto x : b) cout << x << " ";
        cout << endl;
    }
}