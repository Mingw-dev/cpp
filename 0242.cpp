#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n) , c (n);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int i = 0 ; i < n ; i++) c[i] = a[i] - b[i];
        
}