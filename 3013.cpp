#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int k;
        string s;
        cin >> k >> s;

        map<char , int> mp;
        for(auto x : s) mp[x]++;

        vector<int> a;
        for(auto x : mp) a.push_back(x.second);
        int mx = *max_element(a.begin() , a.end());

        if(mx <= (s.size() + 1) / k) cout << "1\n";
        else cout << "-1\n";
    }
}