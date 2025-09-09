#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000001
int prime[MAX];
void sieve(){
    for(int i = 0 ; i < MAX ; i ++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i * i < MAX ; i++){
        if(prime[i]){
            for(int j = i * i ; j < MAX ; j+=i)
            prime[j] = 0;
        }
    }
}
ll finbo(int n){
    ll f[93];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2 ; i < 93 ; i++){
        f[i] = f[i-1] + f[i - 2];
    }
    return f[n];
}
int main(){
    //sieve();
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << finbo(n) << endl;
    }
}