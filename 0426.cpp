#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n) , res;
        for(auto &x : a) cin >> x;
        sort(a.begin() , a.end());
        int l = 0 , r = n - 1;
        while( l <= r ){
            if( l <= r ) res.push_back(a[r]); r --;
            if( l <= r ) res.push_back(a[l]); l ++;
        }
        for(int i = 0 ; i < res.size() ; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}