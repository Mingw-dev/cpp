#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    sort(A.begin(), A.end());
    long long ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += A[i] * (2LL * i - N + 1);
    }
    cout << ans << "\n";
    return 0;
}
