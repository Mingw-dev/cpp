#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll unt(ll n){
    ll maxnt = -1;
    while(n % 2 == 0){
        maxnt = 2;
        n /= 2;
    }
    for( ll i = 3 ; i * i <= n ; i += 2){
        while(n % i == 0){
            maxnt = i;
            n /= i;
        }
    }
    if(n > 2) maxnt = n;
    return maxnt;
}
int main(){
    int t;cin >> t;
    while(t--){
        string s;
        cin >> s;
        int r = 0;
        for(char c : s){
            r = (r * 2 + (c-'0')) % 5;
        }
        if( r == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}