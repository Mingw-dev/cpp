#include<bits/stdc++.h>
using namespace std;
void solve(string &s) {
    int n = s.size() - 1;
    int i = n;
    while(i >=0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if(i < 0) {
        for(int i = 0 ; i <= n ; i++) {
            s[i] = '0';
        } 
    }
    else  s[i] = '1';
}
int main() {
    int t;

    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        solve(s);

        for(char x : s) cout << x;

        cout << "\n";

    }
}