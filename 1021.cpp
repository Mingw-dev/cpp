#include<bits/stdc++.h>
using namespace std;

void sinh(vector<int> &a , int n , int k) {
    int i = k;
    vector<int> b(k + 1 , 0);

    int cnt = 0;
    set<int> se1;
    set<int> se2;
    for(int i = 1 ; i <= k ; i++) {
        b[i] = a[i];
        se1.insert(a[i]);
    }
    while(i >= 1 && b[i] == n - k + i) --i;

    if(i == 0) {
        cout << k << endl;
    }

    else {
        b[i] ++;
        for(int j = i + 1 ; j <= k ; j++) {
            b[j] = b[j - 1] + 1;
        }

        for(int i = 1 ; i <= k ; i++) {
            se2.insert(b[i]);
        }
        for(int x : se1) {
            if(!se2.count(x)) cnt++;
        }
        cout << cnt << endl;
    }

}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);
        for(int i = 1 ; i <= k ; i++) cin >> a[i];

        sinh(a , n , k);
    }

}
int main() {
    solve();
}