#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, mx = "";
    while (cin >> s) {
        if (mx.empty() ||
            s.size() > mx.size() ||
            (s.size() == mx.size() && s > mx)) {
            mx = s;
        }
    }

    cout << mx;
    return 0;
}
