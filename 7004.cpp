#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        stack<char> st;

        for(auto x : s) {
            if(x == '(') st.push(x);

            else if(x == ')') {
                if(!st.empty() && st.top() == '(') st.pop();
                else st.push(x);
            }
        }

        int n = 0 , m = 0;
        while(!st.empty()){
            if(st.top() == '(') {
                n++;
                st.pop();
            }
            else {
                m++;
                st.pop();
            }
        }

        cout << (n + 1) / 2 + (m + 1) / 2 << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}