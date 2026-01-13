#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        for(int i = 0 ; i < n - 1 ; i++){
            if(a[i] != 0){
                if(a[i] == a[i + 1]){
                    a[i] *= 2;
                    a[i + 1] = 0;
                }
            }
        }
        vector<int> b(n) , c(n);
        int k = 0 , id = 0;
        for(auto x : a) {
            if(x == 0) b[k++] = x;
            else c[id++] = x;
        }
        for(int i = 0 ; i < id ; i++) cout << c[i] << " ";
        for(auto i = 0 ; i < k ; i++) cout << b[i] << " ";
        cout << "\n";
    }
}