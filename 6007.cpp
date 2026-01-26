#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int &x : a) cin >> x;

        int l = 0 , r = n - 2;
        while( l < n - 1 && a[l] <= a[l + 1]) l++;
        while( r >= 0 && a[r] <= a[r + 1]) r--;

        int SoMin = *min_element(a.begin() + l , a.begin() + r + 2);
        int SoMax = *max_element(a.begin() + l , a.begin() + r + 2);

        while( l > 0 && a[l - 1] > SoMin) l--;
        while( r < n && a[r + 1] < SoMax) r++;

        cout << l + 1 << " " << r + 1 << endl;
        
    }
}