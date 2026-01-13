#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int i = n - 2;
        while(i >= 0 && a[i] > a[i + 1]) i--;
        
        int j = n - 1;
        while(j >= 0 && a[j] < a[i]) j--;
        swap(a[i] , a[j]);
        reverse(a.begin() + i + 1 , a.end());
        for(auto x : a) cout << x << " " ;
        cout << "\n";
    }
}