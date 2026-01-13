#include<bits/stdc++.h>
using namespace std;
int n, k, x[100], u[1000];
void inkq(){
    for(int i = 1 ; i <= n ; i++)
        cout << x[i];
    cout << "\n";
}
// void solve(int i){
//     for(int j = x[i - 1] + 1; j <= n - k + i; j++){   //sinh tổ hợp
//         x[i] = j;
//         if(i == k) inkq();
//         else solve(i + 1);
//     }
// }
// sinh hoán vị
void solve(int i){
    for(int j = 1 ; j <= n ; j ++){
        if(u[j] == 0){
            x[i] = j;
            u[j] = 1;
            if(i == n) inkq();
            else solve(i + 1);
            u[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        solve(1);
    }
}