#include<bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n , k;
        cin >> n >> k;

        vector<int> a(n);

        for(int &x : a) cin >> x;

        sort(a.begin() , a.end());

        long long num1 = 0, num2 = 0 , num3 = 0 , num4 = 0;
        for(int i = 0 ; i < k ; i++) num1 += a[i];

        for(int i = k ; i < n ; i++) num2 += a[i];

        for(int i = 0 ; i < n - k ; i++) num3 += a[i];

        for(int i = n - k ; i < n ; i++) num4 += a[i];

        long long re = max((long long) abs(num1 - num2) , (long long) abs(num3 - num4));

        cout << re << "\n";

    }
}
int main() {
    solve();
}