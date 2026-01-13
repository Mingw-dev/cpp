#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b){
    if(mp[a] != mp[b]) return mp[a] > mp[b];
    else return a < b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        mp.clear();
        vector<int> a(n);
        for(int i = 0 ; i < n ; i ++) cin >> a[i];
        for(int x : a ) mp[x] ++;
        sort(a.begin() , a.end() , cmp);
        for(int x : a) cout << x <<  " ";
        cout << "\n";
    }
}