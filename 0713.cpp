#include<bits/stdc++.h>
using namespace std;
int a[1000] , n , freq[1000];
void inkq(){
    for(int i = 1 ; i <= n ; i++)
        cout << a[i];
    cout << " ";
}
void solve(int i){
    for(int j = 1 ; j <= n ; j++){
        if(freq[j] == 0 ){
            a[i] = j;
            freq[j] = 1;
            if(i == n) inkq();
            else solve(i + 1);
            freq[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        solve(1);
        cout << "\n";
    }
}