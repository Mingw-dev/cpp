#include<bits/stdc++.h>
using namespace std;

char a[1001];
int n , k , ok = 1;

void ktao() {
    for(int i = 1 ; i <= n ; i++) a[i] = 'A';
}

void sinh() {
    int i = n;

    while(i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        --i;
    }

    if(i == 0) ok = 0;
    else a[i] = 'B';
}

int check() {
    int cnt = 0 , len = 0;
    for(int i = 1 ; i <= n ; i++) {
        if(a[i] == 'A') len++;

        else {
            if(len == k) cnt++;
            if(len > k) return false;
            len = 0;
        }

    }
    if(len == k) cnt++;
    if(len > k) return false;
    return cnt == 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    ktao();
    int cnt = 0;
    while(ok) {
        if(check()) {
            cnt++;
        }
        sinh();
    }
    cout << cnt << endl;

    ok = 1;
    while(ok) {
        if(check()) {
            for(int i = 1 ; i <= n ; i++) cout << a[i];
            cout << endl;
        }
        sinh();
    }


}