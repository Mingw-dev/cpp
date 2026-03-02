#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
=======
int main () {
>>>>>>> bf71882122a5a30ef35ff64f589b8d8d0331d3af
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
<<<<<<< HEAD
        vector<int> a(n);

        for(int &x : a) cin >> x;
        int l = 0 , r = n  - 1;
        while( l < n - 1 && a[l+1] >= a[l]) l++;
        while( r > 0 && a[r - 1] <= a[r]) r--;


        int smx = *max_element(a.begin() + l , a.begin() + r + 1);
        int smn = *min_element(a.begin() + l , a.begin() + r + 1);

        while(l > 0 && a[l - 1] > smn) l--;

        while( r < n - 1 && a[r + 1] < smx) r++;

        cout << l + 1 << " " << r + 1 << endl;


    }
}

int main() {
    solve();
=======

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
>>>>>>> bf71882122a5a30ef35ff64f589b8d8d0331d3af
}