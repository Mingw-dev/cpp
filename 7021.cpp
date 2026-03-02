#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int n = s.size();

        stack<char> st;
        int cnt = 0;
        for(char x : s) {

            if(x == ')') {
                if(!st.empty() && st.top() == '(') {
                    cnt+= 2;
                    st.pop();
                }
            }

            if(x == '(')
                st.push(x);
            
        }

        cout << cnt << endl;
    }
}