#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Hàm kiểm tra dư thừa ngoặc
string solve() {
    string s;
    getline(cin, s); // Đọc cả dòng bao gồm khoảng trắng
    
    stack<char> st;
    
    for (char c : s) {
        // Nếu là dấu đóng ngoặc ')'
        if (c == ')') {
            bool hasOperator = false;
            char top = st.top();
            st.pop();
            
            // Pop các phần tử cho đến khi gặp dấu mở ngoặc '('
            while (top != '(') {
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
                top = st.top();
                st.pop();
            }
            
            // Sau khi vòng while kết thúc (đã pop xong cặp ngoặc tương ứng)
            // Nếu không có toán tử nào ở giữa -> Dư thừa
            if (!hasOperator) {
                return "Yes";
            }
        } 
        // Nếu không phải ')' thì đẩy vào stack
        else {
            st.push(c);
        }
    }
    
    // Nếu duyệt hết mà không phát hiện dư thừa
    return "No";
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Xử lý trôi lệnh sau khi nhập số lượng test
    
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}