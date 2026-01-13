#include<bits/stdc++.h>
using namespace std;
int n , x[100] , k, used[100];
// sinh xau nhi phan
// void inkq(){
//     for(int i = 1 ; i <= n ; i++){
//         cout << x[i];
//     }
//     cout << "\n";
// }
// void Try(int i){
//     for(int j = 0 ; j <= 1 ; j++){
//         x[i] = j;
//     if(i == n) inkq();
//     else Try(i + 1);
//     }
// }
//sinh to hop chap k cua n:
void inkq(){
    for(int i = 1 ; i <= k ; i++){
        cout << x[i];
    }
    cout << "\n";
}
//chữ số lớn nhất trong tổ hợp: i = n - k + i;
//số nhở nhất : i = x[i - 1] + 1;
void Try(int i){
    for(int j = x[i - 1] + 1 ; j <= n - k + i ; j++){
        x[i] = j;
        if(i == k) inkq();
        else Try(i + 1);
    }
}
// hoan vi
void inkq1(){
    for(int i = 1 ; i <= n ; i++){
        cout << x[i];
    }
    cout << "\n";
}
void try1(int i){
    for(int j = 1 ; j <= n ; j++){
        if(used[j] == 0){
            x[i] = j;
            used[j] = 1;
            if(i == n) inkq1();
            else try1(i + 1);
            used[j] = 0;
        }
    }
}
int main(){
    cin >> n ;
    try1(1);
}