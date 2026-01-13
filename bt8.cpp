#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a , long long b, long long &x , long long &y){
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1 , y1;
    long long g = gcd(b , a % b , x1 , y1);
    x = y1;
    y = x1 - ( a / b ) * y1;
    return g;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a , m;
        cin >> a >> m;
        long long x , y;
        long long g = gcd(a , m , x , y);
        if(g != 1) {
            cout << "-1\n";
        }
        else {
            long long res = (x % m + m) % m;
            cout << res << "\n";
        }
    }
}