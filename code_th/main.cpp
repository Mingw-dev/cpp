#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a , m;
    cin >> a >> m;
    int re = -1;
    for(int i = 0 ; i <= m ; i++){
        if((a *(long long) i  % m) == 1 ) {
            re = i;
            break;
        }
    }
    cout << re << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}