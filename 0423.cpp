#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int cnt = 0; // tổng số phần tử <= k
        for(int x : a) if(x <= k) cnt++;
        int freq = 0; 
        for(int i = 0; i < cnt; i++) {
            if(a[i] <= k) freq++;
        }
        int res = freq;
        for(int i = cnt; i < n; i++) {
            if(a[i - cnt] <= k) freq--;
            if(a[i] <= k) freq++;
            res = max(res, freq);
        }
        cout << cnt - res << "\n";
    }
}
