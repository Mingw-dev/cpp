#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int i = n - 2;
        while (i >= 0 && s[i] <= s[i + 1]) i--;
        if (i < 0) {
            cout << "-1\n";
            continue;
        }
        // tìm phần tử lớn nhất nhỏ hơn s[i] bên phải
        int j = -1;
        char best = '0';
        for (int k = i + 1; k < n; ++k) {
            if (s[k] < s[i] && s[k] >= best) { // lớn nhất nhưng nhỏ hơn s[i]
                best = s[k];
                j = k;
            }
        }

        swap(s[i], s[j]);
        cout << s << "\n";
    }

    return 0;
}
