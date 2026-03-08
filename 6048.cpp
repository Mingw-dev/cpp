#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;

        int x = min_element(a.begin() , a.end()) - a.begin();
        cout << x << endl;
    }
}