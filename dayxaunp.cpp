#include<bits/stdc++.h>
using namespace std;
long long fi[100];
char dq(int n , long long k) {
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= fi[n - 2]) return dq(n - 2 , k);
    else return dq(n - 1 , k - fi[n - 2]);
}
void solve() {
    int t;
    cin >> t;
    fi[1] = fi[2] = 1;
    for(int i = 3 ; i <= 92 ; i++) fi[i] = fi[i - 2] + fi[i - 1];
    while(t--) {
        int n ;
        long long k;
        cin >> n >> k;
        cout << dq(n , k) <<endl; 
    }
}
int main() {
    solve();
}