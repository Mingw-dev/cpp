#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return;

    vector<long long> a(n);
    for(auto &s : a) cin >> s;

    sort(a.begin(), a.end());
    bool check = false;

    for(int i = 0 ; i < n - 2 ; i++) {
        // Nếu đã tìm thấy rồi thì không cần chạy các vòng i tiếp theo
        if (check) break; 

        int l = i + 1, r = n - 1;
        while(l < r) {
            long long target = a[i] + a[l] + a[r];
            
            if(target == k) {
                cout << "YES\n";
                check = true;
                break; // Thoát vòng while ngay lập tức
            }
            else if(target < k) {
                l++; // Cần tổng lớn hơn
            }
            else {
                r--; // Cần tổng nhỏ hơn
            }
        }
    }
    if(!check) cout << "NO\n";
}

int main() {
    // Tối ưu tốc độ cin/cout
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}