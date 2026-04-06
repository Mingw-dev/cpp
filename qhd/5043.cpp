#include<bits/stdc++.h>
using namespace std;
bool f[1001][1001];
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        memset(f, false, sizeof(f));
        int n = s.size();
        int ans = 0;

        for(int i = n - 1 ; i >= 0 ; i--){
            for(int j = i ; j < n ; j++) {
                if(i == j) f[i][j] = true;
                else if(s[i] == s[j]) {
                    if(j - i == 1) f[i][j] = true;
                    else f[i][j] = f[i+1][j-1];
                }
                if(f[i][j]) ans = max(ans , j - i + 1);
            }
        }
        cout << ans << endl;
    }
}