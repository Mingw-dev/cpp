#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , m , k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    multiset<int> s;

    for(int i = 0 ; i < m ; i++) s.insert(a[i]);

    bool check = false;

    if(*s.rbegin() - *s.begin() <= k) {
        cout << 1 << endl;
        check = true;
    } 
    for(int i = m ; i < n ; i++) {
        s.insert(a[i]);
        s.erase(s.find(a[i - m]));
        if(*s.rbegin() - *s.begin() <= k) {
            cout << i - m + 2 << endl;
            check = true;
        } 
    }
    
    if(!check) cout << "NONE\n";
}