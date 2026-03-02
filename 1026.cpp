#include<bits/stdc++.h>
using namespace std;
int a[1001] , n , ok = 1;

void ktao() {
    for(int i = 1 ; i <= n ; i++) a[i] = 6;
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 8)
    {
        a[i] = 6;
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 8;
}

int check() {

    if(a[1] != 8 || a[n] != 6) return false;

    for(int i = 1 ; i < n ; i ++) {
        if(a[i] == 8 && a[i + 1] == 8) return false;
    }

    for(int i = 1 ; i < n - 2 ; i++) {
        if(a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6 ) return false;
    }

    return true;
}
void in () 
{
    for(int i = 1 ; i <= n ; i++) cout << a[i];
    cout << endl;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    if(n < 6) return; 
    ktao();
    while(ok) {
        if(check()) in();
        sinh();
    }
}
int main() {
    solve();
}