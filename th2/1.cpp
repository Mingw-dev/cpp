#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int n = s.size();

        stack<int> st;
        vector<int> tt(n);

        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '(') st.push(i);

            else if(s[i] == ')') {
                if(!st.empty()) {
                    int open = st.top();
                    st.pop();
                    tt[open] = 0;
                    tt[i] = 1;
                } else tt[i] = -1;
            } 
            else tt[i] = -2;
        }
        while(!st.empty()) {
            tt[st.top()] = -1;
            st.pop();
        }

        string res;
        for(int i = 0 ; i < n ; i++) {
            if(tt[i] == -2) res += s[i];
            else res += to_string(tt[i]);
        }

        cout << res << "\n";
    }
}