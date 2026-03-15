#include<bits/stdc++.h>
using namespace std;

int n;
int total;
bool ok = false;
int a[1001];
void ql(int i , int sum) {
    for(int j = i ; j <= n ; j++) {
        if(sum + a[j] <= total) {
            if(sum + a[j] == total){
                ok = true;
                break;
            }

            else ql(j + 1 , sum + a[j]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        int sumtt = 0;
        for(int i = 1 ; i <= n ; i++) {
            cin >> a[i];
            sumtt += a[i];
        }
        total = sumtt / 2;
        if(sumtt % 2){
            cout << "NO\n";
            continue;
        }
        ql(1 , 0);
        if(ok) cout << "YES\n";
        else cout << "NO\n";
        ok = false;
        
    }
}