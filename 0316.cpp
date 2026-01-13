#include<bits/stdc++.h>
using namespace std;
bool lucky(long long n){
    if(n < 10) return n == 9;
    long long s = 0;
    while(n > 0){
        s += n % 10;
        n /= 10;
    }
    return lucky(s);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        long long n = 0;
        for(auto x : s) n += x - '0';
        if(lucky(n)) cout << "1\n";
        else cout << "0\n";
    }
}