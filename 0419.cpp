#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n , m;cin >> n >> m;
        vector<int> a(n) , b(m), c(n + m);
        set<int> d , e , giao;
        for(auto &x : a) {
            cin >> x;
            d.insert(x);
        }
        for(auto &x : b) {
             cin >> x;
             e.insert(x);
        }
        int k = 0;
        vector<int> hop;
        for(int i = 0 ; i < n ; i++) c[k++] = a[i];
        for(int i = 0 ; i < m ; i++) c[k++] = b[i];
        for(auto x : c) giao.insert(x);

        for(auto &x : d){
            if(e.find(x) != e.end()) hop.push_back(x);
        }
        for(auto &x : giao) cout << x << " ";
        cout << "\n";
        for(auto x : hop) cout << x << " ";
        cout << "\n";
     }
}