#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll merge(vector<int> &a , int l , int m , int r) {
    vector<int> x(a.begin() + l , a.begin() + m + 1);
    vector<int> y(a.begin() + m + 1 , a.begin() + r + 1);
    ll cnt = 0;
    int i = 0 , j = 0;
    
    int s1 = x.size(), s2 = y.size();

    while(i < s1 && j < s2) {
        if(x[i] <= y[j]) a[l++] = x[i++];

        else {
            cnt += (s1 - i);
            a[l++] = y[j++];
        }
    }

    while(i < s1) a[l++] = x[i++];
    while(j < s2) a[l++] = y[j++];

    return cnt;
}
ll mergesort(vector<int> &a , int l , int r) {
    ll cnt = 0;
    if (l < r) {
        int m = l + (r - l) / 2;

        cnt += mergesort(a, l, m);
        cnt += mergesort(a, m + 1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        cout << mergesort(a , 0 , n - 1) << endl;
    }
}

int main() {
    solve();
}