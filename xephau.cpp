// #include<bits/stdc++.h>
// using namespace std;
// int n , a[1001], b[1001] = {0} , xuoi[20] = {0} , nguoc[20] = {0};

// void in() {
//     for(int i = 1 ; i <= n ; i++) cout << a[i];

//     cout << endl;
// }

// void ql(int i) {
//     for(int j = 1 ; j <= n ; j++) {
//         if(!b[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]) {

//             a[i] = j;
//             b[j] = 1 ; xuoi[i - j + n] = 1 ; nguoc[i + j - 1] = 1;
//             if(i == n) in();

//             else ql(i + 1);
//             b[j] = 0 ; xuoi[i - j + n] = 0 ; nguoc[i + j - 1] = 0;

//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cin >> n;

//     ql(1);
// }


// Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó.

// Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

// Mỗi test gồm 8 dòng, mỗi dòng 8 số nguyên mô tả bàn cờ.

// Output: 

// Với mỗi test, ghi ra thứ tự bộ test và giá trị điểm lớn nhất đạt được trên một dòng.

// Ví dụ:

// Input

// Output

// 1

// 1 2 3 4 5 6 7 8

// 9 10 11 12 13 14 15 16

// 17 18 19 20 21 22 23 24

// 25 26 27 28 29 30 31 32

// 33 34 35 36 37 38 39 40

// 41 42 43 44 45 46 47 48

// 48 50 51 52 53 54 55 56

// 57 58 59 60 61 62 63 64

 

// Test 1: 260

 #include <bits/stdc++.h>

using namespace std;
using ll = long long;

int t, arr[10][10];
int n = 8;

int a[100], b[100], xuoi[100], nguoc[100];

int max_sum = 0;

void ql(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!b[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
        {
            a[i] = j;
            b[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if (i == n)
            {
                int sum = 0;
                for (int p = 1; p <= n; p++)
                {
                    sum += arr[p - 1][a[p] - 1];
                }
                max_sum = max(sum, max_sum);
            }
            else
            {
                ql(i + 1);
            }
            b[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}

int main()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        max_sum = 0;
        memset(b, false, sizeof(b));
        memset(xuoi, false, sizeof(xuoi));
        memset(nguoc, false, sizeof(nguoc));
        ql(1);
        cout << "Test " << i + 1 << ": " << max_sum << endl;
    }
}