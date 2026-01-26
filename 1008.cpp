#include<bits/stdc++.h>
using namespace std;

int n , a[1001] = {0} , ok = 1;

void ltao() {
    for(int i = 1 ; i < n ; i++) a[i] = 0;
}

void sinh() {
    int i = n;

    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }

    if(i == 0) ok = 0;
    else a[i] = 1;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> n >> k;

        ltao();

        while(ok) {
            int cnt = 0;

            for(int i = 1 ; i <= n ; i++) {
                if(a[i] == 1) cnt ++;
            }

            if(cnt == k) {
                for(int i = 1 ; i <= n ; i++) {
                    cout << a[i];
            }
            cout << "\n";
            }

            sinh();
        }
        ok = 1;
       
    }
}