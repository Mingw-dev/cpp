#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem có phải toán tử không
bool check(string x) {
    return (x == "+" || x == "-" || x == "*" || x == "/");
}

// Thực hiện phép tính với thứ tự y (trước) và x (sau)
long long tinhtoan(long long y, long long x, string c) {
    if (c == "+") return y + x;
    if (c == "-") return y - x;
    if (c == "*") return y * x;
    if (c == "/") return y / x;
    return 0;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    stack<long long> st;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (check(s)) {
            // Lấy 2 số hạng ra khỏi stack
            long long x = st.top(); st.pop(); // Số hạng thứ 2
            long long y = st.top(); st.pop(); // Số hạng thứ 1
            st.push(tinhtoan(y, x, s));
        } else {
            // stoll xử lý được cả số âm như "-10"
            st.push(stoll(s));
        }
    }
    cout << st.top() << endl;
}

int main() {
    // Tăng tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}