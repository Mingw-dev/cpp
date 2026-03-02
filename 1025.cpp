#include<bits/stdc++.h>
using namespace std;
int n , k;
int a[1001];
int ok = 1;

void ktao() {
    for(int i = 1 ; i <= k ; i++) a[i] = 'A' + i - 1; 
}
void sinh() {
    int i = k;
    while(i >= 1 && a[i] == 'A' + (n - k + i) - 1) i--;
    if(i == 0) ok = 0;
    else {
        a[i] ++;
        for(int j = i + 1 ; j <= k ; j++) a[j] = a[j - 1] + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        cin >> n >> k;
        ktao();
        while(ok) {
            for(int i = 1 ; i <= k ; i ++) cout << (char) a[i];
            cout << endl;
            sinh();
        }

        ok = 1;
    }



}