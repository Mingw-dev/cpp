#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a , ll b){
    if(b == 0) return a;
    return gcd (b , a % b);
}
int main(){
    int t;
    cin >> t;

    while(t--){
       ll a;
       string b;
       cin >> a >> b;
     
       ll res = 0;
       for(auto x : b){
            res = (res * 10 + (x - '0')) % a;
       }
       cout << gcd(a , res) << endl;
    }
}