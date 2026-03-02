#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    // Điều kiện không thể tạo số
    if ((s == 0 && n > 1) || s > 9 * n) {
        cout << "-1 -1" << endl;
        return;
    }
  

    int lon[100] = {0}, be[100] = {0};

    // Tìm số lớn nhất
    int s_copy = s;
    for(int i = 0; i < n; i++) {
        if(s_copy >= 9) {
            lon[i] = 9;
            s_copy -= 9;
        } else {
            lon[i] = s_copy;
            s_copy = 0;
        }
    }

    // Tìm số nhỏ nhất
    int tmp = s - 1; // Giữ lại 1 cho chữ số đầu tiên
    for(int i = n - 1; i >= 1; i--) { // Chạy đến vị trí index 1
        if(tmp >= 9) {
            be[i] = 9;
            tmp -= 9;
        } else {
            be[i] = tmp;
            tmp = 0;
        }
    }
    be[0] = tmp + 1; // Hàng cao nhất nhận giá trị còn lại + 1 đã giữ

    // In số nhỏ nhất trước
    for(int i = 0; i < n; i++) cout << be[i];
    cout << " ";
    // In số lớn nhất sau
    for(int i = 0; i < n; i++) cout << lon[i];
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}