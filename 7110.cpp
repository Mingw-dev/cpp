#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        stack<char> st;

        for(char x : s) {
            if(!st.empty() && ((x == ')' && st.top() == '(') || (x == ']' && st.top() == '[') || (x == '}' && st.top() == '{')) ) {
                st.pop();
            }

            if(x == '(' || x == '[' || x == '{') {
                st.push(x);
            }
        }

        if(st.empty()) cout << "YES\n";
        else cout << "NO\n";

    }
}


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}