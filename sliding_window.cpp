#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k ;
        cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        long long sum = 0;
        for(int i = 0 ; i < k ; i++) sum += a[i];
        long long res = sum , idx = 0;
        for(int i = k ; i < n ; i++){
            sum = sum - a[i - k] + a[i];
            if(sum > res){
                res = sum;
                idx = i - k + 1;
            }
        }
        cout << res << "\n";
        for(int j = idx ; j < idx + k; j++){
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}