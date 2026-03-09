#include<bits/stdc++.h>
using namespace std;
bool check(string s) 
{
    if(s == "+" || s == "-" || s == "*" || s == "/") return true;
    else return false;
}

long long solve(long long a , long long b , string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    return 0;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<string> a(n);
        for(auto &x : a) cin >> x;

        stack<long long> st;
        for(int i = n - 1 ; i >= 0 ; i--) {
            if(check(a[i])) {
                long long nu1 = st.top() ; st.pop();
                long long nu2 = st.top() ; st.pop();

                long long res = solve(nu1 , nu2 , a[i]);
                st.push(res);
            } else st.push(stoll(a[i]));
        }
        
        cout << st.top() << endl;
    }
}