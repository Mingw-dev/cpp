#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

ll pw(ll a , ll n) {
    if(n == 0) return 1;
    ll x = pw(a , n / 2);

    if(n % 2 == 0) return ( x * x ) % mod;
    else return ( ((x * x ) % mod )* a ) % mod;
}
void xl(ll &a) {
    ll b = 0;
    while( a > 0) {
        b = b * 10 + a % 10;
         a /= 10;
    }
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a , b;

    while(true) {
        cin >> a >> b;
        a % mod;
        b % mod;
        if(a == 0 && b == 0) break;
        
        cout << pw(a , b) << endl;
    }
}
int main() {
    solve();
}


Cho số nguyên dương n. Hãy cho biết có bao nhiêu dãy số nguyên dương có tổng các phần tử trong dãy bằng n. 

Dữ liệu vào: dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ liệu ghi một số nguyên dương n duy nhất không qua 1018. 

Kết quả: Mỗi bộ dữ liệu ghi ra một số nguyên duy nhất là số dư của kết quả tìm được khi chia cho 123456789.

Ví dụ:

Input

Output

1

3

4