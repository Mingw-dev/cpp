#include<bits/stdc++.h>
using namespace std;

int n;
int u[1001];
int a[1001];

void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i];
    cout << endl;
}
bool check() {
    for(int i = 1 ; i < n ; i++) {
        if(abs(a[i] - a[i + 1]) == 1) return false;
    }

    return true;
}
void ql(int i) {
    for(int j = 1 ; j <= n ; j++) {
        if(!u[j]) {
            a[i] = j;
            u[j] = 1;

            if(i == n && check())in();

            else ql(i + 1);
            u[j] = 0;
         }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        memset(a , 0 , sizeof(a));
        memset(u , 0 , sizeof(u));
        ql(1);
    }
}