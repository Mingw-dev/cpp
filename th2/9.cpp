#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s) {
    if(s.size() % 2 == 1) return false;
    int l = 0 , r = s.size() - 1;

    while(l <= r) {
        if(s[l] != s[r]) return false;
        l++;
        r--;

    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        queue<string> q;
        q.push("0");
        q.push("1");
        
        while(!q.empty()) {
            string s = q.front();
            q.pop();
            
            string tmp = s;
            reverse(tmp.begin() , tmp.end());
            string res = s + tmp;
            if(res.size() > n) break;
            else cout << res << " ";
            q.push(s + "0");
            q.push(s + "1");
        }
        cout << endl;
    }
}