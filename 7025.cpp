#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// Kiểm tra xem token có phải là toán tử hay không
bool isOperator(string s) {
    return (s == "+" || s == "-" || s == "*" || s == "/");
}

// Hàm thực hiện phép tính với long long
long long calculate(long long a, long long b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    return 0;
}

void solve() {
    int n;
    cin >> n;
    stack<long long> st;
    string s;
    for(int i = 0 ; i < n ; i++) {
        cin >> s;
        if(isOperator(s)) {
            long long v2 = st.top(); st.pop();
            long long v1 = st.top(); st.pop();
            
            st.push(calculate(v1, v2, s));
        } else {
            st.push(stoll(s));
        }
    }

    cout << st.top() << endl;
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