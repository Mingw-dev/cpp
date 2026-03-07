#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for(auto &x : a) cin >> x;

        ll res = 0;
        ll mini = LLONG_MAX;

        for(int i = 0 ; i < n - 1 ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                ll req = a[i] + a[j];
                if(abs(req) < mini) {
                    mini = abs(req);
                    res = req;
                }
            }
        }

        cout << res << "\n";
        
    }
}