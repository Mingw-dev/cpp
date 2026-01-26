#include<bits/stdc++.h>
using namespace std;
void check(vector<int>&a , int n , int k) {

    vector<int> b(k + 1);
    set<int> se;
    for(int i = 1 ; i <= k ; i ++) b[i] = a[i];

    int cnt = 0;

    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;

    if(i == 0) cout << k << endl;

    else {
        b[i]++;

        for(int j = i + 1 ; j <= k ; j ++) b[j] = b[j - 1] + 1;

        for(int i = 1 ; i <= k ; i++) se.insert(b[i]);

        for(int i = 1 ; i <= k ; i++) {
            if ( !se.count(a[i])) cnt++;
        }

        cout << cnt << endl;
    }
}

void solve() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        vector<int> a(k + 1);

        for(int i = 1 ; i <= k ; i++) cin >> a[i];
        check(a , n , k);
    }
}

int main() {
    solve();
}