#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000001
int prime[MAX];
void sieve(){
    for(int i = 0 ; i < MAX ; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i * i < MAX ; i++){
        if(prime[i]){
            for(int j = i * i ; j < MAX ; j += i) 
            prime[j] = 0;
        }
    }
}
int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        ll x , y ; cin >> x >> y;
        ll bd = x < y ? x : y;
        ll kt = x > y ? x : y;
        ll res = 0;
        for(ll i = bd ; i <= sqrt(kt) ; i++){
            if(prime[i]) res ++;
        }
        cout << res << endl;
    }
    return 0;
}