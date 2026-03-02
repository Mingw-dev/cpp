#include<bits/stdc++.h>
using namespace std;

int gapdoi (int n , long long k) {
    long long mid = pow(2 , n - 1);
    if(k == mid) return n;
    if(k < mid) return gapdoi(n - 1 , k);
    return gapdoi(n - 1 , k - mid);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << gapdoi(n , k) << endl;
    }
}