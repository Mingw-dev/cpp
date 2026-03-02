#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        sort(a.begin() , a.end());

        ll ans = 0;
        for(int i = 0 ; i < n ; i++) {
            int res = (a[i] * i);
            ans += (res);
            ans %= mod;
        }

        cout << ans << endl;
    }
}