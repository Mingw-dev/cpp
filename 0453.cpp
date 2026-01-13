#include<bits/stdc++.h>
using namespace std;
void binaryseach ( vector <int> a , int n , int x){
    int l = 0 , r = n - 1;
    while( l <= r ){
        int m = ( l + r ) / 2;
        if( a[m] == x){
            cout << m + 1<< endl;
            break;
        }
        if( a[l] <= a[m]){
            if( a[l] <= x && a[m] > x ){
                r = m - 1;
            }
            else l = m + 1;
        }
        else {
            if( a[m] <= x && x < a[r])
                l = m + 1;
            else r = m - 1;
        }
    }
    //return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector <int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        binaryseach( a, n , k);
        
    }
    
}