#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n) , b(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        
        sort(b.begin() , b.end());

        bool ok = true;
        for(int i = 0 ; i < n ; i++) 
        {
            if(a[i] != b[i] && a[i] != b[ n - i  - 1]) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "Yes\n";
        else cout << "No\n";
        
    }
}
int main() {
    solve();
}