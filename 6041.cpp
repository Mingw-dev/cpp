#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int , int> mp;
        for(int &x : a) {
            cin >> x;
            mp[x]++;
        }

        int res = 0;
        int re;
        for(auto &x : mp) {
            if(x.second > res) {
                res = x.second;
                re = x.first;
            }
        }
        if(res > n / 2) cout << re << "\n";
        else cout << "NO\n";
    }
}

int main() {
    solve();
}