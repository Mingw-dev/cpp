#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int cnt = 0;
        int l = 0 , r = n - 1;
        while(l <= r){
            if(a[l] == a[r]) {
                l++; r--;
            }
            else if(a[l] < a[r]){
                a[l + 1] += a[l];
                cnt ++;
                l++;

            }
            else if(a[l] > a[r]){
                a[r-1] += a[r];
                cnt++;
                r--;
            }
        }  
        cout << cnt << "\n";
    }
}