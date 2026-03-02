#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n) , lis(n , 1);
        for(int &x : a) cin >> x;
        int ans = 0;
        for(int i = 0 ; i < n ; i ++) {
            for(int j = 0 ; j < i ; j++) {
                if(a[j] <= a[i]) lis[i] = max (lis[i] , lis[j] + 1);
                ans = max(ans , lis[i]);
            }
        }

        cout << n - ans << endl;
    }
}

int main() {
    solve();
}