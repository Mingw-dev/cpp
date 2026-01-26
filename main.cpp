#include <bits/stdc++.h>
using namespace std;

char a[100];      
bool used[100];   
char x, y;
int n;            

void in() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void ql(int i) {
    
    for (char j = x; j <= y; j++) {
        
        if (!used[j]) {
            used[j] = true;     
            a[i] = j;          
            
            if (i == n) in();   
            else ql(i + 1);     
            
            used[j] = false;    
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> x >> y;
    if (x > y) swap(x, y);
    n = y - x + 1;

    ql(1);

    return 0;
}