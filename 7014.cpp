#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long long solve(ll x , ll y , char s) {
    if(s == '+') return x + y;
    if(s == '-') return x - y;
    if(s == '*') return x * y;
    else return x / y;
} 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        stack<string> st;
        for(int i = s.size() - 1 ; i >= 0 ; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string num1 = st.top(); st.pop();
                string num2 = st.top(); st.pop();

                ll tem = solve(stoll(num1) , stoll(num2) , s[i]);
                st.push(to_string(tem));
            }

            else {
                string tm = "";
                tm += s[i];
                st.push(tm);
            }

        } 

        cout << st.top() << endl;
    }
}