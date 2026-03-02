#include<bits/stdc++.h>
using namespace std;
void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n , m , k;
        cin >> n >> m  >> k;
        vector<int> a(n) , b(m);

        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        vector<int> c(m + n);

        int i = 0 , j = 0 , idx = 0;
        while(i < n && j < m) {
            if(a[i] < b[j]) c[idx++] = a[i++];

            else c[idx++] = b[j++];
        }
        while(i < n) c[idx++] = a[i++];
        while(j < m) c[idx++] = b[j++];
        // for(int x : c) cout << x << " ";
        // cout << endl;
        cout << c[k - 1] << endl;
    }
}
int main() {
    solve();
}