#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        auto it = upper_bound(a.begin() , a.end() , k);
        if(it == a.begin()) cout << "-1\n";
        else {
            --it;
            cout << it - a.begin() + 1 << endl;
        }
    }
}
int main() {
    solve();
}