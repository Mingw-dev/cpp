#include <bits/stdc++.h>
using namespace std;

int main() {
    // Tối ưu I/O cho lập trình thi đấu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n;
    // Đọc t và n
    if (!(cin >> t >> n)) return 0;

    // Khởi tạo mảng lưu bậc (kích thước n + 1)
    vector<int> deg(n + 1, 0);
    // Khởi tạo ma trận kề n x n (toàn số 0)
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));

    // Đọc danh sách kề cho n đỉnh
    for (int i = 1; i <= n; i++) {
        int k; 
        cin >> k; // k chính là bậc (số lượng đỉnh kề) của đỉnh i
        deg[i] = k;

        // Đọc tiếp k đỉnh kề của đỉnh i
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            // Đánh dấu có cạnh nối giữa i và v trên ma trận kề
            a[i][v] = 1;
        }
    }

    if (t == 1) {
        // Yêu cầu 1: In ra bậc của n đỉnh
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
        cout << "\n";
    } 
    else if (t == 2) {
        // Yêu cầu 2: In ra ma trận kề
        // In bậc của ma trận (số đỉnh n) trước
        cout << n << "\n";
        
        // In ma trận
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}