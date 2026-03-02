#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int &x : a) cin >> x;

        int res = INT_MAX;

        sort(a.begin() , a.end());

        for(int i = 1 ; i < n ; i++ ) {
            res = min (res , a[i] - a[ i - 1 ] );
        }
        cout << res << endl;
    }
}