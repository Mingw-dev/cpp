#include<bits/stdc++.h>
using namespace std;
int n , k;
int a[1001] = {0};

void in() {
    int le = 0 , chan = 0;
    for(int i = 1 ; i <= k ; i++) {
        if(a[i] % 2 == 0) chan++;
        else le ++;
    }

    if(chan > le) {
        for(int i = 1 ; i <= k ; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

// void in() {
//     for(int i = 1 ; i <= k ; i++) cout << a[i] << " ";
//     cout << endl;
// }
void ql(int i) {
    for(int j = a[i - 1] + 1; j <= n - k + i ; j++) {
        a[i] = j;
        if(i == k) in();

        else ql(i + 1);
    }
}
int main() {
    cin >> n >> k;
    ql(1);
}