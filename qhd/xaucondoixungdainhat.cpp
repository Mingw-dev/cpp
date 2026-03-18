#include<bits/stdc++.h>
using namespace std;
bool f[1005][1005];
int n;
int qhd(string s , int l , int r) {
    int n = s.size(), ans = INT_MIN;
    int i , j;
    memset(f , false , sizeof(f));
    for(i = r - 1 ; i >= l - 1 ; i--) {
        for(j = i ; j <= r - 1 ; j++) {
            if(i == j) f[i][j] = true;
            else if(s[i] == s[j]) {
                if(j - i == 1) f[i][j] = true;
                else f[i][j] = f[i + 1][j - 1];
            }
            if(f[i][j]) ans = max(ans , j - i + 1);
        }
    }
    return ans >= 2;
}
int main() {
    string s;
    cin >> s;
    int t;
    cin >> t;
    while(t--) {
        int l , r;
        cin >> l >> r;
        if(qhd(s , l , r)) cout << "YES\n";
        else cout << "NO\n";
    }
}