#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n , m , k;
        cin >> n >> m >> k;

        vector<int> a(n) , b(m) , c(k);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int &x : c) cin >> x;

        int i = 0 , j = 0 , l = 0;
        bool check = false;
        while( i < n && j < m && l < k) {
            if(a[i] == b[j] && b[j] == c[l]) {
                cout << a[i] << " ";
                check = true;
                i++; j++; l++;
            }
            else if(a[i] < b[j]) i++;
            else if(b[j] < c[l]) j++;
            else l++;
        }
        if(!check) cout << "-1\n";
        cout << endl;
    }
}

int main() {
    solve();
}