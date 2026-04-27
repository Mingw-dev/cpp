#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        queue<string> q;
        q.push("0");
        q.push("1");

        int cnt = 0;

        while(cnt < n) {
            string s = q.front();
            q.pop();

            string rev = s;
            reverse(rev.begin(), rev.end());

            cout << s + rev << " ";
            cnt++;

            q.push(s + "0");
            q.push(s + "1");
        }
        cout << "\n";
    }
}