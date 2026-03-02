#include<bits/stdc++.h>
using namespace std;
int n , k , a[1001], ok = 1;
void ktao() {
    for(int i = 0 ; i < n ; i++) a[i] = 0;
}
void sinh() {
    int i = n - 1;
    while( i >= 0 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if(i == -1) ok = 0;
    else a[i] = 1;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    vector<int> b(n);

    for(int &x : b) cin >> x;

    int cnt = 0;
    ktao();
    while(ok) {
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            if(a[i] == 1) {
                sum += b[i];
            }
        }
        if(sum == k) {
            cnt ++;
            for(int i = 0 ; i < n ; i++){
                if(a[i] == 1)
                cout << b[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    cout << cnt << endl;

}

int main() {
    solve();
}