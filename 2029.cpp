#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001];
int aim;
bool ok;

void ql(int i , int sum) {
    if(ok) return;

    if(sum == aim) {
        ok = true;
        return;
    }

    for(int j = i ; j < n ; j++) {
        if(sum + a[j] <= aim) {
            ql(j + 1 , sum + a[j]);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n;
        ok = false;
        aim = 0; 

        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            aim += a[i];
        }

        aim /= 2;

        sort(a , a + n);

        ql(0 , 0);

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}