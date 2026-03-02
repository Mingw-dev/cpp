#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> se;
        for(int &x : a) {
            cin >> x;
            
        }
        int  cnt = n;
       
        sort(a.begin() , a.end());
       
        for(int i = 0 ; i < n ; i++) {
            if(lower_bound(a.begin() + i + 1 , a.end() , 2 * a[i]) != a.end()) cnt--;
        }

        cout << cnt << endl;
    }
}