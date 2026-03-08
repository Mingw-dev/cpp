#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;

        vector<int> a(n);
        map<int , int> mp;

        int cnt = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];

            int aim = k - a[i];
            if(mp.find(aim) != mp.end()) cnt += mp[aim];
            mp[a[i]] ++;
        }

        cout << cnt << endl;
    }
}