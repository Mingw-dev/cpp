#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000;
const int maxr = 800;
const long long mod = 1e9 + 7;
long long c[maxn + 1][maxr + 1];
// C(n , r) = C(n - 1 , r - 1) + C(n - 1 , r);
void solve(){
    for(int n = 0 ; n <= maxn ; n++){
        c[n][0] = 1;
        for(int r = 1 ; r <= n && r <= maxr ; r++){
            if(r == n) c[n][r] = 1;
            else c[n][r] = ( (c[n - 1][r] % mod ) + ( c[n - 1] [r - 1] ) % mod ) % mod;
        }
    }

}
int main(){
    solve();
    int t;
    cin >> t;
    while(t--){
        int n , r;
        cin >> n >> r;
        cout << c[n][r] << endl;
    }
}