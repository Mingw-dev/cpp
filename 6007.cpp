#include<bits/stdc++.h>
using namespace std;
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
        int l = 0 , r = n  - 1;
        while( l < n - 1 && a[l+1] >= a[l]) l++;
        while( r > 0 && a[r - 1] <= a[r]) r--;


        int smx = *max_element(a.begin() + l , a.begin() + r + 1);
        int smn = *min_element(a.begin() + l , a.begin() + r + 1);

        while(l > 0 && a[l - 1] > smn) l--;

        while( r < n - 1 && a[r + 1] < smx) r++;

        cout << l + 1 << " " << r + 1 << endl;


    }
}

int main() {
    solve();
}