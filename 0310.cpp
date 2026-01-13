#include <bits/stdc++.h>
using namespace std;

void tong(string a, string b) {
    // đảo ngược để cộng từ phải qua trái
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // đệm b cho bằng a
    while (b.size() < a.size()) b = b +"0" ;
    vector<int> z;
    int tmp = 0;
    for (int i = 0; i < a.size(); i++) {
        int sum = (a[i] - '0') + (b[i] - '0') + tmp;
        z.push_back(sum % 10);
        tmp = sum / 10;
    }
    if (tmp) z.push_back(tmp);

    reverse(z.begin(), z.end());
    for (auto x : z) cout << x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        // tổng min
        for (auto &x : a) if (x == '6') x = '5';
        for (auto &x : b) if (x == '6') x = '5';
        if (a.size() >= b.size()) tong(a, b);
        else tong(b, a);
        cout << " ";
        // tổng max
        for (auto &x : a) if (x == '5') x = '6';
        for (auto &x : b) if (x == '5') x = '6';
        if (a.size() >= b.size()) tong(a, b);
        else tong(b, a);
        cout << "\n";
    }
}
