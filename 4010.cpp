#include<bits/stdc++.h>
using namespace std;
void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;
        int res = INT_MIN , sum = 0;

        for(int i = 0 ; i < n ; i++) {
            sum += a[i];
            if(sum > res) {
                res = max(sum , res);
            }
            if(sum < 0) sum = 0;
        }
        cout << res << endl;
    }
}
int main() {
    solve();
}