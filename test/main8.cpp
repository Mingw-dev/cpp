#include<bits/stdc++.h>
using namespace std;

bool check (vector<int> &a , int n , int m , int d) {
    int cnt = 1;
    int last = a[0];

    for(int i = 1 ; i < n ; i++) {
        if(a[i] - last >= d) {
            cnt ++;
            last = a[i];
        }
        if(cnt == m) return true;
    }
    return false;
}
int main() {
    int n , m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
     
    sort(a.begin() , a.end());
    int l = 0;
    int r = a[n - 1] - a[0];
    int ans = 0;

    while(l <= r) {
        int mid = (l + r) / 2;

        if(check(a , n , m, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}