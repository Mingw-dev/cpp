#include<bits/stdc++.h>
using namespace std;

void sinh(string &s) {
    int n = s.size();
    int i = n - 1;
    while(i >= 0 && s[i] == '0'){
        s[i] = '1';
        --i;
    }
    if(i == -1) {
        for(int i = 0 ; i < n ; i++) s[i] = '1';
    }
    else s[i] = '0';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;

        sinh(s);
        for(char x : s) cout << x ;

        cout << endl;
        
    }


}