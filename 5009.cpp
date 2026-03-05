#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
bool ql(int i) {

    int sum = 0;
    for(int i = 0 ; i < n ; i++) sum += a[i];

    int ans = 0;
    for(int j = 0 ; j < n ; j++) {
        ans += a[j];
        if(sum - ans == ans) {
            return true;
            break;
        }
        else ql(i + 1);
        ans -= a[j];
    }


    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        if(ql(0)) cout << "YES\n";
        else cout << "NO\n";
    }
}