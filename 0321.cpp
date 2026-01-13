#include <bits/stdc++.h>
using namespace std;
void solve(string a, string b) {
    int l1 = a.size(), l2 = b.size();
    vector<int> x(l1), y(l2);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < l1; i++) x[i] = a[i] - '0';
    for (int i = 0; i < l2; i++) y[i] = b[i] - '0';
    for (int i = l2; i < l1; i++) y.push_back(0);
    vector<int> z(l1);
    int tmp = 0;
    for (int i = 0; i < l1; i++) {
        int result = x[i] - y[i] - tmp;
        if (result < 0) {
            result += 10;
            tmp = 1;
        } else tmp = 0;
        z[i] = result;
    }
    reverse(z.begin(), z.end());
    for (auto c : z) cout << c;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a.size() > b.size() || (a.size() == b.size() && a >= b))
            solve(a, b);
        else 
            solve(b, a);
        cout << "\n";
    }
}
