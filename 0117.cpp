#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int tong (int n){
    if (n < 10 ) return n;
    int sum = 0;
    while( n  > 0){
        sum += n % 10;
        n /= 10;
    }
    return tong(sum);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << tong(n) << endl;
    }
}