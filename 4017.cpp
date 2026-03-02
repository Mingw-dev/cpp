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

        vector<int> a(n) , b(n - 1);

        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        int i = 0;
        bool check = false;
        while(i < n - 1) {
            if(a[i] != b[i]) {
                cout << i + 1;
                check = true;
                break;
            }
            i++;
        }

        if(!check) cout << a[n - 1];
        cout << endl;
    }
}

int main() {
    solve();
}