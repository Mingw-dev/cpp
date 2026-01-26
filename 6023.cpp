#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    vector<int> a(n);

    for(auto &x : a) cin >> x;

    for(int i = 0 ; i < n - 1 ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(a[i] > a[j]) swap(a[i] , a[j]);
        }
        cout << "Buoc " << i + 1 << ": ";

        for(int k = 0 ; k < n ; k++) cout << a[k] << " " ;

        cout << "\n";
    }

}

int main() {
    solve();
}