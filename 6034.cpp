#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--) {
        long long n , k;
        cin >> n >> k;

        vector<long long> a(n);

        for(auto &x : a) cin >> x;
        map<long long , long long> mp;

        long long re = 0;
        for(int i = 0 ; i < n ; i++) {
            int tk = k - a[i];

            if(mp.count(tk)) {
                re += mp[tk];
            }

            mp[a[i]]++;
        }

        cout << re << "\n";
    }
}

int main() {
    solve();
}