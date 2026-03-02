#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        stack<string> st;

        for(int i = s.size() - 1 ; i >= 0 ; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') {
                string str1 = st.top(); st.pop();
                string str2 = st.top(); st.pop();

                string tmp = str1 + str2 + s[i];
                st.push(tmp);
            }

            else {
                string tem = "";
                tem += s[i];
                st.push(tem);
            }
        }

        cout << st.top() << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}