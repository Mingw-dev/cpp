#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[1005];
bool u[1005] = {false};
void in() {
    if(a[n] == m) {
        for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
        cout << endl;
    }
}
void ql(int i) {
    for(int j = 1 ; j <= n ; j++) {
        if(!u[j]) {
            a[i] = j;
            u[j] = true;
            if(i == n) in();
            else ql(i + 1);
            u[j] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    ql(1);
}