#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll C[20][20];
void tohop(){

    for(int i = 0 ; i <= 15 ; i++){
        C[i][0] = 1;

        for(int j = 1 ; j <= i ; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

}

void solve() {
    int n , k;
    cin >> n >> k;

    vector<int> a(k+1 , 0);
    for(int i = 1 ; i <= k ; i++) cin >> a[i];

    ll stt = 1;
    for(int i = 1 ; i <= k ; i++) {
       

        for(int j = a[i - 1] + 1; j < a[i] ; j++) {
            stt += C[n - j][k - i];
        }
    }
    cout << stt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tohop();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}