#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(auto &x : a) cin >> x;
        sort( a , a + n );
        int l = 0 , r = n - 1;
        ll tongMin = INT_MAX;
        while(l < r){
            ll mid = a[l] + a[r];
            if(abs(mid) < abs(tongMin)) tongMin = mid;
            if(mid < 0) l++;
            else r --;
        }
        cout << tongMin << endl;
    }
}