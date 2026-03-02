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
        vector<long long> a(n) , b(n);
        for(long long &x : a) cin >> x;
        for(long long &x : b) cin >> x;
        sort(a.begin() , a.end());

        sort(b.begin() , b.end() , greater<long long> ());

        long long result = 0;
        for(int i = 0 ; i < n ; i++) 
        {
            result += (a[i] * b[i]);
        }

        cout << result << endl;
    }
}
int main() {
    solve();
}