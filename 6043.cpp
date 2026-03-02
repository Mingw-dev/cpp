#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a(1001, 0);
vector<vector<int>> b;

void ql(int i) {
    for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if(i == k) {
            vector<int> tmp(a.begin() + 1, a.begin() + k + 1);
            b.push_back(tmp);
        }
        else ql(i + 1);
    }
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;

        b.clear();
        fill(a.begin(), a.end(), 0);

        ql(1);

        for(int i = b.size() - 1; i >= 0; i--) {
            for(int x : b[i]) cout << x << " ";
            cout << endl;
        }
    }
}

int main() {
    solve();
}
