#include<bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;

    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    while(t--) {
        int n;
        cin >> n;

        int res = 0;
        for(int x : a) {

            res += n / x;

            n %= x;

        }
        cout << res << "\n";
    }
}
int main() {
    solve();
}