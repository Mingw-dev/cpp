#include<bits/stdc++.h>
using namespace std;
void solve() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for(int i = 1 ; i <= n ; i++) cin >> a[i];

    vector<int> b , c;

    for(int i = 1 ; i <= n ; i++) {
        if(i % 2 == 0) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    sort(b.begin() , b.end() , greater<int> ());
    sort(c.begin() , c.end());
    int ib = 0 , ic = 0;
    for(int i = 1 ; i <= n ; i++) {
        if(i % 2 == 0) a[i] = b[ib++];
        else a[i] = c[ic++];
    }

    for(int i = 1 ; i <= n ; i ++) cout << a[i] << " " ;
    cout << endl;

}
int main() {
    solve();
}