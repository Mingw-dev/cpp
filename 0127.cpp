#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
int prime[MAX];
void sieve() {
    for (int i = 0; i < MAX; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                prime[j] = 0;
        }
    }
}
int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool check = false;
        for (int i = 2; i <= n / 2; i++) {
            if (prime[i] && prime[n - i]) { 
                cout << i << " " << n - i << "\n";
                check = true;
                break;
            }
        }
        if (!check) cout << "-1\n";
    }
}
