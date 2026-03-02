#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        set<int> a , b;
        for(int i = 0 ; i < n ; i++) {
            int x; cin >> x;
            a.insert(x);
        }
        for(int i = 0 ; i < m ; i++) {
            int x; cin >> x;
            b.insert(x);
        }
        set<int> hop , giao;
        for(int x : a) hop.insert(x);
        for(int x : b) hop.insert(x);
        for(int x : a) {
            if(b.count(x)) {
                giao.insert(x);
            }
        }
        for(int x : hop) cout << x << " ";
        cout << endl;
        for(int x : giao) cout << x << " ";
        cout << endl;
    }
}