#include<bits/stdc++.h>
using namespace std;

void solve() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        map<int , int> mp;
        for(int &x : a) {
            cin >> x;
            mp[x]++;
        }
        int check = false;

        for(int i = 0 ; i < n ; i ++) {
            if(mp[a[i]] > 1) {
                cout << a[i] << endl;
                check = true;
                break;
            }
        }

        if(!check) cout << "NO\n";
    }
}
int main() {
    solve();
}