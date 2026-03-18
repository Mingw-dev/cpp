#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        int msu = 0;
        int res = INT_MIN;
        for(int i = 0 ; i < n ; i ++) {
            msu += a[i];
            res = max(msu , res);
            if(msu < 0) {
                msu = 0;
            }
        }
        cout << res << endl;
    }
}