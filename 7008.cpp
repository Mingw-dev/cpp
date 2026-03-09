#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Hàm trả về độ ưu tiên của toán tử
int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0; // Trường hợp cho dấu ngoặc '('
}

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    string res = "";

    for (int i = 0; i < s.length(); i++) {
        // 1. Nếu là toán hạng
        if (isalnum(s[i])) {
            res += s[i];
        }
        // 2. Nếu là dấu mở ngoặc
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        // 3. Nếu là dấu đóng ngoặc
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // Xóa dấu '('
        }
        // 4. Nếu là toán tử
        else {
            while (!st.empty() && priority(st.top()) >= priority(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // Lấy nốt các toán tử còn lại
    while (!st.empty()) {
        if (st.top() != '(') res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}