#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        if (s.size() >= 2 && s[s.size()-2] == '8' && s[s.size()-1] == '6')
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}
