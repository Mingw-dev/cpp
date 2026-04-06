#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<vector<int>> b;
void solve(int n, int max_val) {
    if (n == 0) {
        b.push_back(a);
        return;
    }

    for (int i = min(n, max_val); i >= 1; i--) {
        a.push_back(i);            // chọn số i
        solve(n - i, i);           // xử lý phần còn lại
        a.pop_back();              // quay lui
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        a.clear();

        solve(n, n);
        
        cout << endl;
    }
}