// Xét dãy xâu ký tự được tạo bởi quy tắc sau:

// F[0]  =  “A”
// F[1]  =  “B”
// …
// F[n]   =  F[n-1]  +  F[n-2]  với n > 1
// Với dấu + ở đây là phép nối 2 xâu với nhau.

// Cho hai số nguyên dương n và k. Hãy đếm số lượng ký tự ‘B’ trong k vị trí đầu tiên của xâu F[n].

// Input

// Dòng đầu tiên ghi số bộ test (không quá 30)

// Mỗi bộ test viết trên một dòng 2 số n và k (0 ≤ n ≤ 45; k không vượt quá độ dài xâu F[n])

// Output

// Ghi ra kết quả mỗi bộ test trên một dòng.

// Ví dụ

// Input

// Output

// 4

// 0 1

// 1 1

// 3 2

// 7 7

// 0

// 1

// 1

// 4

#include<bits/stdc++.h>
using namespace std;
long long f[100];

void dq(int a, l)
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f[0] = f[1] = 1;

    for(int i = 2 ; i <= 92 ; i++) f[i] = f[i - 2] + f[i - 1];
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        
    }
}

int main() {
    solve();
}