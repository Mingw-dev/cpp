#include<bits/stdc++.h>
using namespace std;
char a[1001];

int ok = 1  , n;

void ktao() {
    for(int i = 1; i <= n ; i++) a[i] = 'A';
}

void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i];
    cout << endl;
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 'H') {
        a[i] = 'A';
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 'H';
}

bool check() {
    if(a[1] != 'H' || a[n] != 'A') return false;
    for(int i = 1 ; i < n ; i++) {
        if(a[i] == 'H' && a[i + 1] == 'H') return false;
    }

    return true;
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        cin >> n;
        ktao();
        while(ok) 
        {
            if(check()) in();

            sinh();
        }
        ok = 1;
    }
}
int main() {
    solve();
}