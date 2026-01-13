#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> a(n), lmin(n) , rmax(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        lmin[0] = a[0];
        for(int i = 1 ; i < n ; i++){
            lmin[i] = min(lmin[i - 1] , a[i]);
        }
        rmax[0] = a[n - 1];
        for(int i = n - 2 ; i >= 0 ; i--){
            rmax[i] = max(a[i] , rmax[i + 1]);
        }
        int i = 0 , j = 0;
        int res = -1;
        while( i < n && j < n){
            if(lmin[i] < rmax[j]) {
                res = max(res , j - i);
                j++;
            }
            else ++i;
        }
        cout << res << endl;
    }
}