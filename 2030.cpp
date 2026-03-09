// //tổ hợp lặp

// #include<bits/stdc++.h>
// using namespace std;

// int n , k;
// int a[1001];

// void in() {
//     for(int i = 1 ; i <= k ; i++) cout << a[i];
//     cout << endl;
// }

// void ql(int i) {
//     for(int j = a[i - 1] ; j <= n ; j++) {
//         a[i] = j;

//         if(i == k) in();
//         else ql(i + 1);
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         cin >> n >> k;
//         a[0] = 1;
//         ql(1);
//     }
// }



#include<bits/stdc++.h>
using namespace std;
char c;
int k;

char a[1001];
void in() {
    for(int i = 1 ; i <= k ; i++) cout << a[i];
    cout << endl;
}
void ql(int i) {
    for(char j = a[i - 1] ; j <= c ; j++) {
        a[i] = j;
        if(i == k)in();
        else ql(i + 1);
    }
}

int main() {
    cin >> c >> k;
    a[0] = 'A';
    ql(1);
}