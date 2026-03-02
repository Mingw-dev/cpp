#include <iostream>
#include <string>
#include <algorithm> // Thư viện chứa hàm next_permutation
#include <vector>

using namespace std;

void solve() {
    int id;
    string s;
    cin >> id >> s; // Đọc số thứ tự test và chuỗi số

    cout << id << " "; // In ra số thứ tự

    // next_permutation tự động biến đổi chuỗi s thành hoán vị tiếp theo
    // Nó trả về true nếu thành công, false nếu s đã là lớn nhất (ví dụ 987)
    if (next_permutation(s.begin(), s.end())) {
        cout << s << endl;
    } else {
        cout << "BIGGEST" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}