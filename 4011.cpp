#include<bits/stdc++.h>
using namespace std;
long long solve(string &s) {
    reverse(s.begin() , s.end());
    long long res = 0;
    for(int i = 0 ; i < s.size(); i++) {
        if(s[i] == '1') {
            res +=(long long) pow(2 , i);
        }
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1;
        string s2;

        cin >> s1 >> s2;

        cout << solve(s1) * solve(s2) << endl;
    }
}