#include<bits/stdc++.h>
using namespace std;
void tk(vector<int> &a , int n , int x) {
    int l = 0 , r = n - 1;
    bool check = false;
    while( l <= r ) 
    {
        int m = (l + r) / 2;
        if(a[m] == x) {
            check = true;
            cout << m + 1 << endl;
        }
        if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    if(!check) cout << "NO\n";
}
void solve() {
    int t;
    cin >> t;
    while(t--) {
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        tk(a , n , x);
    }
}
int main() {
    solve();
}