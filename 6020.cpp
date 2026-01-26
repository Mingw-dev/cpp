#include<bits/stdc++.h>
using namespace std;
int fin(vector<int> &a , int x , int n) {
    int l = 0 , r = n - 1;
    while( l <= r) {

        int mid = ( l + r ) / 2;
        if(a[mid] == x) return mid + 1;

        if(a[l] <= a[mid]) {
            if(x >= a[l] && x < a[mid]) r = mid - 1;
            else l = mid + 1;
        }

        else {
            if(x > a[mid] && x <= a[r]) l = mid + 1;
            else r = mid - 1;
        }

    }

    return -1;
  
}
int main() {
    int t;
    cin >> t;
    while(t--) {

        int n , x;
        cin >> n >> x;

        vector<int> a(n);
        for(int &x : a) cin >> x;
        
        cout << fin(a , x , n) << "\n";

        
    }
}