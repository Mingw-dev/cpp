#include<bits/stdc++.h>
using namespace std;
//tong = tổng trái + tổng phải + số mid;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int tong = 0;
    for(auto x : a) tong += x;
    int l = 0;
    bool check = false;
    for(int mid = 0 ; mid < n ; mid++) {
        int r = tong - l - a[mid];
        if(l == r) {
            cout << mid + 1 << endl;
            check = true;
            break;
        }
        l += a[mid];
    }
    if(!check) cout << "-1\n";
}
int main(){
    int t;
    cin >> t;
   while(t--){

    solve();  
   }  
   
}  