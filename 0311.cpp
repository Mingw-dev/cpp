#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        map<int,int> mp;
        for(auto x : a) mp[x] ++;
        int res = -1;
        for(auto x : mp){
            res = max(res , x.second);
        }
        int n = a.size();
        if(res <= (n + 1) / 2) cout << "1\n";
        else cout <<"0\n";
    }
}