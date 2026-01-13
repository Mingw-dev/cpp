#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<ll> b(n);
        for(auto &x : a) cin >> x;
        sort(a.begin() , a.end());
        map<ll , ll> mp;
        for(int i = 0 ; i < n ; i ++){
            b[i] = a[i] * a[i];
            mp[b[i]] ++;
        }
        int cnt = 0;
        for(int i = n - 1 ; i >= 2 ; i --){
            bool check;
            int l = 0 , r = n - 1;
            while( l < r){
                if(a[l] + a[r] == a[i]) {
                    check = true;
                    cnt ++;
                    break;
                }
                else if(a[l] + a[r] < a[i]){
                    l ++;
                }
                else r--;
            }
        }
        if(cnt > 0) cout << "YES\n";
        else cout << "NO\n";
    }
}