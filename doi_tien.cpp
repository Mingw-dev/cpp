#include<bits/stdc++.h>
using namespace std;

vector<int> menhgia = {1000 , 500 , 200 , 100 , 50 , 20 , 10 ,5 , 2, 1};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int cnt = 0;
        for(auto x : menhgia) {
            cnt += (n / x);
            n %= x;
        }

        cout << cnt << endl;
    }
}


// Cho xâu ký tự S bao gồm các ký tự và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số D; dòng tiếp theo là xâu S.
// T, S, D thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤D≤100.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ví dụ:

// Input

// Output

// 2
// 2

// ABB
// 2
// AAA

// 1
// -1




// Trang trại của nông dân John vừa mới nhận được một lượng công việc khổng lồ! Có thể tưởng tượng rằng, ngày làm việc của John bắt đầu từ thời điểm 0 và kết thúc tại thời điểm 109, được chia thành từng đơn vị thời gian. N công việc đã được gửi đến, công việc thứ k có hạn chót là Sk và nếu hoàn thành công việc đúng hạn, John sẽ được khoản tiền là Pk. Mỗi công việc cần đúng 1 đơn vị thời gian để hoàn thành, và John phải làm liên tục trong 1 đơn vị đó từ đầu đến cuối.

// Do lượng công việc quá lớn, nên anh có thể bỏ qua một số công việc nào đó. Hãy giúp John lựa chọn các công việc sao cho tổng lợi nhuận thu về là nhiều nhất.

// Input

// Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 105) là số lượng công việc.
// N dòng sau, mỗi dòng chứa hai số nguyên Sk và Pk (1 ≤ Sk, Pk ≤ 109) mô tả hạn chót và lợi nhuận thu được nếu hoàn thành công việc này đúng hạn (không quá thời điểm Sk)
// Output

// In ra lợi nhuận tối ưu có thể thu được
// Ví dụ

// Input

// Output

// 3

// 2 10

// 1 5

// 1 7

// 17