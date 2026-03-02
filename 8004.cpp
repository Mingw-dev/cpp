#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        string s;
        int k;
        cin >> k >> s;

        map<char, int> mp;
        priority_queue<int> pq; 
        for(auto x : s) mp[x]++;

        for(auto x : mp) pq.push(x.second);

        while(k > 0 && !pq.empty()) {
            int top = pq.top();
            pq.pop();

            --top;
            if(top > 0) pq.push(top);
            --k;
        }
        long long ans = 0;
        while(!pq.empty()) {
            ans +=(long long) pq.top() * pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }
}