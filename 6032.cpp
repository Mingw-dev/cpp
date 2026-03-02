#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(long long &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long cnt = 0;

        for(int i = 0 ; i < n - 2 ; i++) {
            int j = i + 1, l = n - 1;
            while(j < l) {
                if(a[i] + a[j] + a[l] < k) {
                    cnt += (l - j);
                    j++;
                } else {
                    l--;
                }
            }
        }
        cout << cnt << endl;
    }
}

int main() {
    solve();
}
