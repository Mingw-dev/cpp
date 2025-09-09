#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int prime[MAX];
void sieve(){
    for(int i = 0 ; i < MAX ; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i * i < MAX ; i++){
        if(prime[i]){
            for(int j = i * i ; j < MAX ; j+=i)
                prime[j] = 0;
        }
    }
}
int sum(int n){
    int tong = 0;
    while(n > 0){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
bool smith(int n){
    if(prime[n]) return false;
    int cs = sum(n);
    int us = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        while(n % i == 0){
            us += sum(i);
            n /= i;
        }
    }
    if( n > 1 ) us += sum(n);
    if(us == cs) return true;
    else return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        if(smith(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}