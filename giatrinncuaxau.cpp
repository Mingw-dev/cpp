#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int k; cin >> k;
        string s;
        cin >> s;

        int n = s.size();
        map<char ,int> mp;
        
        priority_queue<int> q;

        for(char x : s) mp[x]++;

        for(auto x : mp) q.push(x.second);

        while(k > 0 && !q.empty()) {
            int top = q.top();
            q.pop();
            top--;
            if(top > 0) q.push(top);
            k--;
        }

        long long ans = 0;

        while(!q.empty()) {
            int top = q.top();

            ans += (top * top);
            q.pop();
        }
        cout << ans << endl;

       

        
    }
}