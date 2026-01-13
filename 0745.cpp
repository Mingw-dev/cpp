#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll f[93];
void fibo(){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2 ; i < 93 ; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}
int main(){
    int t;
    cin >> t;
    fibo();
    while(t--){
        int l , r;
        cin >> l >> r;
        for(int i = l ; i <= r ; i++){
            cout << f[i] << " " ;
        }
        cout << "\n";
    }
}