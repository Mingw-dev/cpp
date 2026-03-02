#include<bits/stdc++.h>
using namespace std;
long long giaithua (int n) {
    long long gt = 1;
    for(int i = 2 ; i <= n ; i++) gt *= i;
    return gt;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int &x : a) cin >> x;

        long long thu_tu = 1;

        for(int i = 0 ; i < n ; i++) {
            int cnt = 0;
            for(int j = i + 1 ; j < n ; j++){
                if(a[j] < a[i]) cnt++;
            }

            thu_tu += (long long) cnt * giaithua(n - i - 1);
        }
        cout << thu_tu << endl;
    }
}

int main() {
    solve();
}