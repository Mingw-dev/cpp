#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for(long long &i : a) cin >> i;

    sort(a.begin() , a.end() , greater<long long>());
    long long res = LLONG_MIN;

    res = max(res , (a[0] * a[1] * a[2]));

    res = max(res , a[n - 1] * a[ n - 2] * a[0]);

    res = max(res , a[0] * a[1]);

    res = max(res , a[n - 1] * a[ n - 2]);


    cout << res << "\n";
}
int main() {
    solve();
}