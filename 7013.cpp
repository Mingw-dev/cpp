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
        getline(cin , s);

        stack<string> st;

        for(char x : s) {
            if(x == '+' || x == '-' || x == '*' || x =='/') {
                string num1 = st.top(); st.pop();
                string num2 = st.top(); st.pop();
                
                ll res = solve(stoll(num2) , stoll(num1) , x);

                st.push(to_string(res)); 
               
            }

            else {
                string tmp = "";
                tmp += x;
                st.push(tmp);
            }

        }

        cout << st.top() << endl;
    }
}