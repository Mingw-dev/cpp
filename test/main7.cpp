#include<bits/stdc++.h>
using namespace std;

long long f[50];
long long a[50];

long long solve(int n , long long k) {
    if(n == 0) return min(1LL , k);
    if(n == 1) return 0;

    if(k <= f[n - 1]) return solve(n - 1 , k);

    else return a[n - 1] + solve(n - 2 , k - f[n - 1]);
}
int main() {
    int t;
    cin >> t;
   
    f[0] = f[1] = 1;
    a[0] = 1;
    a[1] = 0;

    for(int i = 2 ; i <= 46 ; i++) {
        f[i] = f[i - 1] + f[i - 2];
        a[i] = a[i - 1] + a[i - 2];
    }
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << solve(n , k) << endl;
    }
}