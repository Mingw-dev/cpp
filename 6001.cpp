#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin() , a.end(), greater<int>());
        int l = 0 , r = n - 1;
        while( l < r ) {
            cout << a[l] << " " << a[r] << " ";
            l++;
            r--;
        }
        if(l == r) cout << a[l] << endl;
        else cout << endl;
    }
}