#include<bits/stdc++.h>
using namespace std;
void xly(set<int> &se, int &a) {
   
    while(a != 0) {
        se.insert(a % 10);
        a /= 10;
    }
} 

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
        set<int> se;

        for(int x : a) {
            xly(se , x);
        }

        for(int x : se) cout << x << " ";
        cout << "\n";
    }
}
int main() {
    solve();
}