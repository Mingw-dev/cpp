#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n , s , m;
        cin >> n >> s >> m;
        if(m > n || (s > 6 && 6 * n < 7 * m)) cout << "-1\n";
        else {
            int total = m * s;
            int day = total / n;
            if(total % n != 0)   day += 1;

            cout << day << endl;
        }
    }
}
int main() {
    solve();
}