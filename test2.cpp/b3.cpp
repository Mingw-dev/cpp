#include<bits/stdc++.h>
using namespace std;
int n , m;
vector<int> a;

bool check(int x) {
    int prev = 0;

    for(int i = 0 ; i < n ; i++) {
        if(a[i] + x < m) {

            if(a[i] + x < prev) return false;
            prev = max(prev , a[i]);
        } else {
            int limit = (a[i] + x) % m;
            if(prev <= limit) {}
            else prev = max(prev , a[i]);
        }
    }
    return true;
}
int main() {
    cin >> n >> m;
    a.resize(n);
    for(int &x : a) cin >> x;

    int l = 0, r = m , ans = m;

    while(l <= r) {
        int mid = (l + r) / 2;
        if(check(mid)) {
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
    }

    cout << ans;
}