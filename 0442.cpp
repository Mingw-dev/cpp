#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
bool binary( vector <int> v , int n , int x){
    int l = 0 , r = n - 1;
    while( l <= r){
        int mid = l + (r - l) / 2;
        if( v[mid] == x) return true;
        else if( x > v[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n , x; cin >> n >> x;
        vector <int> v;
        for(int i = 0 ; i < n ; i++){
            int y ; cin >> y;
            v.push_back(y);
        }
        sort(v.begin() , v.end());
        if(binary(v , n , x)) cout << 1 << endl;
        else cout << -1 <<endl;
    }
}