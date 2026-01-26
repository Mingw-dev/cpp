#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;


    while(t--) {
        string s;
        cin >> s;
        map<char , int> mp;

        vector<int> a;
        for(char x : s) {
            mp[x] ++;
        }
        for(auto x : mp) a.push_back(x.second);

        int freq = *max_element(a.begin() , a.end());

        if(freq <= (s.size() + 1) / 2 ) cout << "1\n";
        else cout << "-1\n";

    }
}
int main() {
    solve();
}