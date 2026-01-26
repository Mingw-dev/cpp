#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &a , int n , int k) {

    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;

    if(i < 1) {
        for(int i = 1 ; i <= k ; i++) {
            a[i] = i;
        }
    } else {
        a[i] ++;
        for(int j = i + 1 ; j <= k ; j++) a[j] = a[j - 1] + 1;
    }

}
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n , k;
        cin >> n >> k;
        vector<int> a( k + 1);

        for(int i = 1 ; i <= k ; i++) {
            cin >> a[i];
        }
        solve(a , n , k);
        for(int i = 1 ; i <= k ; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}