#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        stack<string> st;


        int n = s.size();

        for(int i = n - 1 ; i >= 0 ; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string bt1 = st.top(); st.pop();
                string bt2 = st.top(); st.pop();

                string tmp = "(" + bt1 + s[i] + bt2 + ")";

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