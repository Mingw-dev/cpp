#include<bits/stdc++.h>
using namespace std;
int n , a[1001], u[1001] = {0};
int cnt = 0;
void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
    cout << endl;
}
void dq(int i) {
  
    for(int j = 1 ; j <= n ; j++) {
        
        if(u[j] == 0) {
            a[i] = j;
            u[j] = 1;
            if(i == n) {
                cnt ++;
                cout << cnt << ": ";
                in();
            }
            else dq(i + 1);
            u[j] = 0;
        }
    }
}
int main() {
    cin >> n;
    dq(1);
}