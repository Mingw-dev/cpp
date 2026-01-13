#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for( auto &x : a) cin >> x;
        int l = 0 , r = n - 1;
        while(l < n - 1 && a[l] <= a[l + 1]) l ++;
        while(r > 0 && a[r] >= a[r - 1]) r --;
        int sta = *max_element(a.begin() + l , a.begin() + r + 1);
        int end = *min_element(a.begin() + l , a.begin() + r + 1);
        while(r < n - 1 && a[r + 1] < sta) r ++;
        while(l > 0 && a[l- 1] > end) l --;
        cout << l + 1 << " " << r + 1 << endl;
    }
}