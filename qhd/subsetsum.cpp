#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , s;
        cin >> n >> s;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        vector<bool> dq(s + 1 , false);

        dq[0] = true;

        for(int i = 0 ; i < n ; i++) {
            for(int j = s ; j >= a[i] ; j--) {
                if(dq[j - a[i]]) dq[j] = true;
            }
        }

        if(dq[s]) cout << "YES\n";
        else cout << "NO\n";
    }
}