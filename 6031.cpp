#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    // Deque lưu CHỈ SỐ (index) của các phần tử
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        // 1. Loại bỏ các phần tử đã trượt ra khỏi cửa sổ (chỉ số < i - k + 1)
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // 2. Duy trì tính giảm dần: 
        // Nếu phần tử mới (a[i]) lớn hơn các phần tử ở cuối deque, 
        // thì các phần tử đó không còn tác dụng -> Xóa đi
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }

        // 3. Thêm chỉ số hiện tại vào deque
        dq.push_back(i);

        // 4. In ra kết quả (khi đã duyệt đủ k phần tử đầu tiên)
        if (i >= k - 1) {
            cout << a[dq.front()] << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}