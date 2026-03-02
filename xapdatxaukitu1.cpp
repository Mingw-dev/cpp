#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int k ; cin >> k;
        string s;
        cin >> s;

        map<char , int> mp;
        for(auto x : s) mp[x]++;

        int n = s.size();
        vector<int> a;
        for(auto x : mp) a.push_back(x.second);

        int mx = *max_element(a.begin() , a.end());

        if(mx <= (n + 1) / k) cout << "1\n";
        else cout << "-1\n";

    }
}