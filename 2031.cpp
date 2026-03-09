#include<bits/stdc++.h>
using namespace std;

char c;
bool u[1001];
char a[1001];
int n;
void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i];
    cout << endl;
}

char pha(char c) {
    return c == 'A' || c == 'E';
} 

bool check() {
    for(int i = 2 ; i < n ; i++) {
        if(pha(a[i]) && !pha(a[i - 1]) && !pha(a[i + 1]) ) return false;
    }

    return true;
}

void ql(int i) {
    for(int j = 'A' ; j <= c ; j++) {
        if(!u[j]) {
            a[i] = j;
            u[j] = true;

            if(i == n && check()) in();

            else ql(i + 1);
            u[j] = false;
        }
    }
}
int main() {
    cin >> c;
    n = c - 'A' + 1;
    ql(1);
}